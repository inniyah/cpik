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

#ifndef WHILEINSTR_H
#define WHILEINSTR_H

#include "instruction.h"
#include <string>
using namespace std ;

class Cexpr ;
class Flatten ;

/**Class for the "while" instruction
  *@author Gibaud Alain
  */

class WhileInstr : public Instruction
{
  Cexpr *cond ;
  Flatten *block ;
  string loopLabel, exitLabel ;
public: 
	WhileInstr(Cexpr *e, Flatten *f);
	virtual ~WhileInstr();
  /** Generates code for this instruction */
  virtual void flattenCode();
  /** Does various processings for this instruction */
  virtual const char * process();
};

#endif
