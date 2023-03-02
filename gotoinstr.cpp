/***************************************************************************
                          gotoinstr.cpp  -  description
                             -------------------
    begin                : mer mar 30 2005
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

#include "gotoinstr.h"
#include "compiler.h"
#include "operation.h"
#include "flatten.h"

GotoInstr::GotoInstr(const string& decadix, int i)  : label(decadix), what(i)
{
}
GotoInstr::~GotoInstr()
{
}
/** Generates code for this instruction */
void GotoInstr::flattenCode()
{
    string lab = "L18_" ;
    lab += c18.secureNakedFileName() ;
    lab += '_' ;
    lab += c18.currentFunctionName() ;
    lab += '_' ;
    lab += label ;
  if( what == 0 ) // label definition
  {
    c18.flattener()->insertOp(Operation(Operation::PutLabel,lab)) ;
  }
  else if(what == 1)
  {
    c18.flattener()->insertOp(Operation(Operation::GotoLabel,lab)) ;
  }
}
/** Does various processings for this instruction */
const char * GotoInstr::process()
{
  if( what == 0 ) // label definition
  {
      return c18.parser()->curFct()->declareLabel( label) ;
  }
  else  if (what == 1)
  {
      c18.parser()->curFct()->referenceLabel( label) ;
  }
  return 0 ;
}
