/***************************************************************************
                          stringlist.h  -  description
                             -------------------
    begin                : lun fév 16 2004
    copyright            : (C) 2004 by Alain Gibaud
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

#ifndef STRINGLIST_H
#define STRINGLIST_H

#include <vector>
#include <string>
using namespace std ;

/**
  *@author Alain Gibaud
  * vector<string> + search method
  */

class stringList : public vector<string>
{
public: 
	stringList();
	~stringList();
  /** No descriptions */
  int findIndex(const string&);
  /** No descriptions */
  void dump();
};

#endif
