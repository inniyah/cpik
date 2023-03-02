/***************************************************************************
                          forinstr.h  -  description
                             -------------------
    begin                : sam avr 23 2005
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

#ifndef FORINSTR_H
#define FORINSTR_H

#include "instruction.h"

#include <string>
using namespace std ;

class Cexpr ;
class Flatten ;

/**
  processing of "for" instruction
  *@author Gibaud Alain
*/

class ForInstr : public Instruction
{
  Cexpr *init, *cond ,*next;
  Flatten *block ;
  string loopLabel, exitLabel, continueLabel ;
public: 
	ForInstr(Cexpr *i, Cexpr *c, Cexpr *n, Flatten *b );
	virtual ~ForInstr();
  /** Generates code for this instruction */
  virtual void flattenCode();
  /** Does various processings for this instruction */
  virtual const char * process();
};

#endif
