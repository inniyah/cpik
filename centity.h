/***************************************************************************
                          centity.h  -  description
                             -------------------
    begin                : mar mar 29 2005
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

#ifndef CENTITY_H
#define CENTITY_H


/**
  Encapsulates entity * pointers, and provides auto deletetion and reference counting.

  *@author Gibaud Alain
  */
#include "entity.h"

#include <string>
using namespace std ;

class Centity
{
    entity *eptr  ;
  public:
    explicit Centity ( entity *e );
    Centity ( int k =0 );
    Centity ( const Centity & );
    virtual ~Centity();
    /** No descriptions */
    Centity ( const string& name, int sto, int addr = -1 ) ;
    /** Delegation operator */
    entity * operator->();
    /** True if referenced type are the same or identical */
    bool operator== ( const Centity& ct );
    /** used to simulate a comparison to NULL pointer
    result is undefined with a parameter different than 0
    */
    bool operator== ( int val );
    bool operator!= ( int val );
    /** Affectation between types with reference counting  */
    Centity& operator= ( const Centity& );
    /** same as operator!=(0) */
    operator bool();
    /** No descriptions */
    bool operator!= ( const Centity & );
    /** detach the pointed entity
    ie: decrement ref count, and deallocate if not referenced */
    void detach();
    /** clone an entity
        all sharable data is duplicated, so the result is fully independant
        Note: the name is not changed
    */
    Centity clone() ;
};

#endif
