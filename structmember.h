/***************************************************************************
 *   Copyright (C) 2008 by Alain Gibaud   *
 *   alain.gibaud@free.fr   *
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
#ifndef STRUCTMEMBER_H
#define STRUCTMEMBER_H
#include "xctype.h"
#include <string>
#include <iostream>
using namespace std ;

/**
 Represents a stucture member (name-type-offset-etc..)

 @author Alain Gibaud <alain.gibaud@free.fr>
*/
class StructMember
{
  public:
    StructMember(const string& n, Ctype& t, int o);
    ~StructMember();

    int& moffset() ;
    Ctype mtype() ;
    const string& mname() ;
    void dump(ostream& os);

  protected:
    int  _moffset ;
    Ctype  _mtype;
    string  _mname;
};

#endif
