
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef RESULTLOCATION_H
#define RESULTLOCATION_H

#include "centity.h"

/**
  *@author Gibaud Alain
  */

class ResultLocation
{
public:
  enum location { None, Stack, DataReg, AddrReg1 , Indirect1,  Variable , Constant , ZBit} ; 
private:
//  Centity _entity ;
  location _loc ; 
public:
//  Centity theEntity() { return _entity ; }
  ResultLocation::location loc() { return _loc ; }
  ResultLocation(location loc=Stack ) { _loc = loc ; }
//	ResultLocation(Centity e) { _entity = e ; _loc = e->is(entity::Constant) ? Constant : Variable ; }
  bool isStack() { return _loc == Stack ; }
  bool isReg() { return _loc == DataReg ; }
  bool isPtr() { return _loc == AddrReg1 ; }
  bool isIndirect() { return _loc == Indirect1 ; }
  bool isVariable() { return _loc == Variable ; }
//  bool isGlobalVariable() { return _loc == Variable && _entity->storage() == entity::Global ;}
//  bool isLocalVariable() { return _loc == Variable && _entity->storage() == entity::Auto ;}
  bool isConstant() { return _loc == Constant ;}
  bool isVoid() { return _loc == None ;}
  bool isBool() { return _loc == ZBit ;}
};

#endif
