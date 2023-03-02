
/***************************************************************************
                          whileinstr.h  -  description
                             -------------------
    begin                : mar avr 5 2005
    copyright            : (C) 2005 by Gibaud Alain, Josef Pavlik
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

#ifndef SWITCHINSTR_H
#define SWITCHINSTR_H

#include "instruction.h"
#include <string>
using namespace std ;

class Cexpr ;
class Flatten ;

/**Class for the "switch" instruction
  *@author Josef Pavlik
  */

class SwitchInstr : public Instruction
{
  Cexpr *sw ;
  Flatten *block ;
  string caseLabel, exitLabel ;
public: 
	SwitchInstr(Cexpr *sw, Flatten *f);
	virtual ~SwitchInstr();
  /** Generates code for this instruction */
  virtual void flattenCode();
  /** Does various processings for this instruction */
  virtual const char * process();
};

class CaseInstr : public Instruction
{
  int caseable ;
  int cst ;
public: 
  enum { Default=1000000000}; // must be greater than the target's maxuint
	CaseInstr(int able, int cst);
	CaseInstr(int able);
	virtual ~CaseInstr();
  /** Generates code for this instruction */
  virtual void flattenCode();
  /** Does various processings for this instruction */
  virtual const char * process();
};

#endif
