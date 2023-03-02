/***************************************************************************
                          continueinstr.h  -  description
                             -------------------
    begin                : ven avr 8 2005
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

#ifndef CONTINUEINSTR_H
#define CONTINUEINSTR_H

#include "instruction.h"

/**Processing of "continue" instruction.
  *@author Gibaud Alain
  */

class ContinueInstr : public Instruction
{
  int continueable ;
public: 
	ContinueInstr(int);
	virtual ~ContinueInstr();
  /** Generates code for this instruction */
  virtual void flattenCode();
  /** Does various processings for this instruction */
  virtual const char * process();
};

#endif
