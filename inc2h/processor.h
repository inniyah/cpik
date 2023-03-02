#ifndef PROCESSOR_H
#define PROCESSOR_H
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
#include <cstring>
using namespace std ;

#include "bf.h"
//
// ALL the registers of a processor
//
class processor
{
public:
    vector<reg> regs ; 	// the registers
    string name ;		// name of processor
    int firstsfr  ;		// first SFR address
    int accfirstsfr ; 	// first SFR that is located in access bank (from .lkr file)
    mutable int printmode ;         // 1 = std microchip-like, 2=implicit bit field syntax 3=both

    bool empty(const string& line) ;

    processor(const string& n, int accsfr ) :
		  name(n), accfirstsfr(accsfr) ,  printmode(1) {}
    // buid header file
    void make_H(ostream& output) ;
	// extract registers name and addresses from ".inc" file
    bool extract_registers( ifstream& in ) ;
	// extract bit definitions and attach them to registers
    bool extract_bits( ifstream& in) ;
	// extract processor name from ".inc" file
    bool extract_processor( ifstream& in ) ;

    // return index of register N (-1 when not found)
    int index(const string& N) ;
	// process aliases (ie: make a bit field from numbered bits sharing the same prefix)
    void make_aliases( ) ;
	// allows to set the printing mode (see the printmode member)
    const  processor& setmode(int m) const  { printmode = m ; return *this ; } 
} ;

#endif
