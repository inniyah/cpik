/***************************************************************************
                          instruction.h  -  description
                             -------------------
    begin                : dim mar 20 2005
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

#ifndef INSTRUCTION_H
#define INSTRUCTION_H

class Compiler ;

/**Abstract Base class for all instructions of the language
  *@author Gibaud Alain
  */

class Instruction
{
protected :
public: 
	Instruction();
	virtual ~Instruction() ;
  /** Does various processings for this instruction */
  virtual const char * process() = 0;
  /** Generates code for this instruction */
  virtual void flattenCode() = 0;
};

#endif
