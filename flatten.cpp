/***************************************************************************
                          flatten.cpp  -  description
                             -------------------
    begin                : mer f�v 9 2005
    copyright            : (C) 2005 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/


#include "flatten.h"
#include "position.h"
#include "symtab.h"
#include "compiler.h"
#include "operation.h"
#include "cexpr.h"

#include <assert.h>

#include <iostream>
using namespace std ;


Flatten::Flatten( ) : _symbols ( * ( c18.symtab() ) )
{
}
Flatten::~Flatten()
{
}

void Flatten::dump ( const char *m, ostream& os )
{
  os << "; -- abstract machine code (" << m << ") -- " << endl ;
  list<Operation>::iterator i ;
  for ( i = _ops.begin() ; i != _ops.end() ; ++i )
  {
    if ( ( *i ).isActive() || ( *i ).is ( Operation::PutComment ) )
    {
      os << "; " ; ( *i ).dump ( os ) ; os << endl ;
    }
  }
  os << endl ;
}

void Flatten::insertOp ( const Operation& op )
{
  _ops.push_back ( op ) ;
}


//Operation& Flatten::op(int i)
//{
//    return  _ops[i] ;
//}

list<Operation>& Flatten::ops()
{
  return  _ops ;
}

// PopNR
ResultLocation Flatten::flatten ( Cexpr *exp, Position pos )
{
  ResultLocation r ( ResultLocation::Stack )  ; // stack result by default
  int nb ;

  // suppressed because it inserts PushStack operations in the instruction flow
  // so the peephole optimizer is likely to be rewritten
  // => PushStack is currently only used by the "," operator
  // (anyway, it seems it is only useful for this operator, and in very special situation)
  //  insertOp ( Operation ( Operation::PushStack ) ) ;


  if ( exp->isTerminal() )
  {
    Centity e = exp->getEntity() ;
    if ( pos == Left )
    {
      if ( e->isArray() )
        insertOp ( Operation ( Operation::PushAddr,e ) ) ;
      else
        insertOp ( Operation ( e->sizeOf(), Operation::PushN, e, 0 ) );
    }
    else
    {
      if ( e->isArray() )
        insertOp ( Operation ( Operation::MovAddrtoR , e ) ) ;
      else
        insertOp ( Operation ( e->sizeOf() , Operation::MovNtoR, e, 0 ) ) ;
      r = ResultLocation ( ResultLocation::DataReg ) ;
    }
  }
  else if ( (exp->oper() == Cexpr::Aff)   || (exp->oper() == Cexpr::AffInit)  )
  {
    r = flattenAffectation ( exp, pos ) ;
  }
  else if ( exp->oper() == Cexpr::AffBF )
  {
    r = flattenAffectationBF ( exp, pos ) ;
  }
  else if ( exp->oper() == Cexpr::CondOp )
  {
    r = flattenCondOp ( exp, pos ) ;
  }
  else if ( exp->isDyadic() )
  {
    r = flattenDyadicOperation ( exp , pos );
  }
  else if ( exp->isMonadic() )
  {
    r = flattenMonadicOperation ( exp , pos );
  }
  else if ( exp->isFctCall() )
  {
    r = flattenFunctionCall ( exp , pos );
  }


  if ( pos == Root )
    insertOp ( Operation ( Operation::CleanStack ) ) ;

  else if ( pos == Right && r.isStack() )
  {
    nb =  exp->sizeOf() ;

    insertOp ( Operation ( nb,  Operation::PopNR, 0, 0 ) ) ;

    r = ResultLocation::DataReg ;
  }
  return r ;
}
/**
  The very special operation
*/
ResultLocation  Flatten::flattenAffectation ( Cexpr *e, Position pos )
{

  Cexpr *left =  e->arg ( 0 ) , *right = e->arg ( 1 ) ;

  // the rhs is compiled as a lhs (result is stored onto stack)
  ResultLocation loc ( ResultLocation::Stack )  ;
  int sz = e->sizeOf() ; // same as left->sizeOf() ;
  int rsz = right->sizeOf() ;

  ResultLocation rloc = flatten ( right, Left ) ;
  if ( rloc.isPtr() )
  {
    insertOp ( Operation ( Operation::PushP ) ) ;
  }

  // insert cast code (if needed)
  // affectation between dereferencable entities do not need integer cast
  if ( right->exprType()->isArray() ) rsz = 2 ;

  if ( rsz != sz )
  {
    // sign extension needed if source is signed
    Operation::Code  code =
      right->exprType()->isSigned()  ?  Operation::CastN_N : Operation::CastN_NU ;

    insertOp ( Operation ( sz /* target sz */ , code, 0 , rsz /* source sz*/ ) ) ;

  }
  // compute the lhs lvalue
  if ( left->isTerminal() )
  {
    // nothing to do, just move data from stack to var
    // TODO : Perform type conversion during pop
    if ( pos == Root )
    {
      // no result needed, clean stack
      insertOp ( Operation ( sz , Operation::PopN, left->getEntity(),0 ) ) ;
    }
    else
    {
      insertOp ( Operation ( sz, Operation::MovTosToN , left->getEntity(), 0 ) ) ;
    }
  }
  else
  {
    // no terminal lhs is a dereferenced lvalue
    flatten ( left, Right ) ;
    // the result is (normally) in the PTR1 register
    if ( pos == Root )
      insertOp ( Operation ( sz, Operation::PopPtrIndirectN,0,0 ) ) ;
    else
      insertOp ( Operation ( sz , Operation::MovTosToPtrIndirectN,0,0 ) ) ;
  }

  if ( loc.isStack()  && pos == Right )
  {
    // move result to REG
    insertOp ( Operation ( sz, Operation::PopNR,0,0 ) ) ;
    loc =  ResultLocation ( ResultLocation::DataReg ) ;
  }

  return  loc ;
}

/**
  Special version of affectation for bit fields
*/
ResultLocation  Flatten::flattenAffectationBF ( Cexpr *e, Position pos )
{

  Cexpr *left =  e->arg ( 0 ) , *right = e->arg ( 1 ) ;

  // the rhs is compiled as a lhs (result is stored onto stack)
  ResultLocation loc ( ResultLocation::Stack )  ;
  int sz = e->sizeOf() ; // same as left->sizeOf() ;

  /*ResultLocation rloc = */ flatten ( right, Left ) ;

  int size, offset ;
  left->exprType()->isBitField ( size, offset ) ;
  // compute the lhs lvalue
  if ( left->isTerminal() )
  {
    // nothing to do, just move data from stack to var
    if ( pos == Root )
    {
      // no result needed, clean stack
      insertOp ( Operation ( 1 , Operation::PopBF, left->getEntity(), 0 ).setBF ( size,offset ) ) ;
    }
    else
    {
      // keep data on stack
      insertOp ( Operation ( 1, Operation::MovTosToBF , left->getEntity(), 0 ).setBF ( size,offset ) ) ;
    }
  }
  else
  {
    // no terminal lhs is a dereferenced lvalue
    flatten ( left, Right ) ;
    // the result is implicitly in the PTR1 register, no explicit destination needed
    if ( pos == Root )
      insertOp ( Operation ( 1, Operation::PopBF , 0 , 0 ).setBF ( size,offset ) ) ;
    else
      insertOp ( Operation ( 1 , Operation::MovTosToBF , 0 , 0 ).setBF ( size,offset ) ) ;
  }

  if ( loc.isStack()  && pos == Right )
  {
    // move result to REG
    insertOp ( Operation ( sz, Operation::PopNR,0,0 ) ) ;
    loc =  ResultLocation ( ResultLocation::DataReg ) ;
  }

  return  loc ;
}

ResultLocation  Flatten::flattenCast ( Cexpr *e, Position /* pos */ )
{
  Cexpr *s0 = e->arg ( 0 ) ;
  int sz = e->sizeOf() , // dest size
           sz0 = s0->sizeOf() ; // source size
  ResultLocation loc ;
  Ctype& targettype = e->exprType() ;
  Ctype& sourcetype = s0->exprType() ;

  // conversion from integral to integral
  if ( ( sourcetype->isIntegral()  ||  sourcetype->isDereferencable() ) && targettype->isIntegral() )
  {
    if ( sourcetype->isArray() )  sz0 = 2 ; // arrays are considered as pointers
    if ( sz != sz0 )
    {
      // sign extension is needed when src type is signed
      Operation::Code  code =
        sourcetype->isSigned()  ?
        Operation::CastN_N :  Operation::CastN_NU ;
      insertOp ( Operation ( sz /*target */ , code, 0 , sz0 /* source */ ) ) ;
    }
  }
  // integer to float
  else if ( sourcetype->isIntegral() && targettype->isFloatingPoint() )
  {
    Operation::Code  code =
      sourcetype->isSigned()  ?
      Operation::CastN_F :  Operation::CastNU_F ;
    insertOp ( Operation ( sz /*target */ , code, 0 , sz0 /* source */ ) ) ;
  }
  // float to integer
  else if ( sourcetype->isFloatingPoint() && targettype->isIntegral() )
  {
    Operation::Code  code =
      sourcetype->isSigned()  ?
      Operation::CastF_N :  Operation::CastF_NU ;
    insertOp ( Operation ( sz /*target */ , code, 0 , sz0 /* source */ ) ) ;
  }
  return  loc ;
}

ResultLocation  Flatten::flattenUMinus ( Cexpr *e, Position /* pos */ )
{
  int sz = e->sizeOf() ;
  ResultLocation loc ;
  Ctype& targettype = e->exprType() ;

  if ( targettype->isIntegral() )
    insertOp ( Operation ( sz , Operation::NegN,0,0 ) ) ;
  else if ( targettype->isFloatingPoint() )
    insertOp ( Operation ( sz , Operation::NegF,0,0 ) ) ;

  return  loc ;

}
ResultLocation  Flatten::flattenUnpack ( Cexpr *e, Position /* pos */ )
{
  int  size, offset ;
  ResultLocation loc ;
  Ctype& targettype = e->exprType() ;
  Ctype& sourcetype = e->arg ( 0 )->exprType() ;


  if ( sourcetype->isBitField ( size, offset ) )
  {
    if ( targettype->isUnsigned() )
      insertOp ( Operation ( 1 , Operation::UpackU,0, 0 ).setBF ( size,offset ) ) ;
    else
      insertOp ( Operation ( 1  , Operation::Upack,0, 0 ).setBF ( size,offset ) ) ;
  }
  return  loc ;

}

ResultLocation  Flatten::flattenDyadicOperation ( Cexpr *e, Position pos )
{
  int cst;
  // + and - need special processing because of pointer arithmetics
  if ( e->oper()  == Cexpr::Plus || e->oper()  == Cexpr::Minus )
    return flattenPlusMinus ( e, pos ) ;
  // , operator is also special
  else if ( e->oper()  == Cexpr::Seq )
    return flattenSeq ( e, pos ) ;
  /*
    else if ( e->oper()  == Cexpr::BAndAff ||
              e->oper()  == Cexpr::BOrAff ||
              e->oper()  == Cexpr::BXorAff )
      return flattenBXxxAff ( e, pos ) ;
  */
  //  @= operators
  else if ( e->isSideEffect() )
    return flattenInPlaceOperator ( e,pos ) ;
  // && operator does not always execute both operands
  else if ( e->oper() == Cexpr::LAnd )
    return flattenLAnd ( e,pos ) ;
  else if ( e->oper() == Cexpr::LOr )
    return flattenLOr ( e,pos ) ;
  else if ( e->oper() == Cexpr::LShift ||  e->oper() == Cexpr::RShift )
    return flattenShifts ( e,pos ) ;
  else if ( e->oper() == Cexpr::BAnd )
    return flattenBitOp ( e,pos, Operation::BAndN ) ;
  else if ( e->oper() == Cexpr::BOr )
    return flattenBitOp ( e,pos, Operation::BOrN ) ;
  else if ( e->oper() == Cexpr::BXor )
    return flattenBitOp ( e,pos, Operation::BXorN ) ;

  int sz = e->sizeOf() ;  sz = sz ;
  int is_signed = e->exprType()->isSigned() ;

  switch ( e->oper() )
  {
    case  Cexpr::Mul:
      flatten ( e->arg ( 0 ), Left ) ;
      flatten ( e->arg ( 1 ), Right ) ;
      insertOp (
        Operation ( sz , e->exprType()->isFloatingPoint() ? Operation::MulFP :  Operation::MulN, 0,0 )
      ) ;
      return ResultLocation ( ResultLocation::Stack ) ;

    case  Cexpr::Div:
      flatten ( e->arg ( 0 ), Left ) ;
      flatten ( e->arg ( 1 ), Right ) ;
      if ( is_signed ) // FP op always signed
        insertOp (
          Operation ( sz, e->exprType()->isFloatingPoint() ? Operation::DivFP : Operation::DivN , 0, 0 )
        ) ;
      else
        insertOp ( Operation ( sz, Operation::DivNU , 0, 0 ) ) ;
      return ResultLocation ( ResultLocation::Stack ) ;

    case  Cexpr::Mod:
      flatten ( e->arg ( 0 ), Left ) ;
      flatten ( e->arg ( 1 ), Right ) ;
      if ( is_signed )
        insertOp ( Operation ( sz, Operation::ModN,0,0 ) ) ;
      else
        insertOp ( Operation ( sz, Operation::ModNU,0,0 ) ) ;
      return ResultLocation ( ResultLocation::Stack ) ;
  }

  /*
   A special code must be written in the future  for comparisons, because
   these operators are a  large field for optimisations
  */

  // When one operand is FP, the second one is FP too, due to automatic cast insertions
  if ( e->arg ( 0 )->exprType()->isFloatingPoint() )
    return flattenFPComparisons ( e ) ;
  //
  // The following code only processes   integer comparisons
  //
  int opcode ;
  Cexpr *e0=e->arg ( 0 );
  Cexpr *e1=e->arg ( 1 );
  bool signed0=e0->isSigned();
  bool e0is0=e0->isIntegerConstant ( cst ) && cst==0;
  bool e1is0=e1->isIntegerConstant ( cst ) && cst==0;
  bool is0=e0is0 || e1is0;

  // when one of expressions is zero, other value is loaded in _r0
  if ( e0is0 )
  {
    flatten ( e->arg ( 1 ), Right ) ;
  }
  else if ( e1is0 )
  {
    flatten ( e->arg ( 0 ), Right ) ;
  }
  else
  {
    flatten ( e->arg ( 0 ), Left ) ;
    flatten ( e->arg ( 1 ), Right ) ;
  }

  switch ( e->oper() )
  {
    case  Cexpr::Eq:
      // args are already converted to same type
      sz =  e->arg ( 0 )->sizeOf() ;
      if ( e->arg ( 0 )->exprType()->isArray() ) sz = 2 ;
      // signed opcode are unsigned ones +6
      opcode =  is0     ? Operation::EqZero :
                signed0 ? Operation::Eq :
                Operation::Ueq ;

      insertOp ( Operation ( sz , Operation::CompareN, 0, opcode ) ) ;
      break ;

    case  Cexpr::NE:
      // args are already converted to same type
      sz =  e->arg ( 0 )->sizeOf() ;
      if ( e->arg ( 0 )->exprType()->isArray() ) sz = 2 ;
      opcode =  is0     ? Operation::NeZero :
                signed0 ? Operation::Ne :
                Operation::Une ;

      insertOp ( Operation ( sz , Operation::CompareN,0, opcode ) ) ;
      break ;

    case  Cexpr::LE:
      // args are already converted to same type
      sz =  e->arg ( 0 )->sizeOf() ;
      if ( e->arg ( 0 )->exprType()->isArray() ) sz = 2 ;

      opcode= ( e0is0 &&  signed0 ) ? Operation::GeZero :
              ( e0is0 && !signed0 ) ? Operation::True :
              ( e1is0 &&  signed0 ) ? Operation::LeZero :
              ( e1is0 && !signed0 ) ? Operation::EqZero :
              signed0   ? Operation::Le :
              Operation::Ule;
      if ( opcode == Operation::True )
      {
        c18.parser()->warning ( "The condition is always true" );
      }
      insertOp ( Operation ( sz , Operation::CompareN ,0, opcode ) ) ;
      break ;


    case  Cexpr::GE:
      // args are already converted to same type
      sz =  e->arg ( 0 )->sizeOf() ;
      if ( e->arg ( 0 )->exprType()->isArray() ) sz = 2 ;

      opcode= ( e0is0 &&  signed0 ) ? Operation::LeZero :
              ( e0is0 && !signed0 ) ? Operation::EqZero :
              ( e1is0 &&  signed0 ) ? Operation::GeZero :
              ( e1is0 && !signed0 ) ? Operation::True :
              signed0   ? Operation::Ge :
              Operation::Uge;
      if ( opcode == Operation::True )
      {
        c18.parser()->warning ( "The condition is always true" );
      }
      insertOp ( Operation ( sz , Operation::CompareN ,0, opcode ) ) ;
      break ;

    case  Cexpr::Lt:
      // args are already converted to same type
      sz =  e->arg ( 0 )->sizeOf() ;
      if ( e->arg ( 0 )->exprType()->isArray() ) sz = 2 ;

      opcode= ( e0is0 &&  signed0 ) ? Operation::GtZero :
              ( e0is0 && !signed0 ) ? Operation::NeZero :
              ( e1is0 &&  signed0 ) ? Operation::LtZero :
              ( e1is0 && !signed0 ) ? Operation::False :
              signed0   ? Operation::Lt :
              Operation::Ult;
      if ( opcode == Operation::False )
      {
        c18.parser()->warning ( "The condition is always false" );
      }
      insertOp ( Operation ( sz , Operation::CompareN ,0, opcode ) ) ;
      break ;


    case  Cexpr::Gt:
      // args are already converted to same type
      sz =  e->arg ( 0 )->sizeOf() ;
      if ( e->arg ( 0 )->exprType()->isArray() ) sz = 2 ;

      opcode= ( e0is0 &&  signed0 ) ? Operation::LtZero :
              ( e0is0 && !signed0 ) ? Operation::False :
              ( e1is0 &&  signed0 ) ? Operation::GtZero :
              ( e1is0 && !signed0 ) ? Operation::NeZero :
              signed0   ? Operation::Gt :
              Operation::Ugt;
      if ( opcode == Operation::False )
      {
        c18.parser()->warning ( "The condition is always false" );
      }
      insertOp ( Operation ( sz , Operation::CompareN ,0, opcode ) ) ;
      break ;
  }
  return ResultLocation ( ResultLocation::Stack ) ;
}

ResultLocation   Flatten::flattenMonadicOperation ( Cexpr *e, Position pos )
{
  Cexpr *s0 = e->arg ( 0 ) ;
  int sz = e->sizeOf()  ;
  int sz0 = s0->sizeOf()  ;
  ResultLocation loc ;


  // Special: unary & operand must not be computed if operand is terminal
  // code such as &*x have already been optimized out, so  s0 MUST be
  // a variable or a litteral.
  if ( e->oper() == Cexpr::UAddr )
  {
    if ( s0->isTerminal() ) // Can't be a constant
    {
      insertOp ( Operation ( Operation::PushAddr, s0->getEntity() ) ) ;
      return  ResultLocation ( ResultLocation::Stack ) ;
    }
  }
  // ++ and -- are rather complicated operators, so relevant code
  // is deported to a special routine
  else if ( e->oper() == Cexpr::PlusPlusPre || e->oper() == Cexpr::PlusPlusPost ||
            e->oper() == Cexpr::MinusMinusPre || e->oper() == Cexpr::MinusMinusPost )
  {
    return flattenIncDec ( e, pos ) ;
  }
  // test operator is also special : its result is ALWAYS in Z bit
  // moreover, this routine could be directly invoked from && and || operators
  // as an optimisation.
  else if ( e->oper() == Cexpr::Test )
  {
    return flattenTest ( e, pos ) ;
  }



  loc = flatten ( s0, Left ) ;
  // return location is supposed to be stack
  // loc =  ResultLocation ( ResultLocation::Stack ) ;
  // TODO ce n'est pas forcement le cas
  if ( loc.isPtr() )
  {
    insertOp ( Operation ( Operation::PushP ) ) ;
    loc =  ResultLocation ( ResultLocation::Stack ) ;
  }

  Ctype& elemtype = s0->exprType()->subtype() ;

  switch ( e->oper() )
  {

    case Cexpr::ZUStar:
      insertOp ( Operation ( Operation::PopP ) ) ;
      loc = ResultLocation ( ResultLocation::AddrReg1 ) ;
      break ;

    case Cexpr::UStar:
      // patch for arrays of arrays (++gib: 2008)
      // dereferencing depends on what is referenced
      // if array elements are arrays, I have just to leave sub-array adr on the stack
      if ( ! elemtype->is ( type::Array ) )
      {
        insertOp ( Operation ( sz, Operation::IndirectN, 0, 0 ) );
      }

      break ;

    case Cexpr::ZArrow:
    {
      StructMember *sm = elemtype->getMember ( e->memberName() ) ;
      assert ( sm != 0 ) ;
      int offset = sm->moffset() ;
      if ( offset != 0 )
      {
        insertOp ( Operation ( Operation::AddCst8TOS16, 0 , 0, offset ) ) ;
      }
      insertOp ( Operation ( Operation::PopP ) ) ;
      loc = ResultLocation ( ResultLocation::AddrReg1 ) ;
    }
    break ;

    case Cexpr::Arrow:
    {
      // add  offset to pointer - elemtype is struct or union
      // member existence is already checked
      StructMember *sm = elemtype->getMember ( e->memberName() ) ;
      assert ( sm != 0 ) ;
      int offset = sm->moffset() ;
      if ( offset != 0 )
      {
        insertOp ( Operation ( Operation::AddCst8TOS16, 0 , 0, offset ) ) ;
      }

      // if array elements are arrays, I have just to leave adr on the stack
      if ( ! sm->mtype()->is ( type::Array ) )
      {
        insertOp ( Operation ( sz, Operation::IndirectN, 0, 0 ) );
      }
    }
    break ;

    case Cexpr::Cast: // OK FP
      flattenCast ( e,pos ) ;
      break ;

    case Cexpr::UMinus: // OK FP
      flattenUMinus ( e,pos ) ;
      break ;

    case Cexpr::UnpackBF:
      flattenUnpack ( e,pos ) ;
      break ;

    case Cexpr::LNot:
      if ( e->arg ( 0 )->exprType()->isFloatingPoint() )
        insertOp ( Operation ( 4 , Operation::LNotFP,0,0 ) ) ;
      else
        insertOp ( Operation ( sz0 , Operation::LNotN,0,0 ) ) ;
      break ;

    case Cexpr::BNot:
      insertOp ( Operation ( sz , Operation::BNotN ,0,0 ) ) ;
      break ;

    case Cexpr::UPlus:
      break ;

    case Cexpr::Keep:
      // !!! must return 8 bit data in _r0L
      if ( sz == 1 ) insertOp ( Operation ( Operation::Pop8RL ) ) ;
      else insertOp ( Operation ( sz,  Operation::PopNR ,0,0 ) ) ;
      loc =  ResultLocation ( ResultLocation::DataReg ) ;
      break ;
  }

  if ( loc.isStack()  && pos == Right )
  {
    // move result to REG
    insertOp ( Operation ( sz, Operation::PopNR,0,0 ) ) ;
    loc =  ResultLocation ( ResultLocation::DataReg ) ;
  }
  return loc ;
}
//
// this routine flattens logical expression
//
ResultLocation  Flatten::flattenTest ( Cexpr *e, Position )
{
  Cexpr *arg =  e->arg ( 0 ) ;
  int sz = e->sizeOf() ;
  int bfsz, bfoff ;


  if ( arg->isTerminal() )
  {
    int konst ;
    if ( arg->isIntegerConstant ( konst ) )
    {
      insertOp ( Operation ( sz ,  Operation::TestN ,0,konst ) ) ;
    }
    else
    {
      arg->exprType()->isBitField ( bfsz, bfoff ) ;
      insertOp ( Operation ( sz ,  Operation::TestN ,
                             arg->getEntity(), 0 ).setBF ( bfsz, bfoff ) ) ;
    }
  }
  else
  {
    /*ResultLocation loc = */ flatten ( arg, Left ) ;
    insertOp ( Operation ( sz , Operation::PopTestN,0,0 ) ) ;
  }
  return  ResultLocation ( ResultLocation::ZBit ) ;
}


//
// This routine flattens both Plus and Minus dyadic operators
//
ResultLocation  Flatten::flattenPlusMinus ( Cexpr *e, Position pos )
{
  //  scale factor
  Ctype ltyp =  e->arg ( 0 )->exprType() ;
  Ctype rtyp =  e->arg ( 1 )->exprType() ;
  int sf = ltyp->scaleFactor() , konst ;
  int sz = e->sizeOf() ;

  Operation::Code   xxx16x2,  xxx, xxxFP  ;

  ResultLocation loc ( ResultLocation::Stack ) ;



  if ( e->oper() == Cexpr::Plus )
  {
    xxx =  Operation::AddN ; xxx16x2 = Operation::Add16scale2 ; xxxFP = Operation::AddFP ;
  }
  else
  {
    xxx = Operation::SubN ; xxx16x2 = Operation::Sub16scale2 ; xxxFP = Operation::SubFP ;
  }


  if ( sf != 0 )
  {

    // special : pointer difference
    if ( ltyp->isDereferencable() && rtyp->isDereferencable() && e->oper() == Cexpr::Minus )
      // types already checked
    {
      flatten ( e->arg ( 0 ), Left ) ;
      flatten ( e->arg ( 1 ), Right ) ;
      if ( sf == 1 )
      {
        insertOp ( Operation ( 2, Operation::SubN, 0,0 ) ) ;
      }
      else if ( sf == 2 )
      {
        insertOp ( Operation ( Operation::SubPtrScale2 ) ) ;
      }
      else
      {
        insertOp ( Operation ( 2, Operation::SubN, 0,0 ) ) ;
        insertOp ( Operation ( 2, Operation::PushN,0,sf ) ) ;
        insertOp ( Operation ( 2, Operation::DivNU, 0, 0 ) ) ;
      }
    }
    else if ( e->arg ( 1 )->isIntegerConstant ( konst ) )
    {
      konst *= sf ; // apply scale factor
      if ( e->arg ( 0 )->isTerminal() && e->arg ( 0 )->getEntity()->isArray() )
      {
        // it is an array : offset from a constant pointer yields a constant pointer
        if ( e->oper() == Cexpr::Minus ) konst = -konst ;
        insertOp ( Operation ( Operation::PushAddr, e->arg ( 0 )->getEntity(), 0, konst ) ) ;
      }
      else if ( ltyp->isDereferencable() )
      {
        flatten ( e->arg ( 0 ), Left ) ;
        insertOp ( Operation ( Operation::MovConst16toR,0,0,konst ) ) ;
        insertOp ( Operation ( 2, xxx ,0, 0 ) ) ;
      }
    }
    else if ( sf == 2 )
    {
      flatten ( e->arg ( 0 ), Left ) ;
      flatten ( e->arg ( 1 ), Right ) ;
      insertOp ( Operation ( xxx16x2 ) ) ;
    }
    else if ( sf == 1 )
    {
      flatten ( e->arg ( 0 ), Left ) ;
      flatten ( e->arg ( 1 ), Right ) ;
      insertOp ( Operation ( 2, xxx , 0, 0 ) ) ;
    }
    else
    {
      flatten ( e->arg ( 0 ), Left ) ;
      flatten ( e->arg ( 1 ), Left ) ;
      insertOp ( Operation ( Operation::MovConst16toR,0,0,sf ) ) ;
      insertOp ( Operation ( 2, Operation::MulN, 0,0 ) ) ;
      insertOp ( Operation ( 2, Operation::PopNR,0,0 ) ) ;
      insertOp ( Operation ( 2,  xxx, 0, 0 ) ) ;
    }
  }
  else if ( ltyp->isIntegral() )
  {
    // normal integer op
    /*ResultLocation lloc = */ flatten ( e->arg ( 0 ), Left ) ;
    /* ResultLocation rloc = */ flatten ( e->arg ( 1 ), Right ) ;

    insertOp ( Operation ( sz, xxx ,0,0 ) ) ;
  }
  else if ( ltyp->isFloatingPoint() )
  {
    // FP op
    /*ResultLocation lloc = */ flatten ( e->arg ( 0 ), Left ) ;
    /*ResultLocation rloc = */ flatten ( e->arg ( 1 ), Right ) ;

    insertOp ( Operation ( sz, xxxFP ,0,0 ) ) ;
  }


  if ( loc.isStack()  && pos == Right )
  {
    // move result to REG
    insertOp ( Operation ( sz, Operation::PopNR,0,0 ) ) ;
    loc =  ResultLocation ( ResultLocation::DataReg ) ;
  }
  return loc ;


}

// One of the most complex operator ..

ResultLocation Flatten::flattenIncDec ( Cexpr *e, Position pos )
{
  Cexpr *s0 = e->arg ( 0 ) ;
  int sf = s0->exprType()->scaleFactor() ;
  int sz = e->sizeOf() ;
  int oper =  e->oper()  ;
  Operation::Code opcode = Operation::None ;
  bool prefixed = true ;
  ResultLocation::location  where = ResultLocation::None ;
  int bfsize , bfoffset ;

  // get info about bit field, if any
  s0->exprType()->isBitField ( bfsize,bfoffset ) ;

  // if not dereferencable (scalefactor == 0), set scalefactor to 1  (integer arithmetics)
  if ( sf == 0 ) sf = 1 ;
  // precompute needed operation
  if ( oper == Cexpr::PlusPlusPost || oper == Cexpr::PlusPlusPre )
  {
    if ( sf == 1 )
    {
      opcode =  Operation::IncN ;
    }
    else
      opcode =  Operation::IPAddN ;
  }
  else if ( oper == Cexpr::MinusMinusPost || oper == Cexpr::MinusMinusPre )
  {
    if ( sf == 1 )
    {
      opcode =  Operation::DecN ;
    }
    else
      opcode =  Operation::IPSubN ;
  }

  // prefixed or postfixed ?
  if ( oper == Cexpr::PlusPlusPost || oper == Cexpr::MinusMinusPost )
    prefixed = false ;

  bool ptr = false ;

  if ( s0->isTerminal() )
  {

    if ( pos == Root )
    {
      // just do operation
      if ( sf == 1 )
      {
        insertOp ( Operation ( sz, opcode, s0->getEntity() , 0 ).setBF ( bfsize, bfoffset ) ) ;
      }
      else
      {
        insertOp ( Operation ( 2, opcode, s0->getEntity() , sf ) ) ;
        lastOp().setCstRHS ( sf ) ;
      }
      where = ResultLocation::None ;
    }

    else if ( !prefixed ) // postfixed
    {
      if ( pos == Right )
      {
        // save entity
        insertOp ( Operation ( sz ,  Operation::PushN , s0->getEntity(), 0 ) ) ;

        // do operation
        if ( sf == 1 )
          insertOp ( Operation ( sz, opcode, s0->getEntity(), 0 ).setBF ( bfsize, bfoffset ) ) ;
        else
        {
          // sf >1 => arithmetique 16 bits
          insertOp ( Operation ( 2, opcode, s0->getEntity() , sf ) ) ;
          lastOp().setCstRHS ( sf ) ;
        }

        // move saved to R
        insertOp ( Operation ( sz, Operation::PopNR , 0,0 ) ) ;
        where = ResultLocation::DataReg ;
      }
      else // position left
      {
        // save
        insertOp ( Operation ( sz, Operation::PushN , s0->getEntity(), 0 ) ) ;

        // do operation
        if ( sf == 1 )
        {
          insertOp ( Operation ( sz, opcode, s0->getEntity() ,0 ).setBF ( bfsize, bfoffset ) ) ;
        }
        else
        {
          insertOp ( Operation ( 2 , opcode, s0->getEntity() , sf ) ) ;
          lastOp().setCstRHS ( sf ) ;
        }
        // result is on stack
        where = ResultLocation::Stack ;
      }
    }
    else // prefixed
    {
      // do operation
      if ( sf == 1 )
        insertOp ( Operation ( sz, opcode, s0->getEntity() , 0 ).setBF ( bfsize, bfoffset ) ) ;
      else
      {
        // sf >1 => arithmetique 16 bits
        insertOp ( Operation ( 2 , opcode, s0->getEntity() , sf ) ) ;
        lastOp().setCstRHS ( sf ) ;
        // += and -= always uses Ptr
        ptr = true ;
      }


      // move result to correct location
      if ( pos == Right )
      {
        // move incremented to R
        if ( ptr )
          insertOp ( Operation ( sz,  Operation::PtrIndirectNtoR, 0,0 ) ) ;
        else
          insertOp ( Operation ( sz,  Operation::MovNtoR, s0->getEntity(),0 ) ) ;

        where = ResultLocation::DataReg ;
      }
      else // position left
      {
        // push incremented data to stack
        if ( ptr )
          insertOp ( Operation ( sz , Operation::PushPtrIndirectN ,0 ,0 ) ) ;
        else
          insertOp ( Operation ( sz , Operation::PushN,s0->getEntity(),0 ) ) ;

        where = ResultLocation::Stack ;
      }
    }
  }
  else // pointer indirect TODO : a finir
  {
    flatten ( s0, Left ) ;  // address of operand is now in Ptr1
    if ( pos != Root && !prefixed )
    {
      if ( pos == Right )
        insertOp ( Operation ( sz , Operation::PtrIndirectNtoR ,0,0 ) ) ;
      else
        insertOp ( Operation ( sz ,  Operation::PushPtrIndirectN, 0,0 ) ) ;
    }

    if ( sf == 1 )
    {
      // insertOp( Operation( Operation::PutComment, "indirect incremente", 0) );
      // bug fix: 0,0 changed to 0,1 (03/06/2010)
      // FSR0 was used as index register but FSR1 is needed
      insertOp ( Operation ( sz, opcode, 0,1 /* , 1 */ ).setBF ( bfsize, bfoffset ) ) ;
    }
    else
    {
      // offset > 2
      int offset = ( opcode == Operation::AddN ) ? sf : -sf ;
      insertOp ( Operation ( offset, Operation::AddCst16PtrIndirect, 0, 1 ) ) ;
    }

    if ( pos != Root && prefixed )
    {
      if ( pos == Right )
        insertOp ( Operation ( sz , Operation::PtrIndirectNtoR ,0,0 ) ) ;
      else
        insertOp ( Operation ( sz, Operation::PushPtrIndirectN,0,0 ) ) ;
    }
  }

  return ResultLocation ( where ) ;
}



/**
 Flatten arithmetic in place operators  such as += -= *= .. etc..

 This function provides a general framework, and call a specific
 code generator for each operator.
 It also provides the support for scale factors in expression
 needing it ( pointer += xxx or pointer -= xxx)

 The code generators must obey the following rules:
 Access to data is performed via FSR1, and FSR1 must continue
 to point to this data after the computation.
 (This feature allows to get data back via FSR1 when it is needed
 for the rest of the expression)

 **As an exception** 8 bit computation may not obey this rule.
 (FSR1 not used, or used but corrupted)
 Justification: 8 bit computation are more efficiently compiled
 whithout access from adress register, and data can be fetch back
 very quickly (generally with a sigle instruction), so there
 is no special interest on access thru addr register.

*/

ResultLocation Flatten::flattenInPlaceOperator ( Cexpr *e, Position pos )
{
  // pointer arith needed ?
  int sf =  e->exprType()->scaleFactor() ;
  int sz = e->sizeOf() ;
  int sz1 = e->arg ( 1 )->sizeOf() ;
  ResultLocation loc ( ResultLocation::None ) ;
  int cst = 0 ; // ( int ) Operation::NoCst ;
  bool cstRHS = false ;
  bool is_unsigned = e->exprType()->isUnsigned() ;
  bool is_float = e->exprType()->isFloatingPoint() ;
  int bfoffset, bfsize ;

  if ( sf == 0 ) sf = 1 ;

  e->arg ( 0 )->exprType()->isBitField (bfsize, bfoffset ) ;

  // special case of constant arg : fold scalefactor
  if ( e->arg ( 1 )->isIntegerConstant ( cst ) )
  {
    cst *= sf ;
    cstRHS = true ;
  }
  else
  {
    flatten ( e->arg ( 1 ), Right ) ;

    // scale factor != 1 => sz should be == 2 (ie: sizeof pointer)
    if ( sf == 2 )
    {
      insertOp ( Operation ( Operation::Double16R ) ) ;
    }
    else if ( sf == 4 )
    {
      insertOp ( Operation ( Operation::Quad16R ) ) ;
    }
    else if ( sf > 4 )
    {
      // apply scale factor
      insertOp ( Operation ( sz , Operation::PushN, 0, sf ) ) ;
      insertOp ( Operation ( sz , Operation::MulN, 0, 0 ) ) ;
      insertOp ( Operation ( sz, Operation::PopNR,0,0 ) ) ;
    }
  }

  Centity dst ;

  if ( e->arg ( 0 )->isTerminal() )
  {
    dst = e->arg ( 0 )->getEntity() ;
  }
  else
  {
    // save REG
    if ( ! cstRHS )
      insertOp ( Operation ( sz1 , Operation::PushNR ,0,0 ) ) ;
    // compute dst address
    flatten ( e->arg ( 0 ), Right ) ; // dest addr is now in Ptr
    // restore REG
    if ( !cstRHS )
      insertOp ( Operation ( sz1,Operation::PopNR,0,0 ) ) ;
    dst = 0 ;
  }

  Operation::Code opcode = Operation::None ;

  switch ( e->oper() )
  {
      // integer arithmetics
    case Cexpr::PlusAff:
      opcode = is_float ? Operation::IPAddF : Operation::IPAddN ;
      break ;
    case Cexpr::MinusAff:
      opcode = is_float ? Operation::IPSubF : Operation::IPSubN ;
      break ;
    case Cexpr::MulAff:
      opcode = is_float ? Operation::IPMulF : Operation::IPMulN ;
      break ;
    case Cexpr::DivAff:
      if ( is_float ) opcode = Operation::IPDivF;
      else opcode = is_unsigned ?  Operation::IPDivNU :  Operation::IPDivN ;
      break ;
    case Cexpr::ModAff:
      opcode = is_unsigned ?  Operation::IPModNU :  Operation::IPModN ;
      break ;

      // shifts
    case Cexpr::LShiftAff:
      opcode =  Operation::IPLShiftNU ;
      break ;
    case Cexpr::RShiftAff:
      opcode =  is_unsigned ?  Operation::IPRShiftNU :  Operation::IPRShiftN ;
      break ;

      // binary and
    case Cexpr::BAndAff:
      opcode = Operation::IPBAndN  ;
      break;
      // binary or
    case Cexpr::BOrAff:
      opcode = Operation::IPBOrN  ;
      break;

      // binary xor
    case Cexpr::BXorAff:
      opcode = Operation::IPBXorN  ;
      break;
  }

  if ( opcode != Operation::None )
  {
    Operation op ( sz ,  opcode , dst,cst );
    op.setBF (  bfsize, bfoffset ) ;
    if ( cstRHS ) op.setCstRHS ( cst ) ;
    insertOp ( op ) ;
  }


  if ( pos == Left )
  {
    // move result to STACK

    if ( dst && sz == 1 )
    {
      // only 8 bit ops could have been inlined
      // so it is secure to fetch data thru FSR1 in other cases
      insertOp ( Operation ( sz ,Operation::PushN, dst ,0 ) ) ;
    }
    else
      insertOp ( Operation ( sz ,Operation::PushPtrIndirectN, 0, 0 ) );

    if ( bfsize ) // if bit field, expand the result
    {
      insertOp ( Operation ( 1 , is_unsigned ? Operation::UpackU : Operation::Upack, 0 ,0 )
			.setBF ( bfsize,bfoffset ) ) ;
    }

    loc =  ResultLocation ( ResultLocation::Stack ) ;
  }
  else if ( pos == Right )
  {
    // move result to REG

    if ( dst && sz == 1 )
      insertOp ( Operation ( sz , Operation::MovNtoR ,dst,0 ) ) ;
    else
      insertOp ( Operation ( sz , Operation::PtrIndirectNtoR,0,0 ) ) ;

    if ( bfsize ) // if bit field, expand the result
    {
      insertOp ( Operation ( 1 , is_unsigned ? Operation::UpackUW : Operation::UpackW, 0 ,0 )
			.setBF ( bfsize,bfoffset ) ) ;
    }


    loc =  ResultLocation ( ResultLocation::DataReg ) ;
  }
  // else
  // no result needed


  return loc ;
}


/** Clear operation table */
void Flatten::clear()
{
  ops().clear() ;
}
/** No descriptions */
void Flatten::putComment ( const string &c )
{
  insertOp ( Operation ( Operation::PutComment, c ) ) ;
}

/* returns only comments */
Flatten Flatten::getComments()
{
  Flatten comments;
  list<Operation>::iterator i;

  for ( i=_ops.begin(); i!=_ops.end(); ++i )
  {
    if ( ( *i )._code == Operation::PutComment )
    {
      comments.insertOp ( *i );
    }
  }
  return comments;
}

/**
Search the next "active" operation from "from", and returns it in "to".
Return true if succes.

An active operation is everything except comment.
*/
bool Flatten::nextO ( list<Operation>::iterator& from,
                      list<Operation>::iterator& to,
                      list<Operation>::iterator& max )
{
  for ( to = from , ++to; to != max  && ! ( *to ).isActive() ; ++to )  ;

  return to != max ;
}
/** Flattener table concatenation. */
Flatten& Flatten::operator+= ( const Flatten& f )
{
  _ops.insert ( _ops.end(), f._ops.begin(), f._ops.end() )  ;
  return *this ;
}
/** No descriptions CLEAN */
ResultLocation Flatten::flattenFunctionCall ( Cexpr * exp, Position pos )
{
  int bytes ,i ;
  int nparam = exp->args().size() - 1;
  int sz = exp->sizeOf() ;
  ResultLocation r ( ResultLocation::DataReg ) ;

  for ( i = nparam, bytes = 0  ; i > 0 ; --i )
  {
    r = flatten ( exp->arg ( i ), Left )  ;
    if ( r.isPtr() )
      insertOp ( Operation ( Operation::PushPtr ,0,0,1 ) ) ;

    if ( exp->arg ( i )->exprType()->isDereferencable() )
      bytes += 2 ;
    else
      bytes +=   exp->arg ( i )->sizeOf() ;
  }
// Incompatible
  if ( exp->arg ( 0 )->isTerminal() )
  {
    Centity func =  exp->arg ( 0 )->getEntity() ;

    if ( func->isFct() )
    {
      insertOp ( Operation ( Operation::CallFunction,func, 0, bytes ) ) ;
    }
    else // pointer to function
    {
      // push pointer value to stack
      insertOp ( Operation ( 2, Operation::PushN,func,0 ) ) ;
      insertOp ( Operation ( Operation::CallTos,0, 0, bytes ) ) ;
    }
  }
  else
  {
    // this is a pointer expression,
    flatten ( exp->arg ( 0 ), Left ) ;
    // addr is on stack,
    insertOp ( Operation ( Operation::CallTos,0, 0, bytes ) ) ;
  }

  r = ResultLocation ( ResultLocation::DataReg ) ;
  if ( pos == Left )
  {
    // push result
    insertOp ( sz == 1 ? Operation ( Operation::Push8RL ) : Operation ( sz, Operation::PushNR,0,0 ) ) ;
    r =  ResultLocation ( ResultLocation::Stack )  ;
  }
  else if ( pos == Right && sz == 1 )
  {
    // result is in _r0L, transfer it to W - for other sizes, data is already at the good place
    insertOp ( Operation ( Operation::Mov8RLtoR ) ) ;
  }
  //else, it is a Root expression, and result in _r0 can be ignored

  return  r ;
}
/** Special processing of sequence (,) operator */
ResultLocation Flatten::flattenSeq ( Cexpr * exp, Position pos )
{
  // may also be done automatically by flatten()
  // TODO: in that case, observe  the impact on peephole optimizer
  insertOp ( Operation ( Operation::PushStack ) ) ;
  flatten ( exp->arg ( 0 ),   Root ) ;

  return flatten ( exp->arg ( 1 ), pos );
}

/** Flatten && operator */
ResultLocation Flatten::flattenLAnd ( Cexpr * exp, Position pos )
{
  int sz ;
  string exitlabel = c18.uniqueLabel() ;
  ResultLocation r ( ResultLocation::Stack ) ;

  insertOp ( Operation ( 1, Operation::PushN,0,0 ) ) ; // precompute zero result

  flatten ( exp->arg ( 0 ), Left ) ;   // compute left arg
  sz = exp->arg ( 0 )->sizeOf() ;
  insertOp ( Operation ( sz, Operation::PopTestN,0,0 ) ) ;
  insertOp ( Operation ( Operation::GotoLabelIf,exitlabel,0 ) ) ; // jump label if 0

  flatten ( exp->arg ( 1 ), Left ) ;   // compute right arg
  sz = exp->arg ( 1 )->sizeOf() ;
  insertOp ( Operation ( sz , Operation::PopTestN,0,0 ) ) ;
  insertOp ( Operation ( Operation::GotoLabelIf,exitlabel,0 ) ) ; // jump label if 0

  insertOp ( Operation ( Operation::Inc8TOS ) ) ; // make true from false
  insertOp ( Operation ( Operation::PutLabel,exitlabel ) ) ; // branch here if false

  if ( pos ==  Right )
  {
    insertOp ( Operation ( 1, Operation::PopNR,0,0 ) ) ;
    r =  ResultLocation ( ResultLocation::DataReg ) ;
  }

  return r ;

}
/** No descriptions */
ResultLocation Flatten::flattenLOr ( Cexpr * exp, Position pos )
{
  int sz ;
  string exitlabel = c18.uniqueLabel() ;
  ResultLocation r ( ResultLocation::Stack ) ;

  insertOp ( Operation ( 1, Operation::PushN,0,1 ) ) ; // precompute 1 result

  flatten ( exp->arg ( 0 ), Left ) ;   // compute left arg
  sz = exp->arg ( 0 )->sizeOf() ;
  insertOp ( Operation ( sz , Operation::PopTestN,0,0 ) ) ;
  insertOp ( Operation ( Operation::GotoLabelIf,exitlabel,1 ) ) ; // jump label if true

  flatten ( exp->arg ( 1 ), Left ) ;   // compute right arg
  sz = exp->arg ( 1 )->sizeOf() ;
  insertOp ( Operation ( sz, Operation::PopTestN,0,0 ) ) ;
  insertOp ( Operation ( Operation::GotoLabelIf,exitlabel,1 ) ) ; // jump label if 0

  insertOp ( Operation ( Operation::Dec8TOS ) ) ; // make true from false
  insertOp ( Operation ( Operation::PutLabel,exitlabel ) ) ; // branch here if false

  if ( pos ==  Right )
  {
    insertOp ( Operation ( 1, Operation::PopNR,0,0 ) ) ;
    r =  ResultLocation ( ResultLocation::DataReg ) ;
  }

  return r ;
}
/** Shifts are good candidates for optimizations,
    because 2nd arg is often constant
 */
ResultLocation Flatten::flattenShifts ( Cexpr * exp, Position pos )
{
  int k ,sz ;
  bool cst1 ;
  /* ResultLocation r0 = */ flatten ( exp->arg ( 0 ), Left ) ;
  // ResultLocation r1 = flatten(exp->arg(1), Right) ;
  ResultLocation r ( ResultLocation::Stack ) ;

  cst1 = exp->arg ( 1 )->isIntegerConstant ( k ) ;
  sz =  exp->arg ( 0 )->sizeOf() ;
  bool isSigned =  exp->arg ( 0 )->isSigned() ;

  if ( cst1 && k == 0 )
  {
    // no shift to do
  }
  // only 8 bit shifts are inlined
  else if ( cst1 && sz == 1 )
  {
    if ( exp->oper() ==   Cexpr::LShift )
    {
      insertOp ( Operation ( sz , Operation::LShiftNU,0,k ) ) ;
    }
    else if ( exp->oper() ==   Cexpr::RShift )
    {
      if ( isSigned )
        insertOp ( Operation ( sz, Operation::RShiftN,0,k ) ) ;
      else
        insertOp ( Operation ( sz, Operation::RShiftNU,0,k ) ) ;
    }
  }
  // 16bit shift by byte swapping or clearing
  else if ( cst1 && sz == 2 && ( k == 8 || k >= 16 ) )
  {
    if ( exp->oper() ==   Cexpr::LShift )
    {
      insertOp ( Operation ( sz , Operation::LShiftN8U,0,k ) ) ;
    }
    else if ( exp->oper() ==   Cexpr::RShift )
    {
      if ( isSigned )
        insertOp ( Operation ( sz, Operation::RShiftN8,0,k ) ) ;
      else
        insertOp ( Operation ( sz, Operation::RShiftN8U,0,k ) ) ;
    }
  }
  // 32bit shift by byte swapping or clearing (only unsigned)
  else if ( cst1 && sz == 4 && ( k%8 == 0 || k >= 32 ) && ( !isSigned || exp->oper() ==   Cexpr::LShift ) )
  {
    if ( exp->oper() ==   Cexpr::LShift )
    {
      insertOp ( Operation ( sz , Operation::LShiftN8U,0,k ) ) ;
    }
    else if ( exp->oper() ==   Cexpr::RShift )
    {
//      if ( isSigned )
//        insertOp ( Operation ( sz, Operation::RShiftN8,0,k ) ) ;
//      else
      insertOp ( Operation ( sz, Operation::RShiftN8U,0,k ) ) ;
    }
  }
  else
  {
    flatten ( exp->arg ( 1 ), Right ) ;
    // call run time library
    if ( exp->oper() ==   Cexpr::LShift )
    {
      insertOp ( Operation ( sz,  Operation::LShiftNU, 0, 0 ) ) ;
    }
    else if ( exp->oper() ==   Cexpr::RShift )
    {
      if ( exp->arg ( 0 )->isSigned() )
        insertOp ( Operation ( sz , Operation::RShiftN,0,0 ) ) ;
      else
        insertOp ( Operation ( sz, Operation::RShiftNU,0,0 ) ) ;
    }
  }

  if ( pos ==  Right )
  {
    insertOp ( Operation ( sz,  Operation::PopNR, 0, 0 ) ) ;

    r =  ResultLocation ( ResultLocation::DataReg ) ;
  }

  return r ;


}

/** No descriptions */
ResultLocation Flatten::flattenBitOp ( Cexpr * exp, Position pos,
                                       Operation::Code op )
{
  int k=0 ,sz ;
  bool cst1 ;
  ResultLocation r ( ResultLocation::Stack ) ;

  flatten ( exp->arg ( 0 ), Left ) ;

  cst1 = exp->arg ( 1 )->isIntegerConstant ( k ) ;
  sz =  exp->arg ( 0 )->sizeOf() ;


  if ( cst1 == false )
  {
    flatten ( exp->arg ( 1 ), Right ) ;
  }

  Operation operation ( sz , op ,0,k ) ;
  if ( cst1 )  operation.setCstRHS ( k ) ;

  insertOp ( operation ) ;

  if ( pos ==  Right )
  {
    insertOp ( Operation ( sz,  Operation::PopNR,0,0 ) ) ;

    r =  ResultLocation ( ResultLocation::DataReg ) ;
  }

  return r ;
}

/** Flatten ? :  operator */
ResultLocation Flatten::flattenCondOp ( Cexpr * exp, Position pos )
{
  int sz ;
  string exitlabel = c18.uniqueLabel() ;
  string falselabel = c18.uniqueLabel() ;
  ResultLocation r ( ResultLocation::Stack ) ;

  flatten ( exp->arg ( 0 ), Left ) ;   // compute condition
  sz = exp->arg ( 0 )->sizeOf() ;
  insertOp ( Operation ( sz, Operation::PopTestN,0,0 ) ) ;  // pop condition
  insertOp ( Operation ( Operation::GotoLabelIf,falselabel,0 ) ) ; // jump label if false

  r = flatten ( exp->arg ( 1 ), pos ) ;   // compute true result
  sz = exp->arg ( 1 )->sizeOf() ;
  insertOp ( Operation ( Operation::GotoLabel,exitlabel ) ) ; // jump to end of computation
  // because the stack tracking is fooled by branch inside an instruction
  // I must correct the stack tracking variable
  if ( pos == Left ) insertOp ( Operation ( Operation::TouchStack, 0,0, -exp->arg ( 1 )->sizeOf() ) ) ;

  insertOp ( Operation ( Operation::PutLabel,falselabel ) ) ;
  r = flatten ( exp->arg ( 2 ), pos ) ;   // compute false result

  insertOp ( Operation ( Operation::PutLabel,exitlabel ) ) ;

  return r ;

}
/** Optimization of in-place 8 bit operations */
/*
int Flatten::tryOptimize8( list<Operation>::iterator& i1 ,
            list<Operation>::iterator& i2,
            list<Operation>::iterator& i3 )
{
  int status = 1 ;
  // typically : *i1 and *i3 are push8 and pop8 with same targets
  if( ((*i2)._code == Operation::BAnd8) && ((*i2)._val != (int)Operation::NoCst) &&
                            (!(*i1)._e1->isLocal()) )
  {  // AND with constant
    (*i1)._code = Operation::IPBAnd8  ;
    (*i1)._val   =  (*i2)._val ;
    ops().erase(i2) ; ops().erase(i3) ;
  }
  else
    status = 0 ;

  return status ;
}
*/


/*!
    \fn Flatten::flattenFPComparison(Cexpr *e)
    Dedicated to comparisons of FP numbers
    No special effort is made to optimize the code because
    FP comparisons are never very simple, so the cost of RTL routine call
    is not very significant from a time point of view, and saves a lot of bytes
 */
ResultLocation Flatten::flattenFPComparisons ( Cexpr *e )
{
  flatten ( e->arg ( 0 ), Left ) ;
  flatten ( e->arg ( 1 ), Right ) ;

  int opcode ;
  int sz = 4 ;
  // opcode is directly derivated from e->oper(), but
  // might be different in the future to take into account
  // special situations
  switch ( e->oper() )
  {
    case  Cexpr::Eq:
    default:
      opcode = Operation::Eq ; break ;

    case  Cexpr::NE:
      opcode = Operation::Ne ; break ;

    case  Cexpr::GE:
      opcode = Operation::Ge ; break ;

    case  Cexpr::LE:
      opcode = Operation::Le ; break ;

    case  Cexpr::Gt:
      opcode = Operation::Gt ; break ;

    case  Cexpr::Lt:
      opcode = Operation::Lt ; break ;

  }
  insertOp ( Operation ( sz , Operation::CompareF, 0, opcode ) ) ;

  return ResultLocation ( ResultLocation::Stack ) ; // always leaves a byte on the stack
}
