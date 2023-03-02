/***************************************************************************
                          returninstr.cpp  -  description
                             -------------------
    begin                : jeu mar 24 2005
    copyright            : (C) 2005 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/

#include "returninstr.h"
#include "cexpr.h"
#include "flatten.h"
#include "codegen.h"
#include "compiler.h"
#include "centity.h"
#include "operation.h"
#include "fctctx.h"

#include <iostream>
using namespace std ;



ReturnInstr::ReturnInstr ( Cexpr * e, FctCtx *f ) :
    expr ( e ), fctctx ( f )
{
}

ReturnInstr::~ReturnInstr()
{
  delete expr ;
}

/** Generates code for this instruction */
void ReturnInstr::flattenCode()
{
  Flatten *f = c18.flattener()  ;

  if ( expr ) f->flatten ( expr,Root ) ;

  c18.flattener()->insertOp ( Operation ( Operation::Return0,0,0,0,
                                          fctctx->returnLabel ) ) ;

}
/** Does various processings for this instruction */
const char * ReturnInstr::process()
{
  Cexpr *expr1  ;
  // this is the type of the function
  Ctype t =  fctctx->theFct->thetype()->subtype() ;
  int funcsz = t->sizeOf() ;
  int cst ;

  if ( funcsz == 0 && expr )
    return "\"return\" with a value, in a function returning void." ;
  else if ( funcsz != 0 && expr == 0 )
    return "\"return\" with no value, in a function returning non-void." ;
  else if ( expr == 0 )
    return 0 ; // no code

  // type propagation is needed for auto-casting the returned value
  const char *err = expr->propagateTypes();
  if ( err ) return err ;


  int exprsz = expr->sizeOf() ;
  Ctype exprtype = expr->exprType() ;
  bool diffsign = t->isUnsigned() != exprtype->isUnsigned() ;

  if ( t->isPointer())
  {
    // check constness of pointer 
    if ( t->isPointer() && !t->subtype()->constness() && (expr->isPtrToConst() || expr->isConstArray()) )
    {
      return "\"return\" const pointer in function returning non const pointer"; 
    }
  }
  if ( t->isIntegral() && exprtype->isIntegral() && ( ( funcsz != exprsz )  || diffsign ) )
  {
    // auto-cast if numeric types have different size or different signess
    expr1 = Cexpr::newCexpr ( Cexpr::Cast,expr ) ;
    expr1->exprType() = t ;
    expr = expr1 ;
  }
  else if ( t->isPointer() && exprtype->isArray() && t->subtype()->equal ( exprtype->subtype() ) )
  {
    // auto-cast from "array of" to "pointer to"
    expr1 = Cexpr::newCexpr ( Cexpr::Cast,expr ) ;
    expr1->exprType() = t ;
    expr = expr1 ;
  }
  else if ( ( t->isFloatingPoint() && exprtype->isIntegral() )  ||
            ( t->isIntegral() && exprtype->isFloatingPoint() ) )
  {
    expr1 = Cexpr::newCexpr ( Cexpr::Cast,expr ) ;
    expr1->exprType() = t ;
    expr = expr1 ;
  }
  // zero can be returned  by any  function returning a pointer
  else if ( t->isPointer() && expr->isIntegerConstant ( cst ) && cst == 0 )
  {
    // auto-cast from  to "pointer to"
    expr1 = Cexpr::newCexpr ( Cexpr::Cast,expr ) ;
    expr1->exprType() = t ;
    expr = expr1 ;
  }
  // any pointer can be returned by a void * function
  else if ( t->isPointer() && t->subtype()->isVoid() &&  exprtype->isPointer() && !exprtype->subtype()->isVoid())
  {
    expr1 = Cexpr::newCexpr ( Cexpr::Cast,expr ) ;
    expr1->exprType() = t ;
    expr = expr1 ;
  }
  // void * can be returned by any function returning a pointer
  else if ( t->isPointer() && !t->subtype()->isVoid() &&  exprtype->isPointer() && exprtype->subtype()->isVoid())
  {
    expr1 = Cexpr::newCexpr ( Cexpr::Cast,expr ) ;
    expr1->exprType() = t ;
    expr = expr1 ;
  }
  else if ( !t->equal ( exprtype ) )
  {
    return "Incompatible types in \"return\"" ;
  }

  // insert a keep pseudo operator
  // (move result to R0 and avoid spurious "no-effect" warning)
  expr1 = Cexpr::newCexpr ( Cexpr::Keep,expr ) ;
  expr = expr1 ;
  return expr->process() ;
}
