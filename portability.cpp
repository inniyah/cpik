/***************************************************************************
 *   Copyright (C) 2008-2009 by Alain Gibaud                               *
 *   alain.gibaud@free.fr                                                  *
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
#include "portability.h"

/*
	Return the directory where cpik is installed 
	(no trailing separator)
*/
string Portability::cpikDir()
{
  // cpik installation directory under windows
  // is inferred from location of executable .
#ifdef _WIN32
  char buffer[MAX_PATH];
  *buffer = 0 ;
  int size = GetModuleFileNameA ( NULL, buffer, MAX_PATH );

  if ( size != 0 ) // security against GetModuleFileNameA() failure
  {
    char* c = buffer + size ;
	// eliminer \nom_programme
    while ( ( *c != '\\' ) && ( *c != ':' ) && (c > buffer) ) --c; 
    *c = 0; //Marquer la fin de la chaine pointee par buffer
    //enlever \bin (repertoire parent)
    while ( ( *c != '\\' ) && ( *c != ':' ) && (c > buffer)) --c ; 
    *c = 0; //Marquer la fin de la chaine pointee par buffer
  }
  return buffer;
#else
#if defined PREFIX
#define QUOTE_(x) #x
#define QUOTE(x) QUOTE_(x)
	return QUOTE(PREFIX) ;
#undef QUOTE
#undef QUOTE_
#else
  return "/usr/share/cpik/" + c18.version();
#endif
#endif

}

char Portability::dirSeparator()
{
#ifdef _WIN32
  return '\\' ;
#else
  return '/' ;
#endif
}

/*
	Return the directory where cpik's libraries are installed
*/

string Portability::cpikLibDir()
{
	return Portability::cpikDir()+Portability::dirSeparator()+"lib" ;
}

/*
	Return the directory where cpik's headers are installed
*/
string Portability::cpikIncludeDir()
{
	return Portability::cpikDir()+Portability::dirSeparator()+"include" ;
}
/*
	Return the directory where devices' linker files (.lnk)  are installed
*/
string Portability::cpikLkrDir()
{
	return Portability::cpikDir()+Portability::dirSeparator()+"lkr" ;
}
/*
	Abolute paths depend on target OS
*/
bool Portability::isAbsPath(const string& f) 
{
#ifdef _WIN32
  // the drive name is not tested for simplicity (must be A-Z|a-z)
  return f.size() >= 2 && f[1] == ':'  ;
#else
  return f != "" && f[0] == '/' ; 
#endif
}
