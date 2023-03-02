/***************************************************************************
                          stringlist.cpp  -  description
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

#include "stringlist.h"

#include <iostream>
#include <iterator>
using namespace std ;

stringList::stringList(){
}
stringList::~stringList(){
}
/** No descriptions */
int stringList::findIndex(const string& s)
{
	unsigned int i ;
	for(i = 0 ; i < size() ; ++i)
		if( s == (*this)[i] ) return static_cast<int>(i) ;
	return -1 ;
}
/** No descriptions */
void stringList::dump()
{
	cout << endl << "-----" << endl ;
	copy(begin(), end(), ostream_iterator<string>(cout, "|\n"));
	cout << "-----" << endl  ;
}
