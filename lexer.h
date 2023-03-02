/***************************************************************************
                          lexer.h  -  description
                             -------------------
    begin                : sam nov 20 2004
    copyright            : (C) 2004 by Gibaud Alain
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

#ifndef LEXER_H
#define LEXER_H


/**A simple lexer for reading C source files.
  *@author Gibaud Alain
  */
  
#include "file.h"

class Compiler ;


class Lexer {
public: 
	Lexer();
	~Lexer();
  /** connect Lexer to input stream and Flatten stream */
  void connect()  ;
  /** Exact match */
  bool match(const char *a_string);
  /** case insensitive exact match */
  bool cumatch(const char *a_string);
  /** true if chars are equal (case insensitive) */
  bool cueq(char , char ) ;
  /** Match a keyword : ie exact match not followed by AN char */
  bool kmatch(const char *keyword);
  /** Match a keyword : ie exact match not followed by AN char. Don't seek over. */
  bool kcheck(const char *keyword);
  /** No descriptions */
  bool blk();
  bool spc();
  /** look for any blanks */
  bool needblk();
  /** look at blanks (excluding newlines) */
  bool needspc();
  /** peek current char */
  int ch();
  /** peek n'th char */
  int nch(int n);
  /** peek current char and discard it from input */
  int gch();
  /** get/set current position */
  int mark(int k = -1) ;
  /** abort current line parsing */
  bool zap(char final='\n');
  /** abort current instruction parsing */
  bool zapInstr() { return zap(';') ; }
  /** look for a valid C identifier, returns it */
  bool ident(string &id);
  /** return true if c is a blank char  */
  bool xisblank(int c);
  /** low level parsing tools */
  int digit(int c, int b) ;
  bool xnumber(int& val, int base=16) ;
  bool number(int& val) ;
  bool fnumber(float &f)  ;
  bool xisalnum(int c);
  bool xisdigit10(int c);
  bool xisalpha(int c);
  /** Fetch nex n chars (do not use for parser) */
  string nextChars(int n);
  /** Convert an escape sequence to an unique code
  (string an char litterals parsing) */
	int esc_seq() ;
  /** No descriptions */
  // const char * setInput(const char *);
  /** No descriptions */
  void getLocation(string& file, int& line);
  /** Can be used to pass a fake token to the lexer
  */
  void pushBack(const char *s);
  /** No descriptions */
  bool opMatch(const char *op);
  /** No descriptions */
  bool matchReject(const char *s, const char *r);
private:
  
  File _source ;
};

#endif
