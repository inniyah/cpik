/***************************************************************************
                          breakinstr.cpp  -  description
                             -------------------
    begin                : jeu avr 7 2005
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

#include "breakinstr.h"
#include "compiler.h"
#include "operation.h"
#include "flatten.h"
#include <string>
using namespace std ;


BreakInstr::BreakInstr(int cpt)  : breakable(cpt)
{
}
BreakInstr::~BreakInstr(){
}
/** Generates code for this instruction */
void BreakInstr::flattenCode()
{
    c18.flattener()->insertOp(Operation(Operation::GotoBreakLabel )) ;
}
/** Does various processings for this instruction */
const char * BreakInstr::process()
{
  return breakable > 0 ? 0 : "'break' statement not within loop or switch." ;
}
