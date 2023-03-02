/***************************************************************************
                          continueinstr.cpp  -  description
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

#include "continueinstr.h"
#include "compiler.h"
#include "operation.h"
#include "flatten.h"

ContinueInstr::ContinueInstr(int c) : continueable(c)
{
}
ContinueInstr::~ContinueInstr()
{
}
/** Generates code for this instruction */
void ContinueInstr::flattenCode()
{
    c18.flattener()->insertOp(Operation(Operation::GotoContinueLabel )) ;
}
/** Does various processings for this instruction */
const char * ContinueInstr::process()
{
  return continueable > 0 ? 0 : "'continue' statement not within loop." ;
}
