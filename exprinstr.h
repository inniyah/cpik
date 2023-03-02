/***************************************************************************
                          exprinstr.h  -  description
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

#ifndef EXPRINSTR_H
#define EXPRINSTR_H

#include "instruction.h"
class Cexpr ;
class CodeGen ;
class Symtab ;
class Compiler ;


/**
  *@author Gibaud Alain
  */

class ExprInstr : public Instruction
{
  Cexpr *expr ;
public: 
	ExprInstr(Cexpr * e);
  /** Generates code for this instruction */
  virtual void flattenCode();
  /** Does various processings for this instruction */
  virtual const char * process();
	virtual ~ExprInstr();
};

#endif
