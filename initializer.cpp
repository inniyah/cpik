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
#include "initializer.h"
#include "xctype.h"
#include "xtype.h"
#include <cstdio>
#include <algorithm>
#include "compiler.h"
#include "utility.h"

Initializer::Initializer()
{
  _tag = Initializer::None ;
}


Initializer::~Initializer()
{
  _tag = None ;
}

Initializer::Initializer ( int sz, int val )
{
  _size = sz ;
  _value.i = val ;
  _tag =  Integral ;
}

Initializer::Initializer ( float val )
{
  _size = 4 ;
  _value.f = val ;
  _tag = Float ;
}

Initializer::Initializer ( const string& sym , const vector<string>& extsymbols )
{
  _expression = sym ;
  _tag = Symbol ;
  _extsymbols = extsymbols ;
}


void Initializer::clear()
{
  if ( _tag != None )
  {
    if ( _tag != Compound )
    {
      _size = 0 ; _value.i = 0 ;
    }
    else
    {
      _components.clear() ;
    }
    _tag = None ;
    _extsymbols.clear() ;
  }
}


void Initializer::insureCompound()
{
  if ( _tag != Compound )
  {
    if ( _tag != None )
    {
      // make compound from stand alone constant
      Initializer tmp ( *this ) ;
      _size = 0 ;
      _value.i = 0 ;
      _tag = Compound ;
      add ( tmp ) ;
    }
    _tag = Compound ;
  }
}

Initializer& Initializer::add ( const Initializer& c )
{
  if ( &c != this )
  {
    if ( _tag == Compound )
    {
      // extend compound
      _components.push_back ( c ) ;
    }
    else if ( _tag != None )
    {
      // make compound from stand alone constant
      insureCompound() ;
      add ( c ) ;
    }
    else
    {
      // make stand alone constant
      *this = c ;
    }
  }
  return *this ;
}

void Initializer::toStrings ( vector<string>& r )
{

  if ( _tag == Integral  || _tag == Float )
  {
    int v , n ;
    for ( v = _value.i, n = _size   ; n  ; --n, v >>= 8 )
    {
      char buf[10] ;
      sprintf ( buf, "0x%02X" ,  v & 0xFF )  ;
      r .push_back ( string ( buf ) ) ;
    }
  }
  else if ( _tag == Symbol )
  {
    r.push_back ( "LOW("+_expression+")" ) ;
    if ( _size > 1 ) r.push_back ( "HIGH("+_expression+")" ) ;
    for ( int i = 2 ; i < _size ; ++i )
    {
      r.push_back ( "0" ) ;
      if ( i > 10 ) break ;
    }
  }
  else if ( _tag == Compound )
  {
    for ( unsigned int i = 0 ; i < _components.size() ; ++i )
    {
      vector<string> rr ;
      _components[i].toStrings ( rr );
      for ( unsigned int j = 0 ; j < rr.size() ; ++j )
      {
        r.push_back ( rr[j] ) ;
      }
    }
  }

}

void Initializer::dump ( ostream& o )
{
  if ( _tag == None )
    o << "<none>" ;
  else if ( _tag == Integral )
    o << _value.i ;
  else if ( _tag == Float )
    o << _value.f ;
  else if ( _tag == Symbol )
  {
    o << _expression ;
  }
  else // Compound
  {
    o << "{" <<endl ;
    for ( unsigned int i = 0 ; i < _components.size() ; ++i )
    {
      _components[i].dump ( o )  ;
    }
    o << "}"  ;
  }
  o << endl ;
}


void Initializer::makeCstFromLitteral ( const string& s )
{
  clear() ;
  for ( unsigned int i = 0 ; i < s.size() ; ++i )
  {
    add ( Initializer ( 1, s[i] ) ) ;
  }
  add ( Initializer ( 1, 0 ) ) ;
  // set the type "array of chars"
  _type = Ctype ( type::newtype ( type::Array, s.size() +1 ) ) ;
  _type->subtype() = Ctype ( type::newtype ( type::Char ) ) ;
}

void Initializer::makeLitteralFromCst ( string &v )
{
  char c ;
  if ( _tag == Compound )
  {
    for ( int i = 0 ; i < ( int ) _components.size() ; ++i )
      _components[i].makeLitteralFromCst ( v ) ;
  }
  else if ( _tag == Integral )
  {
    c = static_cast<char> ( _value.i ) ;
    if ( c ) v += c ; // skip final nul char
  }
}

Initializer  Initializer::makeSubInitializer ( Ctype typ )
{
  Ctype subt = typ->subtype() ;
  Initializer ini  ;

  if ( subt->code() == type::Array )
  {
    int sz = subt->arraySize() ;
    for ( int i = 0 ; i < sz ; ++i )
      ini.add ( makeSubInitializer ( subt ) ) ;
  }

  return ini ;
}

Initializer& Initializer::Initializer::getSub ( int i )
{
  static Initializer null_ini ;
  return ( isCompound()  && i < ( int ) compoundSize() && i >= 0 ) ?
         _components[i] : null_ini  ;
}
/**
 Verify whether this initializer is compatible with type "t"
 if this is the case - each value size is set according to "t"
 Return 0 if OK, else an error message
*/
const char * Initializer::fixType ( Ctype t )
{
  /*
    cout << "type to match : " <<  t->prettyPrint ( "","" ) << endl ;
    if ( _type != 0 )
      cout << "initializer type  = " << _type->prettyPrint ( "","" ) << " _tag = " << _tag << endl ;
    else
      cout << "initializer is not typed yet" << endl ;
  */
  if ( t->isIntegral() )
  {
    if ( _tag == Integral )
    {
      // OK
      _size = t->sizeOf() ;
      _type = t ;
      return 0 ;
    }
    else if ( _tag == Symbol && _type->isIntegral() )
    {

      // TODO manage  types of symbolic constants
      _size = t->sizeOf() ;
      _type = t ;
      return 0 ;
    }
    else
    {
      clear() ; // clear initializer
      return "Initialization makes integer from non-integral without a cast" ;
    }
  }
  else if ( t->isPointer() )
  {
    if ( _tag == Integral )
    {
      if ( _value.i == 0 )
      {
        _size = 2 ;
        _type = t ;
        return 0 ;
      }
      else if ( _type->equal ( t ) ) // integral can be casted to pointer
      {
        _size = 2 ;
        return 0 ;
      }
      else
      {
        clear() ; // clear initializer
        return "Initialization makes pointer from integer without a proper cast." ;
      }
    }
    else if ( _tag == Symbol )
    {
      if ( _type-> isPointer() ||  _type-> isArray() )
      {
        if ( t->subtype()->equal ( _type->subtype() ) )
        {
          _size = 2 ;
          _type = t ;
        }
        else
        {
          clear() ;
          return "Initialization from incompatible pointer type." ;
        }
      }
      else if ( _type->isFct() )
      {
        if ( t->subtype()->equal ( _type ) )
        {
          _size = 2 ;
          _type = t ;
        }
        else
        {
          clear() ;
          return "Initialization from incompatible function type." ;
        }

      }

    }
  }
  else if ( t->isArray() )
  {
    // arrays can be initialized from compound or literal
    if ( _tag == Symbol )
    {
      /* symbolic expression must be a simple literal */
      if ( _extsymbols.size() != 1 || ( _extsymbols[0] != _expression ) )
        return "Invalid initializer" ;

      // fetch symbol and verify wether it is a literal
      string s = utility::stripC18Prefix ( _expression ) ;
      Centity e = c18.symtab()->findGlobal ( s ) ;

      if ( ! e->isLitteral() )
        return "Non-compound array initializer must be a literal" ;

      /* set array size if needed  */
      int size = e->thetype()->arraySize() ;
      if ( t->arraySize() == 0 )
        t->arraySize() = size   ;

      /* if not set by initializer, verify wether the initializer size is correct */
      if ( size > t->arraySize() )
        return "Excess elements in array initializer" ;

      /* transform symbolic initializer in numeric one */
      clear() ;
      insureCompound() ;

      /* get entity initializer */
      Initializer& source = e->getInitializer() ;

      for ( int i = 0 ; i < source.compoundSize() ; ++i )
      {
        Initializer& ini = source._components[i] ;
        add ( Initializer ( 1,  ini._value.i ) ) ;
      }

      // add null initializers for each uninitialized array element
      for ( int i = source.compoundSize() ; i < compoundSize() ;  ++i )
      {
        add ( Initializer ( 1,0 ) ) ;
      }

      _type = t ;
    }

    else if ( _tag != Compound )
      return "invalid initializer" ;

    if ( t->arraySize() == 0 )
      t->arraySize() = compoundSize() ; // array dimension given by initializer

    if ( compoundSize() > t->arraySize() )
      return "Excess elements in array initializer" ;

    for ( int i = 0 ; i < compoundSize() ; ++i )
    {
      Initializer& ini = _components[i] ;
      const char *msg =  ini.fixType ( t->subtype() ) ;
      if ( msg != 0 ) return msg ;
    }
    // add null initializers for each uninitialized array element
    for ( unsigned int i = _components.size() ; i < ( unsigned int ) t->arraySize() ;  ++i )
    {
      Initializer ini = makeNullInitializer ( t->subtype() )  ;
      add ( ini ) ;
    }
    _type = t ;
  }
  else if ( t->isStruct() )
  {
    if ( _tag != Compound )
      return "invalid initializer." ;

    if ( compoundSize() > ( int ) t->members().size() )
      return "Excess elements in struct initializer" ;


    list<StructMember>::iterator ism = t->members().begin() ;

    for ( int i = 0 ; i < compoundSize()  ; ++i , ++ism )
    {
      const char *msg = _components[i].fixType ( ( *ism ).mtype() ) ;
      if ( msg != 0 ) return msg ;
    }

    for ( unsigned int i =  compoundSize()  ; i < t->members().size() ;  ++i, ++ism )
    {
      Ctype t = ( *ism ).mtype() ;
      Initializer ini = makeNullInitializer ( t )  ;
      add ( ini ) ;
    }
    _type = t ;
  }
  else if ( t->isUnion() )
  {
    if ( _tag != Compound )
      return "invalid initializer." ;

    if ( compoundSize() > 1 )
      return "Excess elements in union initializer" ;


    list<StructMember>::iterator ism = t->members().begin() ;

    const char *msg = _components[0].fixType ( ( *ism ).mtype() ) ;
    if ( msg != 0 ) return msg ;

    // if first member is shorter than union size, pad with zeros
    int firstsize = ( *ism ).mtype()->sizeOf() ;
    int unionsize = t->sizeOf() ;

    for ( ; firstsize < unionsize ; ++firstsize )
    {
      Initializer ini = Initializer ( 1,0 ) ;
      add ( ini ) ;
    }
    _type = t ;
  }
  return 0 ;
}

Initializer Initializer::makeNullInitializer ( Ctype& t )
{
  if ( t->isIntegral() )
  {
    Initializer r ( t->sizeOf(), 0 ) ;
    r.setType ( t ) ;
    return r ;
  }
  else if ( t->isPointer() )
  {
    Initializer r ( 2, 0 ) ;
    r.setType ( t ) ;
    return r ;
  }
  else if ( t->isArray() )
  {
    Initializer r ;
    r.insureCompound() ;
    for ( int i = 0 ; i < t->arraySize() ; ++i )
    {
      r.add ( makeNullInitializer ( t->subtype() ) ) ;
    }
    return r ;
  }
  return Initializer ( 1,0 ) ;
}

vector<string>&  Initializer::extReferences()
{
  if ( isCompound() )
  {
    // collect symbols from components
    _extsymbols.clear() ;
    for ( unsigned int i = 0 ; i < _components.size() ; ++i )
    {
      vector<string>& c = _components[i].extReferences() ;
      _extsymbols.insert ( _extsymbols.end(), c.begin(), c.end() ) ;
    }
  }
  return _extsymbols ;
}
