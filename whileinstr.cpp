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

#include "whileinstr.h"
#include "flatten.h"
#include "cexpr.h"
#include "operation.h"
#include "compiler.h"


WhileInstr::WhileInstr(Cexpr *e, Flatten *f) : cond(e), block(f)
{
}
WhileInstr::~WhileInstr()
{
  delete cond ;
  delete block ;
}
/** Generates code for this instruction */
void WhileInstr::flattenCode()
{
  Flatten condflat;
  condflat.flatten(cond,Root) ;
  // condflat.dump();
  
  enum Flatten::TestResult testResult=condflat.optimizeTest();
  
  c18.flattener()->insertOp(Operation(Operation::PushBreakLabel,exitLabel))  ;
  c18.flattener()->insertOp(Operation(Operation::PushContinueLabel,loopLabel))  ;
  
  
  if ( testResult == Flatten::AlwaysTrue )
  {
    c18.flattener()->insertOp(Operation(Operation::PutLabel,loopLabel))  ;
    c18.flattener()->append(condflat); // put the optimized test because there can be some assigment or side effect
    c18.flattener()->append(*block);
    c18.flattener()->insertOp(Operation(Operation::GotoLabel,loopLabel))  ;
    c18.flattener()->insertOp(Operation(Operation::PutLabel,exitLabel))  ;
  }
  else if ( testResult == Flatten::AlwaysFalse )
  {
    c18.flattener()->append(condflat) ; // put the optimized test because there can be some assigment or side effect
    c18.flattener()->append(block->getComments()); // only the comments from block
    // no block, no jump, no labels 
  }
  else // regular while
  {
    c18.flattener()->insertOp(Operation(Operation::PutLabel,loopLabel))  ;
    c18.flattener()->append(condflat) ; // put the optimized test
    c18.flattener()->insertOp(Operation(Operation::GotoLabelIf,exitLabel,testResult==Flatten::Raw?0:1)) ;
    c18.flattener()->append(*block) ;
    c18.flattener()->insertOp(Operation(Operation::GotoLabel,loopLabel))  ;
    c18.flattener()->insertOp(Operation(Operation::PutLabel,exitLabel))  ;
  }

  c18.flattener()->insertOp(Operation(Operation::PopContinueLabel))  ;
  c18.flattener()->insertOp(Operation(Operation::PopBreakLabel))  ;
}
/** Does various processings for this instruction */
const char * WhileInstr::process()
{
  string label = c18.uniqueLabel() ;
  loopLabel =  label+"_while";
  exitLabel =  label+"_exit" ;
  // insert a keep pseudo operator
  // (move result to _r0 and avoid spurious "no-effect" warning)
  // allows to perform test on result
  Cexpr *cond1= Cexpr::newCexpr(Cexpr::Test,cond) ;
  cond = cond1 ;

  return cond->process() ;
}
