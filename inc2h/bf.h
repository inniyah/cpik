#ifndef BF_H
#define BF_H

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/*
	Author: Alain Gibaud 2012
	alain.gibaud@free.fr
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdio>
#include <time.h>
#include <ctype.h>
#include <cstdio>
#include <cstdlib>
using namespace std ;

//
// One bit field
//
class bf
{
public:
    string name ;
    int offset, size ;
    mutable int printmode ;
    bf() : name(), offset(0), size(0), printmode(1) {}
    bf(const string& n, int off, int sz=1) : name(n), offset(off), size(sz),printmode(1)  {}
} ;

//
// A set of bit fields (typically, a structure)
//
class bfblock : public vector<bf>
{
public:
    mutable int printmode ;

    bfblock() : printmode(1) {}

    bool make_alias(bfblock& alias) ;
    friend ostream& operator<<(ostream&, const bfblock& block) ;
    const  bfblock& setmode(int m) const 
    {
        printmode = m ;
        return *this  ;
    }
    bfblock&  sort_by_offset() ;
    string checkSanity() ;
    bool make_unique(bfblock & b1) ;
    static string upper(const string& s) ;
    static string lower(const string& s) ;
} ;

//
// A processor register    (typically, a union of structures)
//
class reg : public vector<bfblock>
{
public :
    string name ;
    vector<bfblock> aliases ;
    int value ;
    mutable int printmode ;


    reg(const string& n, int v) : name(n), value(v) , printmode(1) {}
    bool make_aliases() ;
    friend ostream& operator<<(ostream& , const reg &r) ;
    const reg& setmode(int m) const  
    {
        printmode = m ;
        return *this ;
    }

} ;
#endif
