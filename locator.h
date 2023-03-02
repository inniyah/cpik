/***************************************************************************
                          allocator.h  -  description
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

#ifndef LOCATOR_H
#define LOCATOR_H


/**Simple adresses allocator for global and local object.

  *@author Gibaud Alain
  */
  
class type ;
  
class locator
{
public: 
  /** No descriptions */
  static int localAddr(type *t);
  /** No descriptions */
  static int  globalAddr(type *t);
  /** No descriptions */
  static int localOffset(int a);
  /** No descriptions */
  static void resetLocalContext();
private: // Private attributes
  /**  */
  static int currentGlobalAddr;
  /**  */
  static int currentLocalAddr;
};

#endif
