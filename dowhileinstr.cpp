/***************************************************************************
                          whileinstr.cpp  -  description
                             -------------------
    begin                : mar avr 5 2005
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

#include "dowhileinstr.h"
#include "flatten.h"
#include "cexpr.h"
#include "operation.h"
#include "compiler.h"


DoWhileInstr::DoWhileInstr(Cexpr *e, Flatten *f) : cond(e), block(f)
{
}
DoWhileInstr::~DoWhileInstr()
{
  delete cond ;
  delete block ;
}
/** Generates code for this instruction */
void DoWhileInstr::flattenCode()
{
  c18.flattener()->insertOp(Operation(Operation::PushBreakLabel,breakLabel))  ;
  c18.flattener()->insertOp(Operation(Operation::PushContinueLabel,continueLabel))  ;
  
  Flatten condflat;
  condflat.flatten(cond,Root) ;
  // condflat.dump();
  
  enum Flatten::TestResult testResult=condflat.optimizeTest();

  c18.flattener()->insertOp(Operation(Operation::PutLabel,loopLabel))  ;  
  (*c18.flattener()) += *block ;
  c18.flattener()->insertOp(Operation(Operation::PutLabel,continueLabel))  ;
  (*c18.flattener()) += condflat ;
  if ( testResult == Flatten::AlwaysTrue )
  {
    c18.flattener()->insertOp(Operation(Operation::GotoLabel,loopLabel))  ;  
  }
  else if ( testResult == Flatten::AlwaysFalse )
  {
    // no jump
  }
  else // regular do-while
  {
    c18.flattener()->insertOp(Operation(Operation::GotoLabelIf,loopLabel,testResult==Flatten::Raw?1:0)) ;  
  }
  c18.flattener()->insertOp(Operation(Operation::PutLabel,breakLabel))  ;

  c18.flattener()->insertOp(Operation(Operation::PopContinueLabel))  ;
  c18.flattener()->insertOp(Operation(Operation::PopBreakLabel))  ;
}
/** Does various processings for this instruction */
const char * DoWhileInstr::process()
{
  string label = c18.uniqueLabel() ; 
  loopLabel =  label + "_loop" ;
  breakLabel =  label + "_break" ;
  continueLabel =  label + "_continue" ;
  // insert a keep pseudo operator
  // (move result to R0 and avoid spurious "no-effect" warning)
  // allows to perform test on result
  Cexpr *cond1= Cexpr::newCexpr(Cexpr::Test,cond) ;
  cond = cond1 ;

  return cond->process() ;
}
