/***************************************************************************
                          allocator.cpp  -  description
                             -------------------
    begin                : dim nov 21 2004
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

#include "locator.h"
#include "xtype.h"

int locator::currentGlobalAddr=0x10 ;
int locator::currentLocalAddr ;

/** No descriptions */
int locator::globalAddr(type *t)
{
  int s = t->nBits() ;
  if( s == 0 ) return -1 ;
  int g =  currentGlobalAddr ;
  currentGlobalAddr += s/8 ;
  return g ;
}
/** No descriptions */
int locator::localAddr(type *t)
{
  int s = t->nBits() ;
  if( s == 0 ) return -1 ;
  int g =  currentLocalAddr ;
  currentLocalAddr += s/8 ;
  return g ;
}
/** No descriptions */
void locator::resetLocalContext()
{
  currentLocalAddr = 0 ;
}
/** No descriptions */
int locator::localOffset(int a)
{
  return a -currentLocalAddr ;
}
