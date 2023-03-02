/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/*
	inc2h, version 3
	Author: Alain Gibaud 2012-2013
	alain.gibaud@free.fr
*/
#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdio>
#include <time.h>
#include <ctype.h>
#include <cstdio>
#include <cstdlib>

#include "processor.h"

using namespace std ;


int execute_command(const string& comm, vector<string>&  r) ;
bool locate_inc() ;
string get_path(const string & path_and_file) ;
string get_filename(const string & path_and_file) ;
string get_nakedfilename(const string &  file) ;
string extract(const string &source , int pmode, int accsfr ) ;
string extract_all(const string &dir, int pmode ) ;
void usage(const char *) ;
bool decode_arg(int argc, char *argv[]) ;
int firstSFR(const string & devname, const string & incpath) ;

// --------------------------------
int mode ; 		// 0 = unknown, 1 = process one file, 2 = locate, 3 = process a directory
	// Note: mode 1 is disabled
int printmode ; 	// 1 = only structs, 2=only defines, 3=both
string arg ; 		// file or directory name
// --------------------------------

bool decode_arg(int argc, char *argv[])
{
    int i ;
    mode = 0 ;
    printmode = 0 ;
    arg.clear() ;

    for( i = 1 ; i < argc ; ++i)
    {
        if(argv[i] == string("-locate"))
        {
            if( mode != 0) return false ;
            mode = 2 ;
        }
        else if( argv[i] == string("-all"))
        {
            if( mode != 0 || i+1 >= argc) return false ;
            arg = argv[++i] ;
            mode = 3 ;
        }
	else if(  argv[i] == string("-define"))
	{
		printmode |= 2 ;
	}
        else if( argv[i] == string("-struct"))
	{
		printmode |= 1 ;
	}
        else
        {
	 
            if( mode != 0) return false ;
            arg = argv[i] ;
            mode = 1 ;
        }
    }
    if(printmode == 0) printmode = 3 ;
    return true ;
}

void usage(const char *p)
{
//    cout << "usage:    " << p << "  [options]  <inc_file>" << endl ;
    cout << endl << 
    "This utility makes '.h' files for cpik from '.inc' an '.lkr' files provided by gputils 1.0.0" 
	<< endl << endl ;
    cout << "usage:     " << p << "  [options]  -all <gputils .inc directory>" << endl ;
    cout << "or         " << p << " -locate" << endl << endl ;
    cout << "options   :" << endl ;
    cout << "-struct   : generates Microchip-compatible structs" << endl ;
    cout << "-define   : generates #defines compatible with cpik explicit bit-fields" << endl ;
    cout << "( by defaults, both are generated )" << endl ;
    exit(1) ;
}

int main(int argc, char *argv[])
{
    string status ;

    if( !decode_arg(argc, argv) ) usage(argv[0]) ;

    switch(mode)
    {
    case 0 :
        usage(argv[0]) ;
        break ;

    case 1:
	cout << "Sorry: this option is now disabled" << endl ;
         usage(argv[0]) ;
	/*
        status = extract(arg,printmode,-1) ; 
        if( status != "")
        {
            cerr << status  << endl ;
            exit(2) ;
        }
        */
        break ;

    case 2:
        status = locate_inc() ;
        if( status != "")
        {
            cerr << status  << endl ;
            exit(2) ;
        }
        break ;
    case 3:
        status = extract_all(arg,printmode) ;
        if( status != "")
        {
            cerr << status  << endl ;
            exit(2) ;
        }
        break ;
    }

    return 0 ;
}

// -------------------------------------------------------

int execute_command(const string& comm, vector<string>&  r)
{
    int status ;
    char t[512] ;
    FILE *f ;

    r.clear() ;
    f = popen((comm   + " 2>&1"  ).c_str(),"r") ;
    if( f == 0) return -1;

    while(fgets(t,511,f) == t)
    {
        unsigned int i = strlen(t) - 1 ;
        if(i >= 0 && t[i] == '\n') t[i] = 0 ;
        r.push_back( string(t) );
    }
    status = pclose(f) ;
    return status  ;
}

// -------------------------------------------------------


bool locate_inc()
{
    vector<string> r ;
    string dir ;

    int s = execute_command("locate p18f1220.inc", r) ;

    if( s != 0 || r.size() == 0) return false ;

    for( unsigned int i = 0 ; i < r.size() ; ++i)
    {
        if( r[i].size() != 0 && r[i][0] == '/')
        {
            dir = get_path(r[i]) ;
            cout << dir << endl ;
        }
    }

    return true ;
}


// -------------------------------------------------------


string get_path(const string & path_and_file)
{

    int i = path_and_file.rfind("/") ;
    return path_and_file.substr(0,i+1) ; ;
}

// -------------------------------------------------------


string get_filename(const string & path_and_file)
{
    int i = path_and_file.rfind("/") ;
    return path_and_file.substr(i+1) ; ;
}


// -------------------------------------------------------

string get_nakedfilename(const string &  file)
{
    int i =  file.rfind(".") ;
    return file.substr(0,i) ; ;
}

// -------------------------------------------------------
string extract(const string &source,int pmode, int accsfr )
{

    string error ;
    ifstream input(source.c_str()) ;



    if( ! input.is_open())
    {
        return  "Can't open " + source ;
    }


    string naked = get_nakedfilename( get_filename(source) );
    naked = bfblock::lower(naked) ;
    string dest = naked +".h" ;
    ofstream output(dest.c_str()) ;

    if( ! output.is_open())
    {
        return  "Can't open " + dest;
    }

    processor proc (naked, accsfr  ) ;


    if( !proc.extract_processor( input))
    {
        return "Can't find processor name"   ;
    }

    if( !proc.extract_registers( input ))
    {
        return "Can't find register definitions"   ;
    }

    if( !proc.extract_bits( input))
    {
        return "Can't find bit definitions"  ;
    }

    proc.make_aliases() ;
    proc.setmode(pmode) ;
    proc.make_H(output) ;

    return error ;
}


// -------------------------------------------------------

string extract_all(const string &dir,int pmode)
{
    string status ;
    vector<string> r1 ;
    vector<string> r2 ;

    int s1 = execute_command("ls -1 "+dir+"p18*.inc 2>/dev/null", r1) ;
    int s2 = execute_command("ls -1 "+dir+"P18*.INC 2>/dev/null", r2) ;
       
    vector<string> r(r1.size()+r2.size())  ;

    if( s1 == 0 ) r = r1 ;
    if( s2 == 0 ) copy(r2.begin(), r2.end(), r.begin()) ;
    sort(r.begin(), r.end()) ;
  
    // exception ... these files must not be processed
    string xxx = dir+"p18cxxx.inc", macro = dir+"p18macro.inc" ;
    
    if( r.size() != 0)
    {
        for( unsigned int i = 0 ; status == "" && i < r.size() ; ++i)
        {
	  string& dev = r[i] ; 
	  if(dev  != xxx && dev != macro ) 
	  {
	    int fsfr =  firstSFR(dev,dir)  ;
	    if( fsfr == -1) 
	      cout << "Warning: No info about limits of access bank - defaulted to first SFR" << endl ; 
            cout << "Extracting : " << dev << endl << flush;
            status = extract(dev , pmode, fsfr ) ;
	  }
        }
    }

    return status ;
}

/*
  this is a hack to find the addr of the first SFR located in access bank
*/
int firstSFR(const string & devname, const string & path)
{
  // file name for gputils 1.0.0
  string naked = get_nakedfilename( get_filename(devname) );
  // remove the 'p' prefix
  string filename(naked,1) ;
  // append _g suffix (generic ?)
  filename += "_g.lkr" ;
  // make path to lkr directory (suppose that lkr and include dirs are in same dir)
  string lkrpath=path ;
  lkrpath += "../lkr/" ;
  string name = lkrpath+filename ;
  ifstream f(name.c_str()) ;
  if( f.is_open())
  {
    string line ; 
    char  acc[100] ;
    int hex ;
    while( getline(f,line,'\n') )
    {
      // ACCESSBANK NAME=accesssfr  START=0xF60             END=0xFFF          PROTECTED
      // the strange way to match ACCESSBANK allows to support leading blanks
      // any number of separating blanks is also supported
      int i =sscanf(line.c_str(), "%s%*[ ]NAME=accesssfr%*[ ]START=0x%x", acc, &hex) ; 
      if(i == 2 && strcmp(acc,"ACCESSBANK") == 0  ) return hex ;
    }
    
  }
  return  -1  ;
}