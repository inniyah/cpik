/***************************************************************************
                          whileinstr.h  -  description
                             -------------------
    begin                : mar avr 5 2005
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

#ifndef DOWHILEINSTR_H
#define DOWHILEINSTR_H

#include "instruction.h"
#include <string>
using namespace std ;

class Cexpr ;
class Flatten ;

/**Class for the "while" instruction
  *@author Gibaud Alain
  */

class DoWhileInstr : public Instruction
{
  Cexpr *cond ;
  Flatten *block ;
  string loopLabel, breakLabel , continueLabel ;
public: 
	DoWhileInstr(Cexpr *e, Flatten *f);
	virtual ~DoWhileInstr();
  /** Generates code for this instruction */
  virtual void flattenCode();
  /** Does various processings for this instruction */
  virtual const char * process();
};

#endif
