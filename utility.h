/***************************************************************************
                          utility.h  -  description
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

#ifndef UTILITY_H
#define UTILITY_H

#include <stdint.h>
#include <string>
#include <sstream>
#include "xtype.h"
#include "xctype.h"
#include "stringlist.h"
using namespace std ;
/**
  *@author Gibaud Alain
  */


class utility
{

  public: // Public methods
    static string quote ( const string& s ) ;

    /** No descriptions */
    //static string toString ( int k );
    static string toString ( int k, Ctype t );
    static string toHexString ( int k );
    /** No descriptions */
    static const char* setMessage ( const string& m );
    /** No descriptions */
    ~utility();
    /** No descriptions */
    utility();
    /** No descriptions */
    static string fileExt ( const string& s );
    /** No descriptions */
    static bool isCfile ( const string & );
    /** No descriptions */
    static bool isAbsFileName ( const string & );
    /** Try to locate a file 'name' using paths provides by 'paths'.

    Return the correct path+filename if found, or
    an empty string if not found.

    */
    static string find ( const string &name, const stringList &paths );
    /** No descriptions */
    static bool fileExists ( const string& f );
    /** No descriptions */
    static bool intValue ( const string &s, int& n );
    static string  stripOffset ( const string& s );
    static string  stripC18Prefix ( const string& s );
    /** Split a sep-separated list of strings to a stringList */
    static stringList explode ( const string& cs, char sep = ',' ) ;
    /** Allows to make a static string from a dynamic one */
    static char *staticbuf ;
    static unsigned int staticbufsz ;
    /** generic conversion from string to T */
    template<typename T>
    static bool stringTo ( const string& s, T& result )
    {
      istringstream is ( s ) ;
      return is >> result ;
    }

    /** generic conversion from T to string  */
    template<typename T>
    static string toString ( const T& from )
    {
      ostringstream to ;
      to << from ;
      return to.str() ;
    }

    /* dummy conversion to/from float/uint32
       These fct do no really convert anything but type
       They have to be changed if this code is compiled for a target that
       do not use IEEE 754 conformant floating point.
       ++gib: 2011/10/9
    */
    static int32_t reinterpretToI32 ( float f )
    {
      union { float f ; int32_t i ; } x ;
      x.f = f ;
      return  x.i ;
    }

    static float reinterpretToFloat ( int32_t  i )
    {
      union { float f ; int32_t i ; } x ;
      x.i = i  ;
      return  x.f ;
    }

  private: // Private attributes
    /**  */
    static bool created;
};

#endif
