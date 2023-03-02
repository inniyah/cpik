/***************************************************************************
                          file.cpp  -  description
                             -------------------
    begin                : mar jan 27 2004
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

#include "file.h"
#include <cstring>
#include <sstream>
#include "compiler.h"
#include "flatten.h"

File::File() : inputstream ( 0 ), current_line ( 0 ) , kbuffer ( 0 )
{
}
File::~File()
{
}

bool File::isConnected()
{
	return inputstream != 0 ;
}

int File::ch()
{
	if ( kbuffer >= ( int ) buffer.size() )
	{
		if ( !getLine() ) return EOF ;
	}
	return buffer[kbuffer] ;
}
int File::gch()
{
	int c = ch() ;
	if ( c != EOF ) ++kbuffer ;
	return c ;
}
int File::nch ( int offset )
{
	int k =   kbuffer+offset ;
	return ( k >= ( int ) buffer.size() || k < 0 ) ?  0 : buffer[k];
}
bool File::getLine()
{
	char key[512], value[512] ;
	buffer.clear() ;
	if ( ! getline ( *inputstream, buffer ) ) return false  ;
	buffer += "\n" ;
	// TODO : autoriser les blancs de tete
	if ( buffer[0] == '#' )
	{
		// location record :
		char fn[512] ;
		if ( sscanf ( buffer.c_str() ,"# %d \"%[^\n\"]", &current_line, fn ) == 2 )
		{
			--current_line ;
			current_file_name = fn ;
		}
		else if ( sscanf ( buffer.c_str() ,"#pragma %s %[^\n]", key,value ) == 2 )
		{
			c18.pragmas() [key] = value ; 	++current_line ;
		}
		return getLine() ;
	}
	kbuffer = 0 ;
	++current_line ;
	if ( 1 )
	{
		// remove trailing newline, if it exists
		string line ( buffer ) ;
		int last = line.size() -1 ;
		if ( last >= 0 && line[last] == '\n' ) line.erase ( last ) ;
		c18.flattener()->putComment ( line ) ;
	}
	return true ;
}

int File::mark ( int k )
{
	int old = kbuffer ;
	if ( k != -1 ) kbuffer = k ;
	return old ;
}
/** No descriptions */
void File::getLocation ( string& file, int& line )
{
	file = current_file_name  ;
	line = current_line ;
}
/**  */
void File::pushBack ( const char *s )
{
	if ( !*s ) return ;
	buffer.insert ( kbuffer, s ) ;
	kbuffer -= ( strlen ( s )-1 ) ;
}
/** Could be called from constructor, if streams are created
    before file object
*/
void File::connect()
{
	inputstream = &c18.in() ;
}
