/***************************************************************************
                          cexpr.h  -  description
                             -------------------
    begin                : Sun Nov 28 2004
    copyright            : (C) 2004 by Gibaud Alain
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

#ifndef CEXPR_H
#define CEXPR_H
#include <vector>
#include <string>
using namespace std ;

#include "entity.h"
#include "ctype.h"


/**
  *@author Gibaud Alain
  */

class Cexpr
{
  private: // Private attributes

    Centity  ent_;          // terminal nodes  only
    Ctype   expr_type_ ;    // type of expression
    /** operands vector (from 1 to many ) */
    std::vector<Cexpr*> argN_ ;
    int     oper_;          // all nodes
    string  member_name_ ; // for . and -> operators


    /** No descriptions */
    Cexpr();  // must be dynamically allocated
    Cexpr ( const Cexpr& ) ; // cannot be copy-constructed
    Cexpr& operator= ( const Cexpr & ) ;  // cannot be copied

  public:
    enum Code  // legal values for oper_ member
    {
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
      Aff, PlusAff, MinusAff, MulAff, DivAff, ModAff, BAndAff, BXorAff, BOrAff,LShiftAff, RShiftAff,
      Seq ,
      // Not really C operators : used to facilitate code generation
      ZUStar, //  Fake dereferencement for lvalues
      Keep,    // unary pseudo operator : keep expresson value -
      // turn No-effect expression into Do-effect expression
      Test,    // unary pseudo operator :  sets the Z bit from
      // the result a 8 or 16 bit expression
      ZArrow ,  // fake offset+dereferencement for lvalues
      UnpackBF , // convert a bit-field to the corresponding int8 value
      AffBF,    // affectation to bit field
      AffInit ,    // initialisation (constness  support)
    } ;
    ~Cexpr();
    static Cexpr *newCexpr()  ;
    static Cexpr *newCexpr ( int op, Cexpr *left, Cexpr *right )   ;
    static Cexpr *newCexpr ( int op, Cexpr *operand );
    static Cexpr *newCexpr ( int op, Cexpr *lhs, vector<Cexpr *>& a );
    static Cexpr *newCexpr ( int op, Cexpr *lhs, string& member_name );
    Cexpr *clone();
    void renew() ;

    /** Return an entity adress if expression is a terminal node, 0 otherwise. */
    Centity  getEntity();
    void setEntity ( Centity ) ;

    string prettyPrint ( int opt=0 );

    string opName();

    string memberName() ;

    int& oper();

    Ctype& exprType() { return expr_type_ ; }

    vector<Cexpr *>& args();

    int simplify();
    /** Apply cast to constants
    */
    int constantFolding();
    /** Disconnect any object referenced by *this  */
    void disconnect();
    /** No descriptions */
    int resultSize();
    // to avoid complains about "all private ctors"
    friend void dummy() ;   // ::dummy() does not (have to) exist
    /** No descriptions */
    const char *propagateTypes();
    /** No descriptions */
    Ctype integralResult ( Ctype l, Ctype r );
    /** No descriptions */
    Ctype numericResult ( Ctype l, Ctype r );
    /** True if the current node has only one operand */
    bool isMonadic();
    /** True if the current node is const */
    bool isConst();
    /** No descriptions */
    bool isDyadic();
    int dyadicConstantFolding()  ;
    int monadicConstantFolding()  ;
    int multiadicConstantFolding()  ;
    /** No descriptions */
    int isCommutative();
    /** true if expression is an lvalue */
    bool isLValue();
    /** Verify if LHS arguments of = are lvalues.
    dereferencements in lvalues are replaced by a fake operator
    ie:
    *p = x ;
    is replaced by
    Z* p = x ; (where Z* is a NOP)

    \return 0 if OK, otherwise an error message
    */
    const char* verifyLValues();
    /** Count the number of effect (or potential effects) in an expression
    Operators such as = , +=, ++, etc.. implies an effect,
    potential effects come from function calls.
    */
    int effectCount(bool& commaLHSproblem);

    /** unpack or pack bit-fields of an expression */
    const char *  bfUnpack(bool root) ;

    /** Verifies type compatibility of operands, and performs an
    autocast when types are compatible, but not identical

    Returns:

    ** NULL if all types are compatibles
    ** a pointer to an error message if they are not.
     */
    const char *makeCasts();
    /** Cast an expression to target type.
    */
    static void insertCast ( Cexpr *& expr, Ctype target );
    /** Apply classic integral type promotion for c1 et c2,
    by inserting the proper cast.

    return:

    0 if no promotion needed
    1 if c1 promoted
    2 if c2 promoted
    */
    int numericPromotion ( Cexpr *& c1, Cexpr*& c2 );
    /** No descriptions */
    Cexpr *& arg ( int i );
    /** true if this expression is an integer constant  */
    bool isIntegerConstant ( int& cst );
    /** true if this expression is a floating point  constant  */
    bool isFloatingPointConstant ( float& cst ) ;
    /** true if this expression is an integer constant casted to pointer type */
    bool isCastConstant ( int& cst );
    /** No descriptions */
    int removeNops();
    int sizeOf() ;
    /** No descriptions */
    bool isTerminal();
    /** True if this expression is any kind of affectation or indecrementation/decrementation */
    bool isSideEffect();
    /** True if this expression is a function call */
    bool isFctCall() ;
    /** True if this expression is a function entity */
    bool isFct() ;
    /** Performs expression
    a) verification,
    b) simplification,
    c) optimization */
    const char * process();
    /** Verify if void function is called from an expression */
    const char * verifyFunctionCalls ( bool root=true );
    /** No descriptions */
    bool isSigned();

    /** un-optimize expressions that cannot be compiled efficently */
    int unoptimize() ;
    /** Does some trivial rearrangement to facilitate code generation */
    int rearrange();
    /** Determines if an expression is a constant addr - and compute the asm string for this address 
	return 0 if not constant
	else return the scale factor of the entity pointed to by addr
    */
    int isSymbolicConstant ( string& , vector<string>& );
    /** Computes the asm name of a static entity */
    string asmGlobalName ( Centity ent ) ;
    /** true if expression is a literal */
    bool isLiteral(string& name) ;
    /** true if t1 & t2 are both numeric, of different types */
    bool areDifferentNumeric( Ctype& t1, Ctype& t2) ;
    /** true if t1 & t2 are both integral but from different types */
    bool areDifferentIntegral(Ctype& t1,  Ctype& t2) ;
    /** Computes the type of the result of a conditionnal operator */
    Ctype condOpResult( Ctype& t1, Ctype& t2) ;
    bool isPtrToConst() 
    { 
      return expr_type_.theType()->isPtrToConst();
    }
    bool isConstArray() 
    { 
      return expr_type_.theType()->isConstArray();
    }
} ;

#endif
