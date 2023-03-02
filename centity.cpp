/***************************************************************************
                          centity.cpp  -  description
                             -------------------
    begin                : mar mar 29 2005
    copyright            : (C) 2005 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/

#include "centity.h"
#include <assert.h>

/** No descriptions */
Centity::Centity ( const Centity &ct )
{
  eptr = ct.eptr ;
  if ( eptr ) ++ ( eptr->_cnt ) ;
}
Centity::Centity ( int k )
{
  // if( k != 0) {  *((char *)0) = 0 ; }
  assert ( k==0 ) ;
  eptr = 0 ;
}
Centity::~Centity()
{
  if ( eptr &&  -- ( eptr->_cnt ) == 0 )
  {
    delete eptr ;
    eptr = 0 ;
  }
}
/** No descriptions */
entity *Centity::operator->()
{
  return eptr ;
}
/** No descriptions */
Centity::Centity ( const string& name, int sto, int addr )
{
  eptr =  new entity ( name, sto, addr ) ;
  eptr->_cnt = 1 ;
}
/** No descriptions */
bool Centity::operator== ( int val )
{
  assert ( val == 0 ) ;
  return eptr == reinterpret_cast<entity*> ( val ) ;
}
bool Centity::operator!= ( int val )
{
  assert ( val == 0 ) ;
  return eptr != reinterpret_cast<entity*> ( val ) ;
}
/** No descriptions */
Centity& Centity::operator= ( const Centity& ct )
{
  if ( this != &ct )
  {
    if ( eptr && -- ( eptr->_cnt ) == 0 )   delete eptr ;

    if ( ct.eptr )   ++ ( ct.eptr->_cnt ) ;

    eptr = ct.eptr ;
  }
  return *this ;
}
/** No descriptions */
Centity::operator bool()
{
  return eptr != 0 ;
}
/** No descriptions */
Centity::Centity ( entity *t )
{
  eptr = t ;
  if ( t ) ++ ( t->_cnt ) ;
}
/** No descriptions */
bool Centity::operator!= ( const Centity &ct )
{
  return  eptr != ct.eptr ;
}
/** No descriptions */
bool Centity::operator== ( const Centity& ct )
{
  return  eptr == ct.eptr ;
}

/** No descriptions */
void Centity::detach()
{
  if ( eptr && -- ( eptr->_cnt ) == 0 )   delete eptr ;
  eptr = 0 ;
}

/** No descriptions */
Centity Centity::clone()
{
	return Centity(eptr->clone()) ;	
}
