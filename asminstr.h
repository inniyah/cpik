/***************************************************************************
                          asminstr.h  -  description
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

#ifndef ASMINSTR_H
#define ASMINSTR_H

#include "instruction.h"

#include <string>
using namespace std ;

/**Processing of "__asm__"
instruction

  *@author Gibaud Alain
  */

class AsmInstr : public Instruction
{
  string asmcode ;
  int offset ;
public: 
    AsmInstr(const string& ac, int stackoffset=0);
	virtual ~AsmInstr();
  /** Does various processings for this instruction */
  virtual const char * process();
  /** Generates code for this instruction */
  virtual void flattenCode();
};

#endif
