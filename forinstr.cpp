/***************************************************************************
                          forinstr.cpp  -  description
                             -------------------
    begin                : sam avr 23 2005
    copyright            : (C) 2005 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/

#include "forinstr.h"
#include "flatten.h"
#include "cexpr.h"
#include "operation.h"
#include "compiler.h"

ForInstr::ForInstr(Cexpr *i, Cexpr *c, Cexpr *n, Flatten *b)  :
        init(i), cond(c), next(n), block(b)
{
}
ForInstr::~ForInstr()
{
    delete init ;
    delete cond ;
    delete next ;
    delete block ;
}
/** Generates code for this instruction */
void ForInstr::flattenCode()
{
    c18.flattener()->insertOp(Operation(Operation::PushBreakLabel,exitLabel))  ;
    c18.flattener()->insertOp(Operation(Operation::PushContinueLabel,continueLabel))  ;
    // init loop code
    if(init) c18.flattener()->flatten(init,Root) ;
    // put loop label
    c18.flattener()->insertOp(Operation(Operation::PutLabel,loopLabel))  ;
    // condition code
    if(cond)
    {
      c18.flattener()->flatten(cond,Root) ;
      // exit loop if false
      c18.flattener()->insertOp(Operation(Operation::GotoLabelIf,exitLabel,0))  ;
    }
    // add block code
    (*c18.flattener()) += *block ;
    // put continue label
    c18.flattener()->insertOp(Operation(Operation::PutLabel,continueLabel))  ;
    // next loop code
    if( next) c18.flattener()->flatten(next,Root) ;
    // loop
    c18.flattener()->insertOp(Operation(Operation::GotoLabel,loopLabel))  ;
    // put exit loop label
    c18.flattener()->insertOp(Operation(Operation::PutLabel,exitLabel))  ;
    // pop continue/break stack
    c18.flattener()->insertOp(Operation(Operation::PopContinueLabel))  ;
    c18.flattener()->insertOp(Operation(Operation::PopBreakLabel))  ;
}
/** Does various processings for this instruction */
const char * ForInstr::process()
{
    loopLabel     =  c18.uniqueLabel() ;
    exitLabel     =  c18.uniqueLabel() ;
    continueLabel =  c18.uniqueLabel() ;

    
    if( init)
    {
        const char *initstatus = init->process() ;
        if(   initstatus ) return     initstatus ;
    }

    if( cond)
    {
    // insert a keep pseudo operator
    // (move result to _r0 and avoid spurious "no-effect" warning)
    // allows to perform test on result
        Cexpr *cond1= Cexpr::newCexpr(Cexpr::Test,cond) ;
        cond = cond1 ;
        const char *condstatus =  cond->process() ;
        if(   condstatus ) return     condstatus ;
    }


    if(next)
    {
        const char *nextstatus =  next->process() ;
        if(   nextstatus ) return     nextstatus ;
    }

    return 0 ;
}
