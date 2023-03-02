/***************************************************************************
                          file.h  -  description
                             -------------------
    begin                : mar jan 27 2004
    copyright            : (C) 2004 by Alain Gibaud
    email                : alain.gibaud@free.fr
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef FILE_H
#define FILE_H

class Compiler ;
class Flatten ;

#include <iostream>
#include <fstream>
using namespace std ;
/**
  *@author Alain Gibaud
  This class is just an interface to ifstream for
  management of buffer, push back operations and line numbers tracking
  It dos not manage file open nor close.
*/

class File
{
public: 
	File();
  /** No descriptions */
	 ~File();
  /** No descriptions */
   bool isConnected();
  /** No de1scriptions */
   bool open(const string & );
   bool getLine() ;
   int ch() ;
   int gch() ;
   int nch(int offset = 1) ;
   int mark(int k = -1) ;
  /** No descriptions */
  void getLocation(string& file, int& line);
  /** can be used to submit a fake token to the lexer */
  void pushBack(const char *s);
  /** No descriptions */
  void connect( );
private: // Private attributes
  
  ifstream *inputstream;  // input flow

  string current_file_name ;
  int current_line ;
  string buffer ;
  int kbuffer ;
};

#endif
