/***************************************************************************
                          lexer.cpp  -  description
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

#include <ctype.h>
#include "lexer.h"
#include "compiler.h"
#include "utility.h"

Lexer::Lexer()
{
}
Lexer::~Lexer()
{
}

void Lexer::connect()
{
  _source.connect() ;
}


/** true is input matches "str" string (case sensitive) */
bool Lexer::match ( const char *str )
{
  int pos = mark() ;

  while ( ( char ) ch() == *str )
  {
    gch() ; ++str ;
  }
  if ( *str )
  {
    mark ( pos ) ;
    return false ;
  }
  return true ;
}

bool Lexer::cueq ( char model, char candidate )
{
  return ( ( model == candidate ) || ( tolower ( model ) == tolower ( candidate ) ) )  ;
}

/** true is input matches "str" string (case unsensitive) */
bool Lexer::cumatch ( const char *str )
{
  int pos = mark() ;

  while ( cueq ( ( char ) ch() ,  *str ) )
  {
    gch() ; ++str ;
  }
  if ( *str )
  {
    mark ( pos ) ;
    return false ;
  }
  return true ;
}


/** No descriptions */
bool Lexer::needblk()
{
  char c ;
  bool found ;
  for ( found=false ; ( c= ( char ) ch() ) == ' ' || c == '\n' || c == '\t' ; found = true ) gch() ;
  return found ;
}
bool Lexer::blk()
{
  needblk() ;
  return true ;
}
/*
bool Lexer::needspc()
{
  char c ;
  bool found ;
  for ( found=false ; ( c= ( char ) ch() ) == ' ' || c == '\t' ; found = true ) gch() ;
  return found ;
}
bool Lexer::spc()
{
  needspc() ;
  return true ;
}
*/
/** No descriptions */
int Lexer::ch()
{
  return _source.ch();
}
/** No descriptions */
int Lexer::nch ( int i )
{
  return _source.nch ( i );
}
/** No descriptions */
int Lexer::gch()
{
  return _source.gch() ;;
}
/** No descriptions */
int Lexer::mark ( int pos )
{
  return _source.mark ( pos ) ;
}

bool Lexer::zap ( char final )
{
  while ( ch() != EOF  && ch() != final ) gch() ;
  gch() ;
  return false ;
}


bool Lexer::ident ( string &id )
{
  id.clear() ;
  if ( ! xisalpha ( ch() ) ) return false ;
  id += ( char ) gch() ;
  while ( xisalnum ( ch() ) ) id += ( char ) gch() ;
  return true ;
}


bool Lexer::xisalpha ( int c )
{
  return isalpha ( c ) || c == '$' || c == '_' ;
}


bool Lexer::xisalnum ( int c )
{
  return isalnum ( c ) || c == '$' || c == '_' ;
}


bool Lexer::xisblank ( int c )
{
  return c == ' ' || c == '\n' || c == '\t' ;
}

bool Lexer::xisdigit10 ( int c )
{
  return c >= '0' && c <= '9' ;
}


bool  Lexer::number ( int& val )
{
  int  minus=1 , base ;

  if ( match ( "+" ) )
    ;
  else if ( match ( "-" ) )
    minus = -minus;

  if ( match ( "0x" ) )
    base = 16 ;
  else if ( match ( "0b" ) )
    base = 2 ;
  else if ( match ( "0" ) )
    base = 8 ;
  else
    base = 10 ;

  // hack : 0 only is considered as octal,  but xnumber fails,
  // because 0 is consumed by base prefix. Anyway, in such a case,
  // xnumber returns val==0, so 0 is considered as 0
  bool r =  xnumber ( val,base ) || base == 8;
  val *= minus ;
  return r ;
}
/*
 Parse a number in base 'base'
 '_' is allowed insid a number (but NOT at the beginning)
 and has no effect on the result
 This non standard feature can be used to split numbers into 'blocks'
 a-la ADA (useful improve readability of binary numbers)
*/

bool Lexer::xnumber ( int& val, int base )
{
  int    d=0;
  // I am not sure it is a good idea to reset the value before
  // a correct number is detected, but I can't change that
  // before being sure that it will not break external code
  val = 0 ;
  // at least one digit is needed
  if ( digit ( ch(), base ) == -1 )
    return false;

  for ( val = 0 ; ( ch() == '_' )  || ( ( d = digit ( ch(), base ) ) != -1 )  ; gch() )
  {
    if ( ch() != '_' ) val  = ( val *base ) + d;
  }
  return true ;
}


/*
 Parse a floating point number
*/ 

bool Lexer::fnumber ( float& f )
{
  int pos = mark() , digits=0 ;
  string buf ;

  if ( ch() == '+' || ch() == '-' ) buf += gch() ;

  while ( xisdigit10 ( ch() ) )
  {
    buf += gch() ; ++digits ;
  }
  if ( ch() != '.' && toupper(ch()) != 'E' && toupper(ch()) != 'F' )
  {
    // missing dot or E, cannot be a float constant
    mark ( pos ) ;
    return false;
  }
  if ( ch() == '.' )
  {
    buf += gch() ;
    while ( xisdigit10 ( ch() ) )
    {
      buf += gch() ; ++digits ;
    }
  }

  if ( digits )
  {
    if ( ( ch() == 'E' ||  ch() == 'e' ) )
    {
      buf +=  gch() ;
      if ( ch() == '+' || ch() == '-' ) buf +=  gch() ; // optional
      int nexp ;
      for ( nexp =0 ; xisdigit10 ( ch() ) ;++nexp )
      {
        buf += gch() ;
      }
      if ( ch() == 'f' || ch() == 'F' ) gch() ; // optional
      if ( nexp ) return utility::stringTo<float>( buf, f ) ;
    }
    else 
    {
      if ( ch() == 'f' || ch() == 'F' ) gch() ; // optional
      bool b = utility::stringTo<float>( buf, f ) ;
      return b ;
    }
  }
  // malformed exponent, or no digits
  mark ( pos ) ;
  return false;
}

int Lexer::digit ( int c, int b )
{
  int       r;

  if ( c >= '0' && c <= '9' )
    r = c - '0';
  else if ( c >= 'a' && c <= 'z' )
    r = c - 'a' + 10;
  else if ( c >= 'A' && c <= 'Z' )
    r = c - 'A' + 10;
  else
    r = -1;

  if ( r < 0 || r >= b )
    r = -1;
  return r;
}

/** Do not use for parsing because of EOF special treatment */
string Lexer::nextChars ( int n )
{
  int pos = mark() ;
  string r ;
  for ( ; n > 0 ; --n )
  {
    if ( ch() == EOF )
    {
      r += "<EOF>" ; break ;
    }
    else if ( ch() == '\n' )
    {
      break ; // do not cross lines boudaries
    }
    r += ( char ) gch() ;
  }
  mark ( pos ) ;
  return r ;
}
/** No descriptions */
bool Lexer::kmatch ( const char *keyword )
{
  blk() ;
  int pos = mark() ;
  if ( match ( keyword ) && !xisalnum ( ch() ) ) return true ;
  mark ( pos ) ;
  return false ;
}
/** look for next keyword, but does not seek over */
bool Lexer::kcheck ( const char *keyword )
{
  blk() ;
  bool b;
  int pos = mark() ;
  b=  match ( keyword ) && !xisalnum ( ch() ) ;
  mark ( pos ) ;
  return b ;
}

/** Convert an escape sequence to an unique code */
int Lexer::esc_seq()
{
  int       r;

  gch();                        /* manger le \ */

  if ( ch() == '\\' )           /* c'est un \ */
  {
    r = gch();
  }
  else if ( ch() == '\'' )      /* c'est une ' */
  {
    r = gch();
  }
  else if ( ch() == 'a' )       /* alert */
  {
    gch();
    r = '\a' ;
  }
  else if ( ch() == 'b' )       /* backspace */
  {
    gch();
    r = '\b' ;
  }
  else if ( ch() == 'f' )       /* formfeed */
  {
    gch();
    r = '\f' ;
  }
  else if ( ch() == 'n' )       /* newline */
  {
    gch();
    r = '\n' ;
  }
  else if ( ch() == 'r' )       /* cr */
  {
    gch();
    r = '\r' ;
  }
  else if ( ch() == 't' )       /* tab*/
  {
    gch();
    r = '\t' ;
  }
  else if ( ch() == 'v' )       /* vertical tab */
  {
    gch();
    r = '\v' ;
  }
  else if ( ch() == '"' )       /* " */
  {
    r = gch();
  }
  else if ( ch() >= '0' && ch() <= '7' ) /* octal constant */
  {
    int       d;

    unsigned int ur = 0;
    while ( ( d = digit ( ch(), 8 ) ) != -1 )
    {
      gch();
      ur = ( ur << 3 ) + d;
    }
    r = ur ;
  }
  else if ( ch() == 'x' )       /* hex constant */
  {
    int       d;

    gch();
    unsigned int ur = 0;
    while ( ( d = digit ( ch(), 16 ) ) != -1 )
    {
      gch();
      ur = ( ur << 4 ) + d;
    }
    r = ur ;
  }
  else
  {
    /* unknown escape sequence */
    r = '\\';
  }

  return r;
}

/** No descriptions */
void Lexer::getLocation ( string& file, int& line )
{
  _source.getLocation ( file, line ) ;
}
/** Can be used to pass a fake token to the Lexer
 */
void Lexer::pushBack ( const char *s )
{
  _source.pushBack ( s ) ;
}
/** No descriptions */
bool Lexer::opMatch ( const char *op )
{
  blk() ;
  bool r = match ( op ) ;
  blk() ;
  return r ;
}
/** True if s is matched, but not followed by
any char in r
*/
bool Lexer::matchReject ( const char *s, const char *r )
{
  blk() ;
  int i = mark() ;
  if ( match ( s ) )
  {
    for ( ; *r ; ++r )
    {
      if ( ch() == *r )
      {
        mark ( i ) ; return false ;
      }
    }
    return true ;
  }
  return false ;
}

/** matches a double quote surrounding by optional blanks */
bool Lexer::matchDQuote()
{
    blk() ;
    bool r = match ( "\"" ) ;
    blk() ;
    return r ;

}
