/***************************************************************************
                          exprinstr.cpp  -  description
                             -------------------
    begin                : dim mar 20 2005
    copyright            : (C) 2005 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/


#include "exprinstr.h"
#include "compiler.h"
#include "flatten.h"
#include "cexpr.h"
#include "codegen.h"

ExprInstr::ExprInstr(Cexpr *e) :
   expr(e) 
{
}
ExprInstr::~ExprInstr()
{
  delete expr ;
}
/** Does various processings for this instruction */
const char * ExprInstr::process()
{
         return  expr->process() ;
}
/** Generates code for this instruction */
void ExprInstr::flattenCode()
{
        Flatten *f = c18.flattener() ;

        f->flatten(expr,Root) ;
        // *output << "; ==> " << expr->prettyPrint()  << endl ;
//        f->dump("", c18.out()) ;
//        if( f->optimize() ) f->dump("optimized",c18.out() ) ;
//        c18.codegen()->makeCode( *f ) ;
}
