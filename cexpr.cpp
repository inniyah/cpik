/***************************************************************************
                          cexpr.cpp  -  description
                             -------------------
    begin                : Sun Nov 28 2004
    copyright            : (C) 2004 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/

#include "cexpr.h"
#include "utility.h"
#include "compiler.h"
#include "Numeric.h"

extern Compiler c18 ;

#include <algorithm>
#include <sstream>

using namespace std ;

Cexpr::Cexpr() :  ent_ ( 0 ), expr_type_(), argN_(),  oper_ ( Cexpr::Terminal )
{}

void Cexpr::renew()
{
  ent_.detach()  ;
  expr_type_ = Ctype() ;
  for ( int i = 0 ; i < ( int ) argN_.size() ; ++i )
  {
    delete argN_[i] ;
  }
  argN_.clear() ;
  oper_ = 0 ;
  member_name_ = "" ;
}

Cexpr *Cexpr::newCexpr()
{
  return new Cexpr ;
}

Cexpr *Cexpr::newCexpr ( int op, Cexpr *left, Cexpr *right )
{
  Cexpr *c = new Cexpr ;
  c->oper_ = op ;
  c->argN_.push_back ( left ) ;
  c->argN_.push_back ( right ) ;
  return c ;
}
/** No descriptions */
Cexpr * Cexpr::newCexpr ( int op, Cexpr *operand )
{
  Cexpr *c = new Cexpr ;
  c->oper_ = op ;
  c->argN_.push_back ( operand ) ;
  return c ;
}
/** No descriptions */
Cexpr * Cexpr::newCexpr ( int op, Cexpr *operand, string& member )
{
  Cexpr *c = new Cexpr ;
  c->oper_ = op ;
  c->argN_.push_back ( operand ) ;
  c->member_name_ = member ;
  return c ;
}
/** No descriptions */
Cexpr * Cexpr::newCexpr ( int op, Cexpr *lhs, vector<Cexpr *>&  a )
{
  Cexpr *c = new Cexpr  ;
  c->oper_ = op ;
  c->argN_.push_back ( lhs ) ;
  for ( vector<Cexpr *>::iterator i = a.begin() ; i != a.end() ; ++i )
    c->argN_.push_back ( *i ) ;
  return c ;
}

Cexpr::~Cexpr()
{
//    if( ent_ && ent_->name() == "")
//    { // anonymous entities are supposed  to be temporary : can delete
//        delete ent_ ;
//    }
  for ( int i = 0 ; i < ( int ) argN_.size() ; ++i )
  {
    delete argN_[i] ;
  }
}
/** Return an entity adress if expression is a terminal node, 0 otherwise. */
Centity  Cexpr::getEntity()
{
  return oper_ == Terminal ? ent_ : Centity() ;
}
/** */
void Cexpr::setEntity ( Centity e )
{
  ent_ = e ;
  oper_ = Terminal ;
}

/** No descriptions      */
std::string Cexpr::prettyPrint ( int opt )
{
  string s ;
  if ( oper_ == Terminal )
  {
    if ( getEntity()->isConstant() )
    {
      s += utility::toString ( ent_->value(), ent_->thetype() ) ;
    }
    else if ( getEntity()->isLitteral() )
      s = '"' + ent_->name() + '"';
    else
      s = ent_->name() ;
  }
  else
  {
    s = "["+opName()  ;
    if ( opName() == "." || opName() == "->" || opName() == "Z->" || opName() == "Z." )
    {
      // display member name
      s += memberName() ;
    }
    if ( opt == 1 )  // print  node type
    {
      s += "<" ;
      s += exprType() ? exprType()->prettyPrint ( "","" ) : "?" ;
      s += ">" ;
    }
    for ( unsigned int i = 0 ;  i <  argN_.size() ; ++i )
    {
      s += " " ;  s += argN_[i]->prettyPrint ( opt ) ;
    }
    if ( oper_ == Cast )
    {
//            s += " to (" ;
//            s += exprType()->prettyPrint("","") ;
//            s += ')' ;
    }
    s += "]" ;
  }
  return s ;
}

/*
enum Code
{
    Terminal ,
    Fct, Array, Arrow, Dot,
    LNot, BNot, PlusPlusPre, MinusMinusPre, PlusPlusPost, MinusMinusPost, UPlus, UMinus, UStar, UAddr, Cast, Sizeof,
    Mul , Div, Mod,
    Plus, Minus,
    LShift, RShift,
    Lt, LE, Gt, GE,
    Eq, NE,
    BAnd,
    BXor,
    BOr,
    LAnd,LOr,
    CondOp,
    Aff, PlusAff, MinusAff, MulAff, DivAff, ModAff, BAndAff, BXorAff, BOrAff, LShiftAff, RShiftAff,
    Seq ,
    Zu*,
    Keep,
    Test
    Z->
    @
    @=
    Init
} ;
*/

std::string Cexpr::opName()
{
  static const char *names[] =
  {
    "TERMINAL" , "FUNC" , "SUBSCR" , "->",  ".",
    "!" , "~" , "PRE++" , "PRE--" ,"POST++" , "POST--" , "U+" , "U-" , "U*" , "U&" , "CAST" , "SIZEOF" ,
    "*", "/", "%" ,
    "+", "-" ,
    "<<" , ">>" ,
    "<" ,"<=" , ">" , ">=" ,
    "==" , "!=" ,
    "&",
    "^",
    "|",
    "&&", "||",
    "?:",
    "=","+=","-=","*=","/=","%=","&=","^=","|=","<<=",">>=",
    ",",
    // from here are pseudo C operators
    "ZU*", // unary * for an Lvalue
    "Keep",
    "Test",
    "Z->",
    "@", // unpack bit-field to int8
    "@=", // affectation to bit-field
    "AffInit", // initialization
  } ;

  return ( oper_ >= 0 && oper_< ( int ) ( sizeof ( names ) /sizeof ( *names ) ) ) ? names[oper_] : "Unknown op." ;
}
/** No descriptions */
std::vector<Cexpr *>& Cexpr::args()
{
  return argN_ ;
}
/** No descriptions */
int& Cexpr::oper()
{
  return oper_ ;
}
/** No descriptions */
int Cexpr::simplify()
{
  int f,r,a,u ;

  f = constantFolding() ;
  r = removeNops() ;
  a = rearrange() ;
  u = unoptimize() ;
  return f+r+a+u;
}

/** Apply cast to constants
 */
int Cexpr::constantFolding()
{
  int count = 0 ;

  if ( oper() == Terminal )  ; // nothing to fold
  else if ( isMonadic() )
    count = monadicConstantFolding() ;
  else if ( isDyadic() )
    count = dyadicConstantFolding() ;
  else
    count = multiadicConstantFolding() ;

  return count ;
}

int Cexpr::multiadicConstantFolding()
{
  int count = 0 ;

  // fold function parameters and ?= operands
  for ( unsigned int i = 0 ; i < args().size() ; ++i )
    count += arg ( i )->constantFolding() ;

  // now, fold ?= itself, if arg0 is constant
  // folding may generate a constant, or not
  if ( oper() == CondOp && arg ( 0 )->isTerminal() )
  {
    Centity a0 =  arg ( 0 )->getEntity() ;

    if ( a0->isConstant() )
    {
      if ( a0->value() )
      {
        // result is arg(1)
        disconnect() ;
        delete arg ( 0 ) ;
        delete arg ( 2 ) ;
        *this = *arg ( 1 )  ;
      }
      else
      {
        // result is arg(2)
        disconnect() ;
        delete arg ( 0 ) ;
        delete arg ( 1 ) ;
        *this = *arg ( 2 )  ;
      }
      ++count ;
    }

  }

  return count ;
}

int Cexpr::dyadicConstantFolding()
{
  int count = 0 ;

  Cexpr       *subnode0 =  arg ( 0 ),
                           *subnode1 =  arg ( 1 );

  count += subnode0->constantFolding() ;
  count += subnode1->constantFolding() ;

  if ( subnode0->oper() != Terminal ) return count ;
  if ( subnode1->oper() != Terminal ) return count ;
  Centity cst0 =  subnode0->getEntity() ;
  if ( cst0->storage() != entity::Constant ) return count ;
  Centity cst1 =  subnode1->getEntity() ;
  if ( cst1->storage() != entity::Constant ) return count ;
  Centity res ( "",entity::Constant ) ;
  res->thetype() = exprType() ;
  int oldcount = count ;

  Numeric n0 ( cst0 ) , n1 ( cst1 ), r  ;

  // Constant folding is only performed on integral types.
  if ( exprType()->isNumeric() )
  {
    switch ( oper() )
    {
      case Mul:
        res->value() = ( n0*n1 ).value() ; ++count ;
        break ;
      case Div:
        res->value() = ( n0/n1 ).value() ; ++count ;
        break ;
      case Mod:
        if ( r=n0%n1 )
          res->value() = r.value() , ++count ;
        break ;
      case Plus:
        res->value() = ( n0+n1 ).value() ; ++count ;
        break ;
      case Minus:
        res->value() = ( n0-n1 ).value() ; ++count ;
        break ;

      case LShift:
        if ( r = n0<<n1 ) res->value() = r.value() , ++count ;
        break ;
      case RShift:
        if ( r = n0>>n1 ) res->value() = r.value() , ++count ;
        break ;

      case Lt:
        res->value() = ( n0<n1 ).value() ; ++count ;
        break ;
      case LE:
        res->value() = ( n0<=n1 ).value() ; ++count ;
        break ;
      case Gt:
        res->value() = ( n0>n1 ).value() ; ++count ;
        break ;
      case GE:
        res->value() = ( n0>=n1 ).value() ; ++count ;
        break ;
      case Eq:
        res->value() = ( n0==n1 ).value() ; ++count ;
        break ;
      case NE:
        res->value() = ( n0!=n1 ).value() ; ++count ;
        break ;

      case BAnd:
        if ( r = n0 & n1 ) res->value() = r.value() , ++count ;
        break ;
      case BXor:
        if ( r = n0 ^ n1 ) res->value() = r.value() , ++count ;
        break ;
      case BOr:
        if ( r = n0 | n1 ) res->value() = r.value() , ++count ;
        break ;

      case LAnd:
        if ( r = n0 && n1 ) res->value() = r.value() , ++count ;
        break ;
      case LOr:
        if ( r = n0 || n1 ) res->value() = r.value() , ++count ;
        break ;
      case Seq:
        res->value() =  cst1->value() ; ++count ;
        break ;
    }
  }
  else
    return count ;

  if ( count != oldcount )
  {
    disconnect() ;
    delete subnode0 ;
    delete subnode1 ;
    setEntity ( res ) ;
  }

  return count ;
}

int Cexpr::monadicConstantFolding()
{
  int count = 0 ;

  Cexpr *subnode =  arg ( 0 ) ;
  count += subnode->constantFolding() ;

  // special case of sizeof :
  // subexpression does not have to be a constant
  if ( oper() == Sizeof )
  {
    Ctype t = subnode->exprType() ;
    int size = t->nBits() / 8 ;
    disconnect() ;
    delete subnode ;
    // change the current node to Terminal, type unsigned long, value val
    setEntity ( Centity ( "",entity::Constant ) ) ;
    getEntity()->value() = size ;
    exprType() = getEntity()->thetype() = Ctype ( type::ULong ) ;
    return ++count ;
  }



  if ( subnode->oper() != Terminal ) return count ;

  Centity cst =  subnode->getEntity() ;
  if ( cst->storage() != entity::Constant ) return count ;

  int oldcount = count ;

  Numeric N ( cst ), r ;

  switch ( oper() )
  {
    case LNot:
      cst->value() = ( !N ).value()  ; ++count ;
      break ;

    case BNot:
      if ( r = ~N ) cst->value() = r.value(), ++count ;
      break ;

    case UPlus:
      /* this is a nop -> will be removed */  ; ++count ;
      break ;

    case UMinus:
      if ( r = -N ) cst->value() = r.value(), ++count ;
      break ;

    case Cast:
    {
      // set the proper type
      cst->thetype() = exprType() ;
      Numeric N1 ( cst ) ;
      // cast value from the old type to the new one
      N.castTo ( N1 ) ;
      cst->value() = N1.value() ;
      ++count ;
    }
    break ;

    case Dot:
    case Arrow:
      break ;

  }
  if ( count != oldcount )
  {
    disconnect() ;
    subnode->disconnect() ;
    setEntity ( cst ) ;
    delete subnode ;
  }
  return count ;
}


/** Disconnect sub-expression and referenced entity
    (ie: set pointer to 0)
    Type of node is NOT deallocated
*/
void Cexpr::disconnect()
{
  argN_.clear() ;
  ent_ = 0 ;
}

/** No descriptions */
int Cexpr::resultSize()
{
  int nbits = 0;
  if ( propagateTypes() )
  {
    nbits = exprType() ->nBits() / 8 ;
  }
  return nbits  ;
}
/** propagate types of children to current node
  Return an error message if types cannot be inferred.

  Node types are :

        Terminal ,
        Fct, Array, Arrow, Dot,
        LNot, BNot, PlusPlusPre, MinusMinusPre, PlusPlusPost, MinusMinusPost,
                        UPlus, UMinus, UStar, UAddr, Cast, Sizeof,
        Mul , Div, Mod,
        Plus, Minus,
        LShift, RShift,
        Lt, LE, Gt, GE,
        Eq, NE,
        BAnd,
        BXor,
        BOr,
        LAnd,LOr,
        CondOp,
        Aff, PlusAff, MinusAff, MulAff, DivAff, ModAff, BAndAff, BXorAff, BOrAff, LShiftAff, RShiftAff,
        Seq
*/
const char * Cexpr::propagateTypes()
{
  Ctype s0,s1,s2,t ;
  const char *err = 0 ;
  string serr, structure_name ;
  StructMember *m ;

  if ( oper() ==  Terminal ) // terminal node, get the type of entity
  {
    exprType() = getEntity()->thetype() ;
    return 0 ;
  }

  // compute subexpressions's types
  for ( int i = 0 ; i < ( int ) args().size() ; ++i )
    if ( ( err = arg ( i )->propagateTypes() ) ) return err  ;

  s0 =  arg ( 0 )-> exprType();
  // caution :  Fct is neither monadic nor dyadic
  if ( isDyadic() ) s1 =  arg ( 1 )-> exprType() ;


  switch ( oper() )
  {
    case Fct:
      if ( s0->isCallable() ) // fct and ptr to function are callable
      {
        t = s0->subtype() ;
        if ( s0->isPointer() ) t = t->subtype() ;
        exprType() =  t ;
      }
      else return "Called object is not a function.";
      break ;

    case Array:
    case UStar:
    case ZUStar:
      if ( s0->isDereferencable() )
      {
        exprType() =  s0->subtype() ;
      }
      else  return "Subscripted value is neither array nor pointer."  ;
      break ;

    case LNot:
      /* the ! operator is allowed for pointers , ints and FP (yes !! )
         the result is a boolean (ie: int)
      */
      if ( s0->isNumeric()  ||  s0->isPointer() )
        exprType() = Ctype ( type::Int ) ;
      else return "Invalid type argument to !."  ;
      break ;

    case BNot:
      /* the ~ operator is allowed for ints */
      if ( s0->isIntegral() )
        exprType() = s0 ; // no type change
      else return "Invalid type argument to ~."  ;
      break ;

    case UPlus:
    case UMinus:
      if ( s0->isNumeric() )
        exprType() = s0 ; // no type change
      else return "Invalid type argument to unary - or unary +."  ;
      break ;

    case PlusPlusPre:
    case MinusMinusPre:
    case PlusPlusPost:
    case MinusMinusPost:
      if ( s0->constness()) return "Modifying the constant.";
      if ( s0->isIntegral() || s0->isPointer( ) ) exprType() = s0 ;
      else return "Invalid argument to ++ or --" ;
      break ;

    case UAddr: // make a "pointer to s0 type"
      exprType() = Ctype ( type::Ptr ) ;
      exprType() ->subtype() = s0 ;
      break ;

    case Cast: // a cast expression has its own type !!
      // TODO add check for casting from const to non const
      break ;

    case Sizeof: // must always have type ULong
      exprType() = Ctype ( type::ULong ) ;
      break ;

    case Dot:
      if ( !s0->isStruct() && !s0->isUnion() )
      {
        serr= "Request for member '"+memberName() +"' in something not a structure or union." ;
        return utility::setMessage ( serr ) ;
      }
      structure_name = s0->structName() ;

      // verify if member is OK
      m = s0->getMember ( memberName() ) ;
      if ( m == 0 )
      {
        serr =  "Struct '"+structure_name+"' has no member named '"+memberName() +"'."  ;
        return utility::setMessage ( serr ) ;
      }
      exprType() = m->mtype() ;

      break ;

      // --------------- end of unary operators ---------
    case Mul:
    case Div:
      t = numericResult ( s0,s1 ) ;
      if ( t == 0 ) return "Invalid argument to * or  /" ;
      exprType() = t ;
      break ;

    case Mod:
    case BAnd:
    case BXor:
    case BOr:
      t = integralResult ( s0,s1 ) ;
      if ( t == 0 ) return "Invalid argument to %, &, | or ^" ;
      exprType() = t ;
      break ;

    case Plus:
      t = numericResult ( s0,s1 ) ;
      if ( t )
        exprType() = t ;
      else // pointer arithmetic ?
      {
        if ( s0->isPointer() && s1->isIntegral() )
          exprType() = s0 ;
        else if ( s0->isIntegral() && s1->isPointer() )
          exprType() = s1 ;
        else if ( s0->isArray() && s1->isIntegral() )
        {
          exprType() = Ctype ( type::Ptr ) ;
          exprType() ->subtype() = s0->subtype() ;
        }
        else if ( s1->isArray() && s0->isIntegral() )
        {
          exprType() = Ctype ( type::Ptr ) ;
          exprType() ->subtype() = s1->subtype() ;
        }
        else
          return "Invalid argument to +" ;
      }
      break ;


    case Minus:
      t = numericResult ( s0,s1 ) ;
      if ( t ) exprType() = t ;
      else // pointer arithmetic ?
      {
        if ( s0->isPointer() && s1->isIntegral() )
          exprType() = s0 ;
        else if ( s0->isArray() && s1->isIntegral() )
        {
          exprType() = Ctype ( type::Ptr ) ;
          exprType() ->subtype() = s0->subtype() ;
        }
        else if ( s0->isDereferencable()  && s1->isDereferencable() && ( s0==s1 ) )
        {
          exprType() = Ctype ( type::ULong ) ;  // result have type size_t
        }
        else
          return "Invalid argument to -" ;
      }
      break ;

    case LShift:
    case RShift:
      // ops must be integral,
      if ( s0->isIntegral() && s1->isIntegral() )
      {
        exprType() = s0 ;
      }
      else
        return "Invalid argument to << or >>" ;
      break ;

    case Lt:
    case LE:
    case Gt:
    case GE:
    case Eq:
    case NE:
      // ops must be both integral or pointer/array
      if ( s0->isNumeric() && s1->isNumeric() )
      {
        exprType() = Ctype ( type::Int ) ;
        if ( ( s0->isSigned() !=  s1->isSigned() ) && ( oper() != Eq ) && ( oper() != NE ) )
          return "Comparison of signed and unsigned expressions" ;
      }
      else if ( s0->isDereferencable() && s1->isDereferencable() )
      {
        /* pointers must be of same types, or void * */
        if ( ( s1->subtype() == s0->subtype() )
             || s0->subtype()->isVoid()
             || s1->subtype()->isVoid() )
          exprType() = Ctype ( type::Int ) ;
        else
          return "Comparison of distinct pointer types lacks a cast" ;
      }
      else
        return "Invalid argument to <, >, <=, >=, == or !=" ;
      break ;

    case LAnd:
    case LOr:
      if ( s0->isBool()  && s1->isBool() )
      {
        exprType() = Ctype ( type::Int ) ;
      }
      else
        return "Invalid argument to && or ||" ;
      break ;

    case CondOp:
      // Special : 3 operands
      // op1 must be pointer or integral
      if ( args().size() != 3 ) return "Missing argument to ?:" ;
      if ( !s0->isBool() ) return "1st argument of ?: must be evaluable as bool." ;
      s1 =  arg ( 1 )-> exprType() ;
      s2 =  arg ( 2 )-> exprType() ;

      t = condOpResult ( s1,s2 ) ;
      if ( t )
      {
        exprType() = t ;
      }
      else
      {
        ostringstream  mess ;
        mess <<  "Type mismatch in conditionnal expression."  << endl <<
        "<"  << s1->prettyPrint ( "arg2","" )  << "> doesn't match <" << s2->prettyPrint ( "arg3","" ) <<
        ">" << endl ;
        return utility::setMessage ( mess.str() )  ;
      }
      break ;

    case Aff:
      if ( s0->constness()) return "Assignment to constant.";
    case AffInit:
      exprType() = s0 ;

      if ( s0->isDereferencable() && s1->isDereferencable() &&
           s0->subtype() != s1->subtype() &&
           !s0->subtype()->isVoid() && !s1->subtype()->isVoid() )
        return "Assignment from incompatible pointer type." ;

      // pointer = function
      if ( s0->isDereferencable() && s1->isFct() &&
           !s0->subtype()->equal(s1, true) &&
           !s0->subtype()->isVoid() )
      {
        ostringstream  mess ;
        mess << "Assignment from incompatible pointer type." << endl << 
        "<"  << s0->prettyPrint ( "a","" )  << "> doesn't match <" << s1->prettyPrint ( "b","" ) <<
        ">" << endl ;
        return utility::setMessage ( mess.str() )  ;
      }

      if ( s0->isArray() ||
           ( s0->isFloatingPoint() && s1->isDereferencable() ) ||
           ( s1->isFloatingPoint() && s0->isDereferencable() )
         )
        return "Incompatible types in assignment." ;

      int konst ;
      if ( s0->isPointer() && arg ( 1 )->isIntegerConstant ( konst ) && konst != 0 )
        return "Assignment makes pointer from integer without a cast." ;

      if ( s1->isIntegral() && s0->isDereferencable() )
        return "Assignment makes pointer from integer without a cast." ;

      if ( s0->isIntegral() && s1->isDereferencable() )
        return "Assignment makes integer from pointer without a cast." ;


      break ;

    case PlusAff:
    case MinusAff: // TODO a finir
      if ( s0->constness()) return "Assignment to constant.";
      if ( s0->isArray() || s1->isArray() ||  s0->isStruct() || s1->isStruct() ||
           ( s0->isPointer() &&  !s1->isIntegral() ) )
        return "Incompatible types for += or -=" ;
      exprType() = s0 ;
      break ;

    case MulAff:
    case DivAff:
      if ( !s0->isNumeric() || !s1->isNumeric() )
        return "Invalid operand to *= or /=" ;
      // result type is type of LHS arg
      exprType() = s0 ;
      break ;


    case ModAff:
    case BAndAff:
    case BXorAff:
    case BOrAff:
    case LShiftAff:
    case RShiftAff:
      if ( s0->constness()) return "Assignment to constant.";
      if ( !s0->isIntegral() || !s1->isIntegral() )
        return "Invalid operand to %=, &=, ^=, |=, <<= or >>=" ;
      // result type is type of LHS arg
      exprType() = s0 ;
      break ;

    case Seq:
      // result type is type of last operand
      exprType() = s1 ;
      break ;
    case Keep:
      exprType() = s0 ;
      break ;
    case Test:
      exprType() = s0  ;
      break ;

    case Arrow:
    case ZArrow:
    {
      // is left arg a pointer to struct/union ?
      if ( ! s0->isDereferencable() )
        return "Invalid type argument of '->'" ;
      Ctype t = s0->subtype() ;
      if ( !t->isStruct() && !t->isUnion() )
        return "Invalid type argument of '->'" ;

      StructMember *sm = t->getMember ( memberName() ) ;
      if ( sm == 0 )
        return utility::setMessage ( "'struct "+ t->structName()  +"' has no member named '"+memberName() +"'" ) ;

      // OK, expression seems correct - just propagate type
      // if ZArrow - no dereferencement is needed, so this is a pointer type
      if ( oper() == ZArrow )
      {
        exprType() = Ctype ( type::Ptr ) ;
        exprType()->subtype() = sm->mtype() ;
      }
      else
        exprType() = sm->mtype() ;

    }
    break ;


  }

  return 0 ;
}


/** Compute the type of an integral arithmetic operation
  return the type of the result
  (or 0 if it cannot be determined)
*/
Ctype Cexpr::integralResult ( Ctype l, Ctype r )
{
  if ( !l->isIntegral() || !r->isIntegral() ) return Ctype() ;
  if ( l->nBits() > r->nBits() ) return l ;
  if ( l->nBits() < r->nBits() ) return r ;
  if ( l->isUnsigned() ) return l ;
  else return r ;
}


/** Compute the type of a mixed  integral/float arithmetic operation
  return the type of the result
  (or 0 if it cannot be determined)
*/
Ctype Cexpr::numericResult ( Ctype l, Ctype r )
{
  if ( l->isIntegral() && r->isFloatingPoint() ) return r ;
  if ( r->isIntegral() && l->isFloatingPoint() ) return l ;
  if ( r->isFloatingPoint() && l->isFloatingPoint() ) return l ;
  return integralResult ( l,r ) ;
}




/** True if the current node is a function call */
bool Cexpr::isFctCall()
{
  return oper_ == Fct ;
}

/** True if the current node is a function entity */
bool Cexpr::isFct()
{
  return oper_ == Terminal && getEntity()->isFct()  ;
}


/** True if the current node has only one operand
 "." and "->" are considered as monadic, because rhs is not a data
*/
bool Cexpr::isMonadic()
{

  return
    oper_ == LNot ||
    oper_ == BNot ||
    oper_ == PlusPlusPre ||
    oper_ == MinusMinusPre ||
    oper_ == PlusPlusPost ||
    oper_ == MinusMinusPost ||
    oper_ == UPlus ||
    oper_ == UMinus ||
    oper_ == UStar ||
    oper_ == ZUStar ||
    oper_ == UAddr ||
    oper_ == Cast ||
    oper_ == Keep ||
    oper_ == Test ||
    oper_ == Arrow ||
    oper_ == ZArrow ||
    oper_ == Dot || /* should never appears here */
    oper_ == Sizeof ||
    oper_ == UnpackBF ;

}
/** No descriptions */
bool Cexpr::isDyadic()
{
  return
    oper_ == Mul ||
    oper_ == Div ||
    oper_ == Mod ||
    oper_ == Plus ||
    oper_ == Minus ||
    oper_ == LShift ||
    oper_ == RShift ||
    oper_ == Lt ||
    oper_ == LE ||
    oper_ == Gt ||
    oper_ == GE ||
    oper_ == Eq ||
    oper_ == NE ||
    oper_ == BAnd ||
    oper_ == BXor ||
    oper_ == BOr ||
    oper_ == LAnd ||
    oper_ == LOr ||
    oper_ == Aff ||
    oper_ == AffBF ||
    oper_ == PlusAff ||
    oper_ == MinusAff ||
    oper_ == MulAff ||
    oper_ == DivAff ||
    oper_ == ModAff ||
    oper_ == BAndAff ||
    oper_ == BXorAff ||
    oper_ == BOrAff ||
    oper_ == LShiftAff ||
    oper_ == RShiftAff ||
    oper_ == Seq  
    ||   oper_ == AffInit 
    ;
}

/** No descriptions */
bool Cexpr::isSideEffect()
{
  return
    oper_ == PlusPlusPre ||
    oper_ == MinusMinusPre ||
    oper_ == PlusPlusPost ||
    oper_ == MinusMinusPost ||
    oper_ == PlusAff ||
    oper_ == MinusAff ||
    oper_ == MulAff ||
    oper_ == DivAff ||
    oper_ == ModAff ||
    oper_ == BAndAff ||
    oper_ == BXorAff ||
    oper_ == BOrAff ||
    oper_ == LShiftAff ||
    oper_ == RShiftAff ||
    oper_ == Keep || // not really side effect operator, but simulate it
    oper_ == Test || // not really side effect operator, but simulate it
    oper_ == Aff ||
    oper_ == Fct ||
    oper_ == AffBF 
    || oper_ == AffInit 
    ;
}

/** No descriptions */
int Cexpr::isCommutative()
{
  return
    oper_ == Mul ||
    oper_ == Plus ||
    oper_ == BAnd ||
    oper_ == BXor ||
    oper_ == BOr ||
    oper_ == Eq ||
    oper_ == NE
    ;
}
/**
True if the argument is an lvalue
TODO:
preincrement and predecrement operators should generate an lvalue,
but they don't because they need a special management
 */
bool Cexpr::isLValue()
{
  bool r = ( ( oper_ == Terminal ) && getEntity()->isLValue() ) ||
           ( ( oper_ == UStar ) &&  arg ( 0 )->exprType()->isDereferencable() ) ||
           ( oper_ == Dot ) || ( oper_ == Arrow )
      /*     || (oper_ == PlusPlusPre ) || (oper_ == MinusMinusPre )  */
           ;

  return r ;
}
/** Verify if LHS arguments of = are lvalues.
dereferencements in lvalues are replaced by a fake operator
ie:
*p = x ;
is replaced by
Z* p = x ; (where Z* is a NOP)

\return 0 if OK, otherwise an error message
  */

// verifie si les operateurs a effet de bord sont bien appliqu�s a une lvalue

const char* Cexpr::verifyLValues()
{
  const char *stat ;
  Cexpr *exp ;
  Ctype t ;

  if ( oper() == Terminal ) return 0 ;

  // verify subexpressions
  for ( int i = 0 ; i < ( int ) args().size() ; ++i )
    if ( ( stat = arg ( i )->verifyLValues() ) ) return stat  ;

  exp = arg ( 0 ) ;
  t = exp->exprType() ;

  switch ( oper() )
  {
    case Aff:
    case AffInit: // TODO a verifier
    case AffBF:
    case PlusAff:
    case MinusAff:
    case MulAff:
    case DivAff:
    case ModAff:
    case BAndAff:
    case BXorAff:
    case BOrAff:
    case LShiftAff:
    case RShiftAff:
      if ( !exp->isLValue() )
        return "Invalid lvalue in assignment." ;
      if ( exp->oper() == UStar ) exp->oper() = ZUStar ;
      else if ( exp->oper() == Arrow ) exp->oper() = ZArrow ;
      break ;

    case PlusPlusPre:
    case PlusPlusPost:
      if ( !exp->isLValue() )
        return "Invalid lvalue in increment." ;
      if ( exp->oper() == UStar ) exp->oper() = ZUStar ;
      else if ( exp->oper() == Arrow ) exp->oper() = ZArrow ;
      break ;

    case MinusMinusPost:
    case MinusMinusPre:
      if ( !exp->isLValue() )
        return "Invalid lvalue in decrement." ;
      if ( exp->oper() == UStar ) exp->oper() = ZUStar ;
      else if ( exp->oper() == Arrow ) exp->oper() = ZArrow ;
      break ;

    case UAddr:
      int dummy ;
      if ( exp->isIntegerConstant ( dummy ) )
        return "Invalid lvalue in unary &" ;
      break ;

  }

  return 0 ;
}
/**
 Count the number of effect (or potential effects) in an expression
Operators such as = , +=, ++, etc.. implies an effect,
potential effects come from function calls.

The "," operator is very tricky because its left side operand
may not generate a side effect (so the corresponding code is useless)
In this case, the function sets seqLHS to true, else seqLHS is unchanged
 */
int Cexpr::effectCount ( bool& seqLHS )
{
  int cnt = 0 ;

  // count effects for sub expressions
  for ( int i = 0 ; i < ( int ) args().size() ; ++i )
    cnt += arg ( i )->effectCount ( seqLHS )  ;

  if ( oper() == Seq && ( arg ( 0 )->effectCount ( seqLHS ) == 0 ) ) seqLHS = true ;

  if ( isSideEffect() ) ++cnt ;
  return cnt ;
}

/**
 Insert special operator  for Unpacking bit-fields
*/
const char * Cexpr::bfUnpack ( bool root )
{
  int size, offset ;
  const char *status ;
  if ( isTerminal() )
  {
    if ( exprType()->isBitField ( size, offset ) )
    {
      bool issigned = isSigned() , constness = isConst();
      Cexpr *copy = clone() ;
      ent_.detach() ; // detach entity from current node
      oper_ =  UnpackBF ; // change the current node to UnpackBF operator
      argN_.push_back ( copy ) ;
      // make a fully new type because bit-fields cannot be shared
      exprType() = Ctype ( issigned ? type::Int : type::UInt , 1 , constness ) ;
    }
    return 0 ;
  }
  else if ( oper() == Arrow && exprType()->isBitField ( size, offset ) )
  {
    bool issigned = isSigned() , constness = isConst();
    Cexpr *copy = clone() ;
    renew() ;
    oper_ =  UnpackBF ; // change the current node to UnpackBF operator
    argN_.push_back ( copy ) ;
    // make a fully new type because bit-fields cannot be shared
    exprType() = Ctype ( issigned ? type::Int : type::UInt , 1 , constness ) ;
    return  copy->arg ( 0 )-> bfUnpack ( root ) ;
  }
  else if ( oper() == Aff && arg ( 0 )->exprType()->isBitField ( size, offset ) )
  {
    // do not expand and change the type of operator
    oper() = AffBF ;
    return arg ( 1 )->bfUnpack ( root );
  }
  // operator ++ (and -- is able) to work on bit fields
  else if ( ( oper() == PlusPlusPre || oper() == PlusPlusPost  ||  oper() == MinusMinusPost || oper() == MinusMinusPre )
            && arg ( 0 )->exprType()->isBitField ( size, offset ) )
  {
    if ( ! root )
    {
      bool issigned = arg ( 0 )->isSigned() , constness = arg ( 0 )->isConst();
      Cexpr *copy = clone() ;
      oper_ =  UnpackBF ; // change the current node to UnpackBF operator
      argN_.clear() ;
      argN_.push_back ( copy ) ;
      // make a fully new type because bit-fields cannot be shared
      exprType() = Ctype ( issigned ? type::Int : type::UInt , 1 , constness ) ;
    }
    return 0 ;
  }
  else if ( ( oper() == BXorAff || oper() == BOrAff || oper() == BAndAff
              || oper() == PlusAff || oper() == MinusAff )
            &&  arg ( 0 )->exprType()->isBitField ( size, offset ) )
  {
    return arg ( 1 )->bfUnpack ( root );
  }
  else if ( oper() == Seq )
  {
    // none of operands need to be expanded, or only the right one
    arg ( 0 )->bfUnpack ( true );
    arg ( 1 )->bfUnpack ( root );
    return 0 ;
  }

  int i = 0 ;
  if ( isFctCall() ) i = 1 ; // skip fct id

  for ( ; i < ( int ) args().size() ; ++i )
    if ( ( status = arg ( i )->bfUnpack ( false ) ) ) return status ;

  return 0 ;
}
/**
   Type compatibility verification, and add auto-cast when needed

Return;

** NULL if all types are compatibles
** a pointer to an error message if they are not.
   */
const char * Cexpr::makeCasts()
{
  Ctype   tfparam,  taparam,  functype ;
  unsigned int fp, ap , nfp, nap  ;
  const char *status = 0 ;

  if ( isTerminal() )
  {
    // function identifiers are ptr to function when they are terminal symbols
    if ( isFct() )
    {
      // make a pointer-to function that references this function
      Cexpr *copy = clone() ; // make a copy of terminal node
      // then,  change the current node to Pointer to function
      ent_.detach() ; // detach entity from current node
      oper_ = UAddr ; // change operator
      argN_.push_back ( copy ) ; // make sub-expression
      status = propagateTypes() ; // make a "pointer to function type"
      if ( status ) return status ;
    }
    return 0 ; // terminal node : OK
  }

  /* verify sub expressions, but
   do not auto-cast function-call first parameter (that is the fct itself)
   this point avoids to convert function to pointer-to function
   see behind
  */
  int i = 0 ;
  if ( isFctCall() &&  arg(0)->isTerminal() )
  {
      i = 1 ; // skip fct id
  }

  for ( ; i < ( int ) args().size() ; ++i )
    if ( ( status = arg ( i )->makeCasts() ) ) return status ;

  string fname ;

  switch ( oper() )
  {
    case Fct:
      // find type of function
      functype = arg ( 0 )->exprType() ;
      fname =  arg ( 0 )->isTerminal() ?
               arg ( 0 )->getEntity()->name() : "function_name" ;

      if ( functype->is ( type::Ptr ) ) functype = functype->subtype() ;
      // verify number of parameters :
      // fct calls with extra actual parameters are accepted
      // (because it allows variable length parameter lists)
      // anyway, extra parameters cannot crash a program :
      // they just generate extra push/pop activity
      nfp =  functype->funcParams().size() ; // number of formal parameters
      nap = args().size() -1 ;  // number of actual parameters

      if ( nfp > nap )
      {
        string m ( "Too few  arguments in function call.\n" ) ;
        m += "(function signature is : <" ;
        m += functype->prettyPrint ( fname,"" ) ;
        m += ">)." ;
        return utility::setMessage ( m ) ;
      }
      else if ( nfp < nap && !functype->valist() )
      {
        string m ( "Too many arguments in function call.\n" ) ;
        m += "(function signature is : <" ;
        m += functype->prettyPrint ( fname,"" ) ;
        m += ">)." ;
        return utility::setMessage ( m ) ;
      }

      for ( ap=1, fp=0; fp < nfp ; ++ap, ++fp )
      {
        Centity& formal = functype->funcParams() [fp] ;
        Cexpr* actual = arg ( ap ) ;
        tfparam = formal->thetype() ; // type of formal parameter
        taparam = actual->exprType() ; // type of actual parameter

        // zero integer constant can be used as a pointer
        /*
        cannot be tested by compatible() because compatibility depends
        on type AND on value of the actual param
        */

        int integervalue ;
        bool nulinteger = actual->isIntegerConstant ( integervalue ) && ( integervalue == 0 ) ;

        if ( ! ( nulinteger && formal->isPointer() ) )
        {
            if (  !tfparam->compatible (taparam ) ||
                  (!tfparam->isPtrToConst() &&  taparam->isPtrToConst() ) ||
                   taparam->isConstArray() )
                {
                string m ="Incompatible parameter type in function call.\n" ;
                m += "(expected <" ;
                m += tfparam->prettyPrint ( "formal","" );
                m += "> but found <" ;
                m += taparam->prettyPrint ( "actual","" );
                m += ">)." ;
                return  utility::setMessage ( m ) ;
            }
        }
        // ok, types are compatible - but they might need a cast
        // however, no cast needed for conversion from pointer to array or reciprocal
        if ( tfparam != taparam && !tfparam->isDereferencable() )
        {
          insertCast ( arg ( ap ) ,tfparam ) ;
        }

      }
      break ;

      // no cast needed
    case Array:
    case UStar:
    case ZUStar:

      // no cast needed
    case LNot:
    case BNot:
    case PlusPlusPre:
    case MinusMinusPre:
    case PlusPlusPost:
    case MinusMinusPost:
    case UPlus:
    case UMinus:
      break ;

    case UAddr:
    case Cast:
    case Sizeof:

      break ;

      /* operands must be both numeric */
    case Mul:
    case Div:
      numericPromotion ( arg ( 0 ), arg ( 1 ) ) ;
      break ;

      /* operands must be integral */
    case Mod:
    case BAnd:
    case BXor:
    case BOr:
      if ( !arg ( 0 )->exprType()->isIntegral() || !arg ( 1 )->exprType()->isIntegral() )
        return "Invalid operands to binary %,|,& or ^" ;

      numericPromotion ( arg ( 0 ), arg ( 1 ) ) ;
      break ;

      /* both integrals, or pointer+integral or integral+pointer or pointer - integral */
    case Plus:
    case Minus:
      if ( arg ( 0 )->exprType()->isNumeric() && arg ( 1 )->exprType()->isNumeric() )
      {
        numericPromotion ( arg ( 0 ), arg ( 1 ) ) ;
      }
      else if ( arg ( 1 )->exprType()->isIntegral() && arg ( 0 )->exprType()->isDereferencable() )
      {
        if ( !arg ( 1 )->exprType()->is ( type::Long ) &&  !arg ( 1 )->exprType()->is ( type::ULong ) )
        {
          // sign extension is added by "cast to long" if operand is signed
          insertCast ( arg ( 1 ), Ctype ( type::Long ) ) ;
        }
      }
      // pointer - integer is not commutative
      else if ( oper() == Plus && arg ( 0 )->exprType()->isIntegral() && arg ( 1 )->exprType()->isDereferencable() )
      {
        Cexpr *t = arg ( 0 ) ;   arg ( 0 ) = arg ( 1 ) ; arg ( 1 ) = t ;  // swap parameters
        status =  makeCasts() ;
      }
      // pointer differences
      else if ( oper() == Minus &&  arg ( 0 )->exprType()->isDereferencable() &&
                arg ( 1 )->exprType()->isDereferencable() &&
                arg ( 0 )->exprType()->subtype() == arg ( 1 )->exprType()->subtype() )
      {
        // no cast to add - difference of pointers to same type
      }
      else
        return  "Invalid argument type to + or -" ;
      break ;

      // args are both integral or pointers to same entity
      // we just need integral promotion, because all pointers
      // have the same representation
    case Lt:
    case LE:
    case Gt:
    case GE:
    case Eq:
    case NE:
      if ( areDifferentNumeric ( arg ( 0 )->exprType() , arg ( 1 )->exprType() ) )
      {
        numericPromotion ( arg ( 0 ), arg ( 1 ) ) ;
      }
      break ;

      // no cast needed - arguments are integral or pointer
      // believe it or not, FP args are legal too
    case LAnd:
    case LOr:
      break ;


    case CondOp:
      // no possible promotion for pointers :
      // they must have the same type
      if ( arg ( 1 )->exprType()->isNumeric() )
      {
        numericPromotion ( arg ( 1 ), arg ( 2 ) ) ;
      }
      break ;

    case Aff:
    case AffBF :
      // affectation from pointer to const or const array to non const pointer is forbidden
      
      if ( (arg(1)->isPtrToConst() || arg(1)->isConstArray()) && !arg(0)->isPtrToConst())
      {
        string msg ( "Const pointer assigned to non const pointer"); 
        return utility::setMessage ( msg ) ;
      }
///*JET*/      cout << "aff: " << arg(0)->prettyPrint(1) << "( const " << arg(0)->exprType()->constness() << ") = " << arg(1)->prettyPrint(1) << endl;
///*JET*/      cout << "code = " << arg(1)->exprType()->code() << " constness = " << arg(1)->exprType()->constness() << endl;
     case AffInit: // ++Gib
      // affectation from non pointer to pointer is forbidden
      //  if ( arg ( 0 )->exprType()->nBits() != arg ( 1 )->exprType()->nBits() )
      if ( areDifferentNumeric ( arg ( 0 )->exprType(), arg ( 1 )->exprType() ) )
        insertCast ( arg ( 1 ), arg ( 0 )->exprType() ) ;
      break ;
      //  integral += integral or pointer == integral are valid
    case PlusAff:
    case MinusAff:
      if ( arg ( 0 )->exprType()->isPointer()  &&  arg ( 1 )->sizeOf() != 2 )
        insertCast ( arg ( 1 ), Ctype ( type::Long ) ) ;
      // else if ( arg ( 0 )->exprType()->nBits() != arg ( 1 )->exprType()->nBits() )
      else if ( areDifferentNumeric ( arg ( 0 )->exprType(), arg ( 1 )->exprType() ) )
        insertCast ( arg ( 1 ), arg ( 0 )->exprType() ) ;
      break ;


      // cast RHS arg to LHS's type
    case MulAff:
    case DivAff:
      if ( areDifferentNumeric ( arg ( 0 )->exprType(), arg ( 1 )->exprType() ) )
        insertCast ( arg ( 1 ), arg ( 0 )->exprType() ) ;
      break ;


    case ModAff:
    case BAndAff:
    case BXorAff:
    case BOrAff:
      // if ( arg ( 0 )->exprType()->nBits() != arg ( 1 )->exprType()->nBits() )
      if ( areDifferentIntegral ( arg ( 0 )->exprType(), arg ( 1 )->exprType() ) )
        insertCast ( arg ( 1 ), arg ( 0 )->exprType() ) ;
      break ;

    case LShiftAff:
    case RShiftAff:
    case LShift:
    case RShift:
      if ( arg ( 1 )->exprType()->nBits() != 8 )
        insertCast ( arg ( 1 ), Ctype ( type::Int ) ) ;
      break ;

    case Seq:
      break ;

    case Keep:
      break ;

    case Test:
      break ;

    case Arrow:
    case Dot:
      break ;

  }

  return status ;
}
/**
  Cast an expression to target type.
 */
void Cexpr::insertCast ( Cexpr*& expr, Ctype target )
{
  Cexpr *mycast = newCexpr ( Cast,expr ) ;
  expr  = mycast ;
  mycast->exprType() =  target ;
}
/**
Apply classic integral type promotion for c1 and c2
by inserting the proper cast.
c1 and c2 must be numeric  (ie: integral or float) expressions

return:

0 if no promotion needed
1 if t1 promoted
2 if t2 promoted
 */
int Cexpr::numericPromotion ( Cexpr*& c1, Cexpr*& c2 )
{
  int r ;
  if ( c1->exprType()->precedence() == c2->exprType()->precedence() )
    r = 0 ;
  else if ( c1->exprType()->precedence() < c2->exprType()->precedence() )
  {
    insertCast ( c1,c2->exprType() ) ; r = 1 ;
  }
  else
  {
    insertCast ( c2,c1->exprType() ) ; r = 2 ;
  }
  return r ;
}

/** No descriptions */
Cexpr *& Cexpr::arg ( int i )
{
  return argN_[i] ;
}
/** No descriptions */
bool Cexpr::isIntegerConstant ( int& cst )
{
  bool r = false ;
  if ( oper() == Terminal &&
       exprType()->isIntegral() &&
       getEntity()->storage() == entity::Constant )
  {
    cst = getEntity()->value() ; r = true ;
  }
  return r ;
}

/** No descriptions */
bool Cexpr::isFloatingPointConstant ( float& cst )
{
  bool r = false ;
  if ( oper() == Terminal &&
       exprType()->isFloatingPoint() &&
       getEntity()->storage() == entity::Constant )
  {
    cst = utility::reinterpretToFloat ( getEntity()->value() ) ; r = true ;
  }
  return r ;
}

/** true is expression is a constant integer casted to any type  -
 (the type of this constant is the type of the expression)
*/
bool Cexpr::isCastConstant ( int& cst )
{
  bool r = false ;
  if ( oper_ == Terminal &&  ent_->storage() == entity::Constant )
  {
    cst =  ent_->value()  ;
    r = true ;
  }

  return r ;
}

bool Cexpr::isLiteral ( string& name )
{
  bool r = false ;
  if ( isTerminal() && getEntity()->isLitteral() )
  {
    name = getEntity()->name() ; r = true ;
  }
  return r ;
}

/** No descriptions */
int Cexpr::removeNops()
{
  int nops=0, constant ;
  float fconstant ;
  Cexpr *s0, *s1  ;
  Ctype ts,tm  ;

  int clas,storage ;
  string name ;
  int addr ;
  int offset ;


  if ( oper() ==  Terminal ) return 0 ; // terminal node : OK

  // verify sub expressions
  for ( int i = 0 ; i < ( int ) args().size() ; ++i )
    nops += arg ( i )->removeNops()   ;

  switch ( oper() )
  {
      // because of refs to arrays[0], this situation is quite common
    case Plus:
    case Minus:
      s0 = arg ( 0 ) ; s1 = arg ( 1 ) ;
      if ( ( arg ( 1 )->isIntegerConstant ( constant ) && constant == 0 ) ||
           ( arg ( 1 )->isFloatingPointConstant ( fconstant ) && fconstant == 0.0 ) )
      {
        // remove this node
        *this = *s0 ;
        s0->disconnect() ;
        delete s1 ; delete s0 ;
        ++nops ;
      }
      break;

      // another common : &array[i] (ie: &*(array+i)) must be compiled as (array+i)
    case UAddr:
      s0 = arg ( 0 ) ;
      if ( s0->oper() == UStar )
      {
        s1 = s0->arg ( 0 ) ;
        *this = *s1 ;
        s0->disconnect() ; s1->disconnect() ;
        delete s0 ; delete s1 ;
        ++nops ;
      }
      // &(p->x ) must not dereference p->x, but just compute member addr - replace it by fake version
      else if ( s0->oper() == Arrow )
      {

        Ctype tmp = exprType() ;
        // suppress & operator
        *this = *s0 ; // verifier si le membre est bien duplique
        s0->disconnect() ;
        delete s0 ;
        // change Operator  to avoid dereferencement
        // and transfert type
        exprType() = tmp ;
        oper() = ZArrow ;
        ++nops ;
      }
      break ;

    case UStar:
      s0 = arg ( 0 ) ;
      if ( s0->oper() == UAddr ) // quite uncommon : *&p is equivalent to p
      {
        s1 = s0->arg ( 0 ) ;
        *this = *s1 ;
        s0->disconnect() ; s1->disconnect() ;
        delete s0 ; delete s1 ;
        ++nops ;
      }
      /*
      else if ( s0->isTerminal() ) // *p, when p is pointer to fct
      {
        if ( s0->getEntity()->isPointerToFct() )
        {
          // pointers to function do not need to be dereferenced
          // so just suppress * operator
          *this = *s0 ;
          s0->disconnect() ;
          delete s0 ;
          ++nops ;

        }
      }
      */
      else if( s0->exprType()->isPointerToFct())
      {
          // Dereferencement of terminal (or not terminal) ptr to fct  : just remove *
          *this = *s0 ;
          s0->disconnect() ;
          delete s0 ;
          ++nops ;
      }
      break ;

    case Dot: // yes,  "." operator is really a nop
    {
      s0 = arg ( 0 ) ;
      // get offset of member
      ts = s0->exprType() ; // type of structure


      if ( s0->isTerminal() )
      {
        offset = ts->getMember ( memberName() )->moffset() ; // offset of member
        tm = ts->getMember ( memberName() )->mtype() ; // type of member

        // make a pseudo-entity from structure entity
        clas    = s0->getEntity()->theclass() ;
        storage = s0->getEntity()->storage() ;
        addr    = s0->getEntity()->addr() ;
        name    = s0->getEntity()->name() ;

        // depending on class  of entity, we modify entity name or offset+name
        if ( storage == entity::Auto ||  storage == entity::Param )
        {
          addr += offset ;
          name += "." ;
          name += utility::toString ( offset ) ;
        }
        else if ( storage == entity::Global )
        {
          name += "+" ;
          name += utility::toString ( offset ) ;
        }
        else
        {
          //  warning("Internal error: storage of entity is neither Global nor Auto") ;
        }

        disconnect() ;
        // set type to the type of the member
        setEntity ( Centity ( name, storage , addr ) ) ;
        getEntity()->thetype() = tm ;
        getEntity()->theclass() = clas ;

        delete s0 ;
        ++nops ;
      }

      else
      {
        // .  operator is applied to something which is not terminal
        // this code apply the following transformation :
        //  xxx.c ==> &(xxx)->c (for exmpl : a->b.c ==> &(a->b)->c)
        //  so code developed for -> operator can be re-used
        Cexpr *node = newCexpr ( UAddr, s0 ) ;
        arg ( 0 ) = node ;
        oper() = Arrow ;
        // change type of node
        Ctype ptr_to ( type::Ptr,0,0 ) ;
        ptr_to->subtype() = ts ;
        node->exprType() = ptr_to ;
        ++nops ;
      }

    }
    break ;

  }
  return nops ;
}

Cexpr& Cexpr::operator= ( const Cexpr& rhs )
{
  if ( this != &rhs )
  {
    argN_ = rhs.argN_ ;  //
    ent_ = rhs.ent_ ;
    expr_type_ = rhs.expr_type_ ;
    oper_ = rhs.oper_ ;
    member_name_ = rhs.member_name_ ;
  }
  return *this;
}

int Cexpr::sizeOf()
{
  int sz = 0 ;
  if ( exprType() ) sz =  exprType()->nBits()  / 8 ;
  return sz ;
}
/** No descriptions */
bool Cexpr::isTerminal()
{
  return oper_ == Terminal ;
}


/** Performs expression
a) verification,
b) simplification,
c) optimization
*/
const char * Cexpr::process()
{
  const char * err = 0 ;

  if ( c18.debugOpt() & 8 )
  {
    cout << prettyPrint ( 0 ) << endl ;
  }
  if ( c18.debugOpt() & 16 )
  {
    cout << prettyPrint ( 1 ) << endl ;
  }

  if ( ( err = propagateTypes() ) ) return err  ;
  if ( ( err = verifyFunctionCalls() ) ) return err  ;

  simplify() ;  // constant folding + remove NOPS + rearrange

  if ( ( err = bfUnpack ( true ) ) ) return err  ;


  // some simplifications need types to be propagated again
  if ( ( err = propagateTypes() ) ) return err  ;

  if ( ( err = verifyLValues() )  || ( err = makeCasts() ) ) return err  ;

  bool seqLHS = false ;
  int ec = effectCount ( seqLHS ) ;
  if ( ec == 0 )
    return   "\tStatement with no effect." ;

  // autocast might introduces needs for simplification
  while ( simplify() )  ;


  if ( c18.debugOpt() & 32 )
  {
    cout << prettyPrint ( 0 ) << endl ;
  }
  if ( c18.debugOpt() & 64 )
  {
    cout << prettyPrint ( 1 ) << endl ;
  }

  if ( seqLHS ) err = "\tLeft-hand operand of comma expression has no effect." ;
  return err ;
}


/** Verify if void function is called from an expression */
const char * Cexpr::verifyFunctionCalls ( bool root )
{
  const char *stat ;
  Ctype t ;

  if ( isTerminal() ) return 0 ;

  // verify subexpressions
  for ( int i = 0 ; i < ( int ) args().size() ; ++i )
    if ( ( stat = arg ( i )->verifyFunctionCalls ( false ) ) ) return stat  ;

  if ( isFctCall() )
  {
    t = arg ( 0 )->exprType() ;
    if ( t && t->isPointer() ) t = t->subtype() ;

    if ( t && t->isFct() && t->subtype()->isVoid() && !root )
      return "void value is not ignored as it ought to be." ;
  }

  return 0 ;
}

// but found
/** No descriptions */
bool Cexpr::isSigned()
{
  return exprType()->isSigned() ;
}

bool Cexpr::isConst()
{
  return exprType()->isConst() ;
}

/**
   YES! this function really un-optimize operators that cannot be efficiently compiled
   or need a hard development effort to get a good result
   this is the case for   +=, -=, etc ... ***on bit-fields***
   However, this is not really an issue,
   because bit-fields are likely to be rarely used for calculation

   Note: ++ and -- operators are however reimplemented for bit fields, so they are efficient
*/
int Cexpr::unoptimize()
{
  int u = 0 , bs,bo;
  int newoper ;

  if ( oper() ==  Terminal ) return 0 ; // terminal node : OK
  // verify sub expressions
  for ( int i = 0 ; i < ( int ) args().size() ; ++i )
    u += arg ( i )->unoptimize()   ;

  if ( arg ( 0 )->exprType()->isBitField ( bs,bo ) )
  {
    switch ( oper() )
    {
        // case  BAndAff: newoper = BAnd ; break ;
        // case  BOrAff: newoper = BOr ; break ;
        //  case  BXorAff: newoper = BXor ; break ;

      case  DivAff: newoper = Div ; break ;
      case  MulAff: newoper = Mul ; break ;
      case  ModAff: newoper = Mod ; break ;

        //    case  PlusAff: newoper = Plus ; break ;
        //    case  MinusAff: newoper = Minus ; break ;

      case  RShiftAff: newoper = RShift ; break ;
      case  LShiftAff: newoper = LShift ; break ;

      default : newoper = 0 ; break ;
    }
    // transform a @= b    into       a = a @ b
    if ( newoper != 0 )
    {
      Cexpr *right  = clone() ;
      right->oper() = newoper ;
      arg ( 1 ) = right ;
      oper() = Aff ;
    }
  }

  return u ;
}

/**
    Do some trivial rearrangements to make the  generation of code more easy
*/
int Cexpr::rearrange()
{
  int arr=0 ,k ;
  float f ;

  Cexpr *e ,  *l;
  int bfsize, bfoffset ;


  if ( oper() ==  Terminal ) return 0 ; // terminal node : OK

  // verify sub expressions
  for ( int i = 0 ; i < ( int ) args().size() ; ++i )
    arr += arg ( i )->rearrange()   ;

  // commutative operation can be rearranged when the first operand is a constant
  // and the second one is not :
  // code is generally more efficient when the constant is in second position.
  if ( isCommutative() && ( arg ( 0 )->isIntegerConstant ( k ) || arg ( 0 )->isFloatingPointConstant ( f ) ) )
  {
    Cexpr *tmp = arg ( 0 ) ;
    arg ( 0 ) = arg ( 1 ) ;
    arg ( 1 ) = tmp ;
    ++arr ;
  }

  switch ( oper() )
  {

      // the following are optimizations
    case PlusAff:
      if ( arg ( 0 )->isTerminal() && ( arg ( 1 )->isIntegerConstant ( k ) ) )
      {
        arg ( 0 )->exprType()->isBitField(bfsize,bfoffset) ;

        if ( k == 1 )
        {
          // OK, replace x += 1 with ++x
          oper() = PlusPlusPre ;
          delete arg ( 1 ) ;
          args().pop_back() ;
          expr_type_ =  arg ( 0 )->expr_type_ ;
          ++arr ;
        }
        else if ( k == -1 )
        {
          // OK, replace x += -1 with --x
          oper() = MinusMinusPre ;
          delete arg ( 1 ) ;
          args().pop_back() ;
          expr_type_ =  arg ( 0 )->expr_type_ ;
          ++arr ;
        }
        else if ( k == 2 && arg ( 0 )->sizeOf() == 1 && bfsize == 0)
        {
          // OK, replace x += 2 with (++x,++x)
	  // desctivated for bit-field because not efficient
          l =   arg ( 0 ) ;
          oper() = Seq ;
          delete arg ( 1 ) ;

          arg ( 0 ) = e =  newCexpr() ;
          e->oper() = PlusPlusPre ;
          e->args().push_back ( l ) ;
          e->expr_type_ = l->expr_type_ ;

          arg ( 1 ) = e->clone() ;

          expr_type_ = arg ( 1 )->expr_type_ ;
          ++arr ;
        }
        else if ( k == -2 && arg ( 0 )->sizeOf() == 1 && bfsize == 0)
        {
          // OK, replace x += 2 with (++x,++x)
          l =   arg ( 0 ) ;
          oper() = Seq ;
          delete arg ( 1 ) ;
          expr_type_ = l->expr_type_ ;

          arg ( 0 ) = e =  newCexpr() ;
          e->oper() = MinusMinusPre ;
          e->args().push_back ( l ) ;
          e->expr_type_ = l->expr_type_ ;

          arg ( 1 ) = e->clone() ;

          expr_type_ =  arg ( 1 )->expr_type_ ;
          ++arr ;
        }
      }
      break ;

    case MinusAff:
      if ( arg ( 0 )->isTerminal() && arg ( 1 )->isIntegerConstant ( k ) )
      {
        arg ( 0 )->exprType()->isBitField(bfsize,bfoffset) ;
        if ( k == 1 )
        {
          // OK, replace x -= 1 with --x
          oper() = MinusMinusPre ;
          delete arg ( 1 ) ;
          args().pop_back() ;
          expr_type_ =  arg ( 0 )->expr_type_ ;
          ++arr ;
        }
        else if ( k == -1 )
        {
          // OK, replace x -= -1 with ++x
          oper() = PlusPlusPre ;
          delete arg ( 1 ) ;
          args().pop_back() ;
          expr_type_ =  arg ( 0 )->expr_type_ ;
          ++arr ;
        }
        else if ( k == 2 && arg ( 0 )->sizeOf() == 1 && bfsize == 0)
        {
          // OK, replace x -= 2 with (--x,--x)
          l =   arg ( 0 ) ;
          oper() = Seq ;
          delete arg ( 1 ) ;
          expr_type_ = l->expr_type_ ;

          arg ( 0 ) = e =  newCexpr() ;
          e->oper() = MinusMinusPre ;
          e->args().push_back ( l ) ;
          e->expr_type_ = l->expr_type_ ;

          arg ( 1 ) = e->clone() ;


          expr_type_ =  arg ( 1 )->expr_type_ ;
          ++arr ;
        }
        else if ( k == -2 && arg ( 0 )->sizeOf() == 1 && bfsize == 0)
        {
          // OK, replace x -= -2 with (++x,++x)
          l =   arg ( 0 ) ;
          oper() = Seq ;
          delete arg ( 1 ) ;
          expr_type_ = l->expr_type_ ;

          arg ( 0 ) = e =  newCexpr() ;
          e->oper() = PlusPlusPre ;
          e->args().push_back ( l ) ;
          e->expr_type_ = l->expr_type_ ;

          arg ( 1 ) = e->clone() ;

          expr_type_ =  arg ( 1 )->expr_type_ ;
          ++arr ;
        }
      }
      break ;

    case NE:
      if ( ( arg ( 1 )->isIntegerConstant ( k ) && k == 0 ) ||
           ( arg ( 1 )->isFloatingPointConstant ( f ) && f == 0.0 ) )
      {
        // just remove the operation (works for both integral/pointer/FP)
        delete arg ( 1 ) ;
        l = arg ( 0 )  ;
        disconnect() ;
        *this = *l ;
        ++arr ;
      }
      break ;
    case Eq:
      if ( ( arg ( 1 )->isIntegerConstant ( k ) && k == 0 ) ||
           ( arg ( 1 )->isFloatingPointConstant ( f ) && f == 0.0 ) )
      {
        // replace x == 0 with !x
        delete arg ( 1 ) ;
        args().pop_back() ;
        oper() = LNot ;
        ++arr ;
      }
      break ;

      case PlusPlusPre:
      case MinusMinusPre:
      case PlusPlusPost:
      case MinusMinusPost:
      if( arg(0)->oper() == PlusPlusPre ||  arg(0)->oper() == MinusMinusPre)
      {
          // OK, replace --(++x)  with (++x,--x) (or (++x)--  with (++x,x--) )
          Cexpr *r = arg ( 0 )->clone();
          r->oper() = oper() ;
          args().push_back ( r) ;
          oper() = Seq ;
          exprType() = r->exprType() ;

          ++arr ;
      }


      break ;
  }


  return arr ;
}

/** clone an expression */
Cexpr *Cexpr::clone()
{
  Cexpr *c = newCexpr() ;

  c->ent_ = ent_ ;
  c->expr_type_ = expr_type_ ;
  c->oper_ = oper_ ;
  c->member_name_ = member_name_ ;

  for ( unsigned int i = 0 ; oper_ != Terminal && i < argN_.size() ; ++i )
  {
    c->argN_.push_back ( argN_[i]->clone() ) ;
  }

  return c ;
}

string Cexpr::memberName()
{
  return member_name_ ;
}




/*!
    \fn Cexpr::isSymbolicConstant
 The following are constant addresses :

 -global or static array
 -global or static array +- constant offset
 -addr of global or static entity (including function)
 -addr of global or static entity +- offset (excluding function)
 -member addr of glob or static structure

  The following are constant integral:
  -difference of pointer to the same type of data (ptr_diff_t)

  Return value: the size of the symbolic data, or 0 if the expression is not acceptable
  Side effect:
 symbolic=assembly language expression, to be calculated at assemble time
 symbols=list symbols needed to resolve the symbolic expression

 */
int Cexpr::isSymbolicConstant ( string& symbolic, vector<string> &symbols )
{
  int r = 0 ;
  string s ;
  if ( oper() == Terminal )
  {
    Centity ent = getEntity() ;
    if ( ( ent->isArray() ||  ent->isFct() ) && ( ( s =asmGlobalName ( ent ) ) != "" ) )
    {
      r = 1 ;
      symbolic = s ;
      // struct members is a special entity  whose name  is "x+offset1+offset2+..."
      // ==> just remove the offset part to build the correct reference
      string::size_type p = s.find ( '+' ) ;
      if ( p  != string::npos )  s.erase ( p ) ;
      symbols.push_back ( s ) ;
    }
  }
  else if ( oper() == UAddr )
  {
    Cexpr *e = arg ( 0 ) ;
    if ( e->oper() == Terminal )
    {
      Centity ent = e->getEntity() ;
      if ( ( s =asmGlobalName ( ent ) ) != "" )
      {
        r = 1 ;
        symbolic = s ;
        // struct members is a special entity  whose name  is "x+offset1+offset2+..."
        // ==> just remove the offset part to build the correct reference
        string::size_type p = s.find ( '+' ) ;
        if ( p  != string::npos )  s.erase ( p ) ;
        symbols.push_back ( s ) ;
      }

    }
  }
  else if ( oper() == Plus )
  {
    string var  ;
    int val  ;

    Cexpr *e0 = arg ( 0 ), *e1=arg ( 1 ) ;
    if ( exprType()->isDereferencable()
         && ( r=e0->isSymbolicConstant ( var , symbols ) )
         && e1->isIntegerConstant ( val ) )
    {
      // get type of expression - and corresponding scale factor
      int sf = exprType()->subtype()->sizeOf() ;
      symbolic = "("+var + "+" + utility::toString ( val*sf ) +")" ;
    }
  }
  else if ( oper() == ZArrow )
  {
    string var  ;

    Cexpr *e0 = arg ( 0 )  ;
    Ctype type = e0->exprType()->subtype()  ;
    // get struct / union offset
    if ( ( type != 0 ) && ( r=e0->isSymbolicConstant ( var, symbols ) )  && ( type->isStruct() || type->isUnion() ) )
    {
      string member = memberName() ;
      StructMember *sm = type->getMember ( member ) ;
      if ( sm )
      {
        symbolic = "("+var + "+" + utility::toString ( sm->moffset() ) +")" ;
      }
    }
  }
  else if ( oper() == Minus )
  {
    string var,var1  ;
    int val , r1 ;

    Cexpr *e0 = arg ( 0 ), *e1=arg ( 1 ) ;
    if ( ( r=e0->isSymbolicConstant ( var, symbols ) ) )
    {
      if ( e1->isIntegerConstant ( val ) )
      {
        int sf = exprType()->subtype()->sizeOf() ;
        symbolic = "("+var + "-" + utility::toString ( val*sf ) +")" ;
      }
      else if ( ( r1=e1->isSymbolicConstant ( var1 , symbols ) ) )
      {
        int sf = e1->exprType()->subtype()->sizeOf() ;
        symbolic = "(("+var + "-" + var1 +")/" + utility::toString ( sf ) +")"  ;
      }
    }
  }
  else if ( oper() == Cast )
  {
    // does not impact the symbolic code, just final type or scale factors
    r = arg ( 0 )->isSymbolicConstant ( symbolic, symbols ) ;
  }

  return r ;
}
/**
 Helper: Verify if this entity is global, or local to the current fct and static
 \return the global asm name, or local static name
  or an empty string if the entity is not global
*/
string Cexpr::asmGlobalName ( Centity ent )
{
  string symbolic ;

  if ( ent->isGlobal() )
  {
    symbolic =  "C18_" + ent ->name() ;
  }
  else   if ( ent->isLocal() && ent->isStatic() )
  {
    extern Compiler c18  ;
    string prefix = c18.parser()->curFct()->fct()->name() +"#"  ;
    symbolic =  prefix + ent ->name() ;

  }
  return symbolic ;
}
/**
 true if t1 and t2 are both numeric, but of different types
*/
bool Cexpr::areDifferentNumeric ( Ctype& t1,   Ctype& t2 )
{
  if ( t1->isNumeric() && t2->isNumeric() )
  {
    if ( t1->code() != t2->code() ) return true ;
  }
  return false ;
}
/**
 true if t1 and t2 are both integral, but of different types
*/
bool Cexpr::areDifferentIntegral ( Ctype& t1,  Ctype& t2 )
{
  if ( t1->isIntegral() && t2->isIntegral() )
  {
    if ( t1->code() != t2->code() ) return true ;
  }
  return false ;
}
/**
 Computes the type of the result of a conditionnal operator
*/
Ctype Cexpr::condOpResult ( Ctype& t1, Ctype& t2 )
{
  if ( t1->isFloatingPoint() || t2->isFloatingPoint() )
    return Ctype ( type::Float ) ;
  else if ( t1->isIntegral() && t2->isIntegral() )
    return integralResult ( t1,t2 ) ;
  else if ( t1->compatible ( t2 ) )
    return t1 ;
  return Ctype() ; // null type == error
}
