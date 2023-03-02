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
#include "structmember.h"
#include "xtype.h"

StructMember::StructMember ( const string& n, Ctype& t, int o ) :
    _moffset ( o ), _mtype ( t ), _mname ( n )
{
}


StructMember::~StructMember()
{
}


int& StructMember::moffset() { return _moffset ; }
Ctype StructMember::mtype() { return _mtype ; }
const string& StructMember::mname() { return _mname ; }


/*!
    \fn StructMember::dump(ostream& os)
 */
void StructMember::dump ( ostream& os )
{
  os << "member " << mname() << " : " ;
  mtype()->dump ( os ) ;
  os << " [offset = " << moffset() ;
  // bit field ?
  if ( mtype()->bsize() != 0 )
  {
    os << " boffset = " << mtype()->boffset() << " bsize = " << mtype()->bsize() ;
  }
  os << "]";
}
