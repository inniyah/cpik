/***************************************************************************
                          returninstr.h  -  description
                             -------------------
    begin                : jeu mar 24 2005
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

#ifndef RETURNINSTR_H
#define RETURNINSTR_H

class Cexpr ;
class CodeGen ;
class Symtab ;
class Compiler ;
class Centity ;
class FctCtx ;
#include "instruction.h"
#include "centity.h"

/**
  *@author Gibaud Alain
  */

class ReturnInstr : public Instruction
{
  Cexpr *expr ;
  FctCtx *fctctx ;
public: 
	ReturnInstr(Cexpr * e, FctCtx *f);
	virtual ~ReturnInstr();
  /** Does various processings for this instruction */
  virtual const char * process();
  /** Generates code for this instruction */
  virtual void flattenCode();
};

#endif
