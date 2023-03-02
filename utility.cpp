/***************************************************************************
                          utility.cpp  -  description
                             -------------------
    begin                : mer déc 8 2004
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
#include <sstream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <fstream>
#include <sstream>
#include "utility.h"
#include "portability.h"
using namespace std ;

#include "stringlist.h"

/** allows to turn dynamic strings to static ones */
char *utility::staticbuf  ;
unsigned int utility::staticbufsz = 0 ;
bool utility::created = false ;

/** singleton instance (ressource allocatior/deallocator) */
utility allocator ;

/** simple int->string converstion (base 10) */
/*
Replaced by a  generic version
string utility::toString(int k)
{
  ostringstream s ;
  s << k ;
  return s.str() ;
}
*/
/** simple int->string converstion (base 16) */
string utility::toHexString ( int k )
{
  ostringstream s ;
  s << hex << setw ( 2 ) << setfill ( '0' ) << k ;
  return s.str() ;
}
/** int->string converstion, type dependant*/
string utility::toString ( int k, Ctype t )
{
  ostringstream s ;
  if ( t->is ( type::Int ) )
    s << k ;
  else if ( t->is ( type::UInt ) )
    s << k << "U" ;
  else if ( t->is ( type::Long ) )
    s << k << "L" ;
  else if ( t->is ( type::ULong ) )
    s << k << "UL" ;
  else if ( t->is ( type::LLong ) )
    s << k << "LL" ;
  else if ( t->is ( type::ULLong ) )
    s << k << "ULL" ;
  else if ( t->is ( type::Char ) )
    s << "(char)" << k  ;
  else if ( t->is ( type::UChar ) )
    s << "(uchar)" << k  ;
  else if ( t->is ( type::Float ) )
    s <<  reinterpretToFloat( k )  ;
  else
    s << "(" << t->prettyPrint ( "","" ) << ")0x" << hex << k  ;
  return s.str() ;
}
/** No descriptions */
const char* utility::setMessage ( const string& m )
{
  if ( staticbufsz <= m.size() )
  {
    delete staticbuf ;
    staticbuf = new char[staticbufsz = m.size() + 2 ] ;
  }
  strcpy ( staticbuf, m.c_str() ) ;

  return staticbuf ;
}
/** No descriptions */
utility::utility()
{
  created = true ;
}
/** No descriptions */
utility::~utility()
{
  created = false ;

  delete staticbuf ;
  staticbuf = 0 ;
  staticbufsz = 0 ;
}
/** No descriptions */
bool utility::isCfile ( const string &s )
{
  string e =  utility::fileExt ( s )   ;
  return e == "c" || e == "C" ;
}
/** No descriptions */
string  utility::fileExt ( const string& s )
{
  size_t p=s.rfind ( '.' ) ;
  if ( p == s.npos ) return "" ;
  return s.substr ( p+1 ) ;
}
/** No descriptions */
bool utility::isAbsFileName ( const string& f )
{
  return Portability::isAbsPath ( f ) ;
}

/** Try to locate a file 'name' using paths provides by 'paths'.

Return the correct path+filename if found, or
an empty string if not found.

 */
string utility::find ( const string &name, const stringList &paths )
{
  string p ;

  if ( utility::isAbsFileName ( name ) && utility::fileExists ( name ) ) return  name ;

  char ds = Portability::dirSeparator() ;

  for ( unsigned int i = 0 ; i < paths.size() ; ++i )
  {
    p = paths[i] ;
    if ( p[p.size()-1] != ds ) p += ds ;
    p += name ;
    if ( utility::fileExists ( p ) ) return p;
  }
  return "" ;
}


/** No descriptions */
bool utility::fileExists ( const string& f )
{
  ifstream x ( f.c_str() ) ;
  return x.is_open() ;
}
/** Try to decode s as an int value (decimal or hexadecimal)
hex number must be prefixed by 0x
Return true if success
 */
bool utility::intValue ( const string &s, int &n )
{
  return ( sscanf ( s.c_str(), "0x%x", ( unsigned int * ) &n ) == 1 ) || ( sscanf ( s.c_str(),"%d", &n ) == 1 ) ;
}


/*!
    \fn utility::stripOffset(const string& s)
 Suppress any offset appended to the symbol name
 ie:  xxx+3 -> xxx
  zzz-34 -> zzz
 */
string  utility::stripOffset ( const string& s )
{
  string::size_type p = s.find ( '+' ) ;
  if ( p != string::npos ) return string ( s,0,p ) ;

  p = s.find ( '-' ) ;
  if ( p != string::npos ) return string ( s,0,p ) ;

  return s ;
}

string utility::quote ( const string& s )
{
  string r = "\"" ;
  r += s ;
  r += "\"" ;
  return r ;
}


/*!
    \fn utility::stripC18Prefix(const string& s)
 */
string  utility::stripC18Prefix ( const string& s )
{

  if ( s.find ( "C18_" ) == 0 )
  {
    string r ( s, 4 ) ;
    return r ;
  }
  return s ;
}
/*!
 \fn stringList utility::explode(const string& cslist)

 Split a sep-separated list of strings to a stringList
 (defaul value for sep == ',')

 (No leading/ending/inner spaces stripping)

 Note: Empty strings are not stored in the resulting list
 ie: AA,,BB returns a stringList containing AA and BB only
*/
stringList utility::explode ( const string& cs, char sep )
{
  stringList r ;
  string s ;
  unsigned int imax =  cs.size() ;

  for ( unsigned int i = 0 ; i <  imax ; ++i )
  {
    if ( cs[i] == sep )
    {
      r.push_back ( s ) ;
      if ( s != "" ) s.clear() ;
    }
    else
    {
      s += cs[i] ;
    }
  }
  if ( s != "" ) r.push_back ( s ) ;

  return r ;
}

