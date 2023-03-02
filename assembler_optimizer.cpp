
/***************************************************************************
                          assembler_optimizer.cpp  -  description
                             -------------------
    begin                : 2011-07-19
    copyright            : (C) 2011 by Josef Pavlik
    email                : josef@pavlik.it
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/


/*
 * this module tries to assembly the code produced by linker with all jumps "near"
 * the "near" jump covers area from $-128 to $+127
 * All jumps that want to go outside this area causes error during assembly.
 * These errors are not reported to user, but jumps that have caused this errors are
 * replaced by "middle" jumps. Middle jumps can go to area $-1024 to $+1023.
 * After this replacement, the assembler is invoked again and the result is
 * checked for the range errors. The replacement can cause that other near jumps
 * causes the same error and/or some of the middle jumps can be insufficient.
 * In this case the MID jumps are replaced by FAR jumps, that can cover
 * entire capacity of memory and the remaining near jumps are repraced by mid jumps.
 * And so on until no out-of-range errors are issued.

 * in the real project about 90% of jumps can be optimized from FAR to MID or NEAR
 * the gain of code size is about 10%.
*/

#include "assembler_optimizer.h"

#include <iostream>
#include <iterator>
#include <sstream>
#include <cstdlib>
#include "compiler.h"
#include "utility.h"

using namespace std ;

#define GPASM_OPTIONS "-w2 -L"
#define ERROR_OUT_OF_RANGE "Error [126]"
#define MEMORY_USED "Program Memory Words Used:"
#define MAX_ITERATIONS 10
#define JUMP_ID ";JUMP_ID"

const char * const jumpCommands[]=
{
  "IBRA", "IBZ", "IBNZ", "IBC", "IBNC", "ICALL"
};

#define RANGES 3
const char * const jumpRanges[RANGES]=
{
  "_NEAR", "_MID", "_FAR"
};

const int jumpWords[][RANGES]= // for statistics only
{
  {1,2,2}, {1,2,3}, {1,2,3}, {1,2,3}, {1,2,3}, {1,2,2}
};



int JumpTable::countOptimized ( int *words_saved )
{
  int count=0;
  *words_saved=0;
  map<int,JumpInfo>::iterator i;
  for ( i=table.begin(); i!=table.end(); ++i )
  {
    int t=i->second.type;
    int r=i->second.range;
    if ( r<0 ) r=0;
    if ( r>RANGES-1 ) r=RANGES-1;
    int ws=jumpWords[t][RANGES-1]-jumpWords[t][r];
    if ( ws ) count++;
    *words_saved+=ws;
  }
  return count;
}

int JumpTable::count()
{
  return table.size();
}


void JumpTable::newLine ( string line )
{
  inputLine=line;
  size_t p=0;
  if ( ( p=inputLine.find ( "\n" ) ) !=string::npos ) inputLine=inputLine.substr ( 0,p );
  if ( ( p=inputLine.find ( "\r" ) ) !=string::npos ) inputLine=inputLine.substr ( 0,p );
  int cmdType;
  cmdPos=findJump ( &cmdType );
  if ( isJump() )
  {
    id++;
    if ( table.find ( id ) ==table.end() )
    {
      table[id].type=cmdType;
    }
  }
  int i=getId();
  if ( i ) lastJump=i; // during scan of list file
}
int JumpTable::findJump ( int *type ) // returns 0 if it's not a jump or position of end of command
{
  for ( size_t i=0; i<sizeof ( jumpCommands ) /sizeof ( *jumpCommands ); i++ )
  {
    string jcmd=string ( jumpCommands[i] );
    size_t p=inputLine.find ( jcmd );
    if ( p!=string::npos
         && p>0 && isblank ( inputLine[p-1] ) && isblank ( inputLine[p+jcmd.size() ] )
         && inputLine.find ( "macro",p ) ==string::npos
         && inputLine.find ( "#define" ) ==string::npos
       ) // found " command " *NOT* followed by 'macro' and *NOT* preceded by #define
    {
      *type=i;
      return p+jcmd.size();
    }
  }
  return 0;
}

bool JumpTable::isJump ( void )
{
  return cmdPos!=0;
}

int JumpTable::getId ( void )
{
  size_t p=inputLine.find ( JUMP_ID );
  if ( p==string::npos ) return 0; // not found
  return atoi ( inputLine.substr ( p+sizeof ( JUMP_ID ) ).c_str() );
}

string JumpTable::getModifier ( void )
{
  int r=table[id].range;
  if ( r<0 ) r=0;
  if ( r>RANGES-1 ) r=RANGES-1;
  return jumpRanges[r];
}

void JumpTable::makeLongerLastJump ( int by )
{
  if ( c18.debugOpt() & DEBUG_ASM_PRINT_LOG )
  {
    cout << "make longer jump #" << lastJump ;
    if ( by>1 )
    {
      cout << " by " << by << " levels" ;
    }
    cout << endl;
  }
  if ( !lastJump ) return;
  if ( table.find ( lastJump ) ==table.end() )
  {
    table[lastJump].range=by;
  }
  else
  {
    table[lastJump].range+=by;
  }
}

string JumpTable::getModifiedLine ( void )
{
  if ( isJump() )
  {
    return inputLine.substr ( 0,cmdPos ) +getModifier() +inputLine.substr ( cmdPos ) +" "+JUMP_ID+" "+utility::toString ( id );
  }
  else
  {
    return inputLine;
  }

}

//               00317         IBZ L18_main_646_endif ;JUMP_ID 6
//Error [126] : Argument out of range (13160 not between -128 and 127)

const char * Assembler::scanListfile ()
{
  ifstream s ( listName.c_str() ) ;
  if ( !s.is_open() )  return "Could not open lst file." ;

  string line ;
  jumpTable.resetCounter();

  while ( getline ( s,line ) )
  {
    jumpTable.newLine ( line );
    if ( line.find ( ERROR_OUT_OF_RANGE ) !=string::npos )
    {
      int by=1;
      size_t p=line.find ( '(' );
      if ( p!=string::npos )
      {
        int jump_offset=atoi ( line.substr ( p+1 ).c_str() );
        // why -1? because the new (mid) jump will be placed at next address respect to original jump
        if ( jump_offset<- ( 1024-1 ) || jump_offset>1023 )
        {
          by=2; // need be longer by 2 steps, so from NEAR directly to FAR
        }
      }
      jumpTable.makeLongerLastJump ( by );
    }
  }
  return 0;
}


const char * Assembler::getMemoryUsed ( int *wordsUsed )
{
  ifstream s ( listName.c_str() ) ;
  if ( !s.is_open() )  return "Could not open lst file." ;
  string line ;

  while ( getline ( s,line ) )
  {
    size_t p;
    if ( ( p=line.find ( MEMORY_USED ) ) !=string::npos )
    {
      *wordsUsed=atoi ( line.substr ( p+sizeof ( MEMORY_USED ) ).c_str() );
      return 0;
    }
  }
  return "Could not found 'memory used' in list file";
}

const char * Assembler::prepareWorkfile ()
{
  ifstream s ( asmName.c_str() )  ;
  if ( ! s.is_open ( ) ) return "Could not open asm file." ;

  ofstream d ( workName.c_str() ) ;
  if ( ! d.is_open ( ) ) return "Could not open work file." ;

  string line ;

  jumpTable.resetCounter();
  while ( getline ( s,line ) )
  {
    jumpTable.newLine ( line );
    string ml=jumpTable.getModifiedLine();
    if ( ! ( d <<  ml << "\n" ) ) return "Could not write to work file." ;
  }
  if ( ! ( d << flush ) )
  {
    return "Could not close work file.";
  }
  return 0;
}

const char * Assembler::doAsmOptimize ( bool &outOfRange )
{
  string cmd;
  FILE *f;
  char buffer[1000] ; // sufficient for the error messages 

  cmd=utility::quote(programPath)+" "+GPASM_OPTIONS+" -D JUMP_OPTIMIZING"+ " -o "+utility::quote(hexName)+" "+utility::quote(workName);
  if ( c18.debugOpt() & DEBUG_ASM_PRINT_LOG )
  {
    cout << cmd << endl;
  }

  f = popen ( cmd.c_str(), "r" ) ;
  if ( f == 0 )  return "Assembler not available." ;

  outOfRange=false;
  bool otherError=false;
  assemblerOutput="";
  while ( fgets ( buffer, sizeof ( buffer ), f ) != 0 )
  {
    string line ( buffer );
    assemblerOutput+=line;
    if ( line.find ( ERROR_OUT_OF_RANGE ) !=string::npos )
    {
      // this is the out-of-range error, so for us is only warning
      outOfRange=true;
    }
    else
    {
      if ( line.find ( "Error" ) != string::npos ) otherError=true;
    }
  }
  int stat = pclose ( f ) ;

  bool assemblerError = stat != 0 ;

  if ( ( assemblerError && !outOfRange ) || otherError )
  {
	return utility::setMessage("Assembler error - return code "+utility::toString(stat)) ;
  }

  return 0;
}

const char * Assembler::doAsmNoOpt( )
{
  string cmd;
  FILE *f;
  char buffer[1000] ; // sufficient for the error messages 

  cmd=utility::quote(programPath)+" "+GPASM_OPTIONS+" -o "+utility::quote(hexName)+" "+utility::quote(asmName);
  if ( c18.debugOpt() & DEBUG_ASM_PRINT_LOG )
  {
    cout << cmd << endl;
  }
  f = popen ( cmd.c_str(), "r" ) ;

  if ( f == 0 )  return "Assembler not available." ;

  while ( fgets ( buffer, sizeof ( buffer ), f ) != 0 )
  {
    cerr << buffer  ;
  }
  int stat = pclose ( f ) ;

  bool assemblerError = stat != 0 ;

  if ( assemblerError )
  {
	return utility::setMessage("Assembler error - return code "+utility::toString(stat)) ;
  }

  return 0;
}

const char * Assembler::doAssembly ( string inFileName, string outFileName )
{
 const char *err = 0 ;
  asmName=inFileName;
  hexName=outFileName;

  string nakedFileName = outFileName ;
  size_t i = nakedFileName.rfind ( "." ) ;
  if ( i != string::npos ) nakedFileName.erase ( i ) ;

  workName=nakedFileName+".asm.asm";
  listName=nakedFileName+".lst";

  bool outOfRange=true;
  bool done=false;

  jumpTable.init();
  for ( i=0; !done && i<MAX_ITERATIONS; i++ )
  {
    err=prepareWorkfile();
    if ( !err ) err=doAsmOptimize ( outOfRange );
    if ( !err && !outOfRange )
    {
      cerr << assemblerOutput; // put out the warnings
      done=true;
      break;
    }
    if ( outOfRange ) err=scanListfile();
    if ( err )
    {
      // warning - could not optimize
      cerr << "Warning: " << err << "; The jumps cannot be optimized" << endl;
      break;
    }
  }
  if ( !done )
  {
    err=doAsmNoOpt();
    if ( err )
    {
      return err;
    }
  }
  if ( c18.debugOpt() & DEBUG_ASM_PRINT_JUMP_OPT_STAT )
  {
    int words_saved;
    int jumps_optimized=jumpTable.countOptimized ( &words_saved );
    int jumps_total=jumpTable.count();
    cout << "Jump optimization: " << jumps_optimized << " of " << jumps_total << " ( "
    << jumps_optimized*100/jumps_total << "% ) jumps has been optimized. "
    << words_saved << " words were saved.\n";
  }
  int mu;
  err=getMemoryUsed ( &mu );

  // ++gib: note romSize is in bytes, but mu is in words

  if ( !err && (mu*2)>c18.romSize )
  {
	ostringstream mm ;
	mm << "Error: No space left on device. "<<  mu  << " words are used but only " << (c18.romSize/2) << " words are available." ;
	return utility::setMessage( mm.str() ) ;
  }
  if ( !err ) cout << "Program memory used: " << (mu) << " words" << endl;
  return err;
}

