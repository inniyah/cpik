/***************************************************************************
                          ifinstr.cpp  -  description
                             -------------------
    begin                : ven avr 22 2005
    copyright            : (C) 2005 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/

#include "ifinstr.h"
#include "flatten.h"
#include "cexpr.h"
#include "operation.h"
#include "compiler.h"

IfInstr::IfInstr(Cexpr *c, Flatten *b1, Flatten *b2) :
  cond(c), block1(b1) , block2(b2)
{
}
IfInstr::~IfInstr()
{
  delete cond ;
  delete block1 ;
  delete block2 ;
}
/** Generates code for this instruction */
void IfInstr::flattenCode()
{
  Flatten condflat;
  condflat.flatten(cond,Root) ;
// condflat.dump();

  enum Flatten::TestResult testResult=condflat.optimizeTest();
  
  (*c18.flattener()) += condflat ; // put the optimized operations
  
  if ( testResult == Flatten::AlwaysTrue )
  {
    c18.flattener()->append(*block1) ;
    if (block2) c18.flattener()->append(block2->getComments());
  }
  else if ( testResult == Flatten::AlwaysFalse )
  {
    c18.flattener()->append(block1->getComments());
    if (block2) (*c18.flattener()) += *block2 ;
    c18.flattener()->insertOp(Operation(Operation::PutLabel,exitLabel));
  }
  else
  {
    // regular if
    c18.flattener()->insertOp(Operation(Operation::GotoLabelIf,block2?falseLabel:exitLabel,testResult==Flatten::Raw?0:1))  ;
    (*c18.flattener()) += *block1 ;
    if ( block2 ) 
    {
      c18.flattener()->insertOp(Operation(Operation::GotoLabel,exitLabel))  ;
      c18.flattener()->insertOp(Operation(Operation::PutLabel,falseLabel))  ;
      (*c18.flattener()) += *block2 ;
    }
    c18.flattener()->insertOp(Operation(Operation::PutLabel,exitLabel))  ;
  }
}
/** Does various processings for this instruction */
 const char * IfInstr::process()
{
  string label=c18.uniqueLabel();
  falseLabel = label +"_else";
  exitLabel =  label +"_endif";
  // insert a keep pseudo operator
  // (move result to R0 and avoid spurious "no-effect" warning)
  // allows to perform test on result
  Cexpr *cond1= Cexpr::newCexpr(Cexpr::Test,cond) ;
  cond = cond1 ;

  return cond->process() ;
}
