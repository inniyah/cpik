/***************************************************************************
 *   Copyright (C) 2008-2009 by Alain Gibaud                               *
 *   alain.gibaud@free.fr                                                  *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef INITIALIZER_H
#define  INITIALIZER_H

#include <vector>
#include <string>
#include <iostream>
using namespace std ;
#include "xctype.h"
/**
 Store int8, int16, int32, float32 or symbolic constant
 or agregate of such constant

 NOTE: The design of this class do not try to be space efficient .. and is not.
 @author Alain Gibaud <alain.gibaud@free.fr>
*/
class Initializer
{
    enum InitializerTag { None=0, Integral, Float, Symbol, Compound  } ;
    int _size ;    // size in bytes for numeric   constant
    union
    {
      int i ; // integral value (1 to 4 bytes)
      float f ; // floating point value (4 bytes)
    } _value ;

    string 		_expression  ; // symbolic expression
    vector<string> 	_extsymbols ; // external symbols
    vector<Initializer> _components ;
    Ctype 		_type ; // type of the constant
    InitializerTag 	_tag ;
  public:


    // NOTE: Coumpound are cloneable and affectable
    Initializer ( int sz, int val );
    Initializer ( float val );
    Initializer ( const string& sym, const vector<string>& extsymbols ) ;
    Initializer ( ) ;
    Initializer& add ( const Initializer& c ) ;
    static Initializer makeNullInitializer ( Ctype& t ) ;

    void  toStrings ( vector<string>& ) ;
    ~Initializer();

    void clear() ;
    // make a compound from stand alone
    void insureCompound() ;
    void dump ( ostream& ) ;
    void makeCstFromLitteral ( const string& s )  ;
    void makeLitteralFromCst ( string &v ) ;

    int compoundSize() { return _components.size() ; }
    void setType ( Ctype t ) { _type = t ; }
    const char * fixType ( Ctype t ) ;

    static Initializer  makeSubInitializer ( Ctype typ ) ;
    Initializer& getSub ( int i ) ;
    int tag() { return _tag ; } ;
    int valueI() { return _value.i; }
    float valueF() { return _value.f; }
    vector<string>& extReferences() ;
    int& size() { return _size ; }

    bool isIntegral() { return _tag == Integral ; }
    bool isFloat() { return _tag == Float ; }
    bool isCompound() { return _tag == Compound ; }
    bool isEmpty() { return _tag == None ; }
    operator bool() { return _tag != None ; }
};

#endif
