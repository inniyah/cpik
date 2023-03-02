/***************************************************************************
                          ctype.cpp  -  description
                             -------------------
    begin                : mar jan 18 2005
    copyright            : (C) 2005 by Gibaud Alain
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

#include "xctype.h"
#include "xtype.h"
#include <assert.h>

/** No descriptions */
Ctype::Ctype ( const Ctype &ct )
{
  thetype = ct.thetype ;
  if ( thetype ) ++ ( thetype->_cnt ) ;
}
Ctype::~Ctype()
{
  if ( thetype &&  -- ( thetype->_cnt ) == 0 )
  {
    delete thetype ; thetype = 0 ;
  }
}
/** No descriptions */
type *Ctype::operator->()
{
  return thetype ;
}
/** No descriptions */
Ctype::Ctype ( int what, int size, int constness )
{
  thetype = type::newtype ( what,size,constness ) ;
  thetype->_cnt = 1 ;
}
/** No descriptions */
bool Ctype::operator== ( const Ctype& ct )
{
  if ( thetype == ct.thetype )
    return true ;
  else if ( thetype && ct.thetype )
    return thetype->equal ( ct ) ;
  return false ;
}
/** No descriptions */
bool Ctype::operator== ( int val )
{
  assert ( val == 0 ) ;
  return thetype == reinterpret_cast<type*> ( val ) ;
}
/** No descriptions */
bool Ctype::operator!= ( int val )
{
  return ! ( *this == val ) ;
}
/** copy with shareable types, and reference counting  */
Ctype& Ctype::operator= ( const Ctype& ct )
{
  int offset,size ;
  if ( this != &ct )
  {
    if ( thetype && ( -- ( thetype->_cnt ) ) == 0 )
      delete thetype ;

    if ( ct.thetype &&  ct.thetype->isBitField ( size,offset ) )
    {
      thetype = ct.thetype->clone() ; // never share a bit-field type
      ++ ( thetype->_cnt );
    }
    else
    {
      if ( ct.thetype )   ++ ( ct.thetype->_cnt ) ;
      thetype = ct.thetype ;
    }
  }
  return *this ;
}
/** No descriptions */
Ctype::operator bool()
{
  return thetype != 0 ;
}
/** No descriptions */
Ctype::Ctype ( type *t )
{
  thetype = t ;
  if ( t ) ++ ( t->_cnt ) ;
}
/** No descriptions */
bool Ctype::operator!= ( const Ctype &ct )
{
  if ( thetype && ct.thetype )
    return !thetype->equal ( ct ) ;
  return false ;
}

Ctype Ctype::clone()
{
	return Ctype( thetype->clone()) ;
}
