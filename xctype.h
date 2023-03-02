/***************************************************************************
                          xctype.h  -  description
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


#ifndef CTYPE_H
#define CTYPE_H

/**
Encapsulates "type" objects and provides reference counting.
This class avoid type duplication
(useful for Cexpr objects which make an important usage of type information).

*@author Gibaud Alain
*/
class type ; // forward

class Ctype
{
		type *thetype ;
	public:
		explicit Ctype ( type *t=0 );
		Ctype ( const Ctype & );
		virtual ~Ctype();
		/** No descriptions */
		Ctype ( int what, int size=0, int constness=0 ) ;
		/** Delegation operator */
		type * operator->();
		/** True if referenced type are the same or identical */
		bool operator== ( const Ctype& ct );
		/** used to simulate a comparison to NULL pointer
		result is undefined with a parameter different than 0
		*/
		bool operator== ( int val );
		bool operator!= ( int val );
		/** Affectation between types with reference counting  */
		Ctype& operator= ( const Ctype& );
		/** Creates a   clone with detached type */
		Ctype clone() ;
		/** No descriptions */
		operator bool();
		/** No descriptions */
		bool operator!= ( const Ctype & );
		/** No descriptions */
		type *theType() { return thetype ; }
};

#endif
