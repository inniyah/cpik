
/***************************************************************************
                          assembler_optimizer.h  -  description
                             -------------------
    begin                : 2011-07-18
    copyright            : (C) 2011 Josef Pavlik
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

#ifndef ASSEMBLER_OPTIMIZER_H
#define ASSEMBLER_OPTIMIZER_H
#include <string>
#include <map>
using namespace std ;
  
class JumpInfo
{
public:
  JumpInfo(int t=0) { type=t; range=0; }
  int type;
  int range;
};

class JumpTable 
{
private:
  string inputLine;
  int id;
  int lastJump;
  map<int,JumpInfo> table;
  int cmdPos;

public:
  void init() { table.clear(); resetCounter(); }
  void resetCounter(void) { id=0; lastJump=0; }
  void newLine(string line);
  bool isJump(void);
  int getId(void);
  string getModifiedLine(void);
  void makeLongerLastJump(int by=1);
  int count(void);
  int countOptimized(int *words_saved);


private:
  int findJump(int *type); // returns 0 if it's not a jump or position of end of command
  string getModifier(void);


};


class Assembler
{
private:
  string programPath;
  string asmName;
  string hexName;
  string workName;
  string listName;
  string assemblerOutput;
  JumpTable jumpTable;

public:
  Assembler() 
  {
    programPath="gpasm";
  }
  void setProgramPath(string pp)
  {
    programPath=pp;
  }
  const char * doAssembly(string inFileName, string outFileName) ;

private:
  const char * doAsmOptimize( bool &outOfRange );
  const char * doAsmNoOpt( );
  const char * prepareWorkfile ();
  const char * scanListfile ();
  const char * getMemoryUsed ( int *wordsUsed );


};

#endif
