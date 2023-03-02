/***************************************************************************
                          ifinstr.h  -  description
                             -------------------
    begin                : ven avr 22 2005
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

#ifndef IFINSTR_H
#define IFINSTR_H

#include "instruction.h"
class Cexpr ;
class Flatten ;

#include <string>
using namespace std ;

/**if .. else instruction processing
  *@author Gibaud Alain
  */

class IfInstr : public Instruction  {
  Cexpr *cond ;
  Flatten *block1, *block2 ;
  string falseLabel, exitLabel ;
public: 
	IfInstr(Cexpr *c, Flatten *b1, Flatten *b2);
	virtual ~IfInstr();
  /** Generates code for this instruction */
  virtual void flattenCode();
  /** Does various processings for this instruction */
  virtual const char * process();
};

#endif
