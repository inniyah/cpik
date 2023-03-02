/***************************************************************************
                          flatten.h  -  description
                             -------------------
    begin                : mer fév 9 2005
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


#ifndef FLATTEN_H
#define FLATTEN_H


class Compiler ;
class Symtab ;
class Cexpr ;
class Operation ;

#include "position.h"
#include "resultlocation.h"
#include "operation.h"
#include <iostream>
#include <list>
using namespace std ;

/**

Builds a flat representation of expressions and instructions

This intermediate code generator allows optimisations
before real code generation.

*@author Gibaud Alain
*/

class Flatten
{
  public:

  private:
    Symtab& _symbols ;
    list<Operation> _ops ;

  public:
    enum TestResult { Raw=0, Negate, AlwaysTrue, AlwaysFalse };

    Flatten();
    ~Flatten();
    void dump ( const char *mess="", ostream& os=cout ) ;
    void insertOp ( const Operation& op ) ;
//  Operation& op(int i) ;
    list<Operation>& ops() ;
    ResultLocation  flatten ( Cexpr* exp, Position pos ) ;
    ResultLocation  flattenDyadicOperation ( Cexpr* exp, Position pos ) ;
    ResultLocation  flattenMonadicOperation ( Cexpr* exp, Position pos ) ;
    ResultLocation  flattenCast ( Cexpr* exp, Position pos ) ;
    ResultLocation  flattenUnpack ( Cexpr *e, Position  pos  ) ;
    ResultLocation  flattenUMinus ( Cexpr *e, Position  pos  );
    ResultLocation  flattenAffectation ( Cexpr* exp, Position pos ) ;
    ResultLocation  flattenAffectationBF ( Cexpr* exp, Position pos ) ;
    ResultLocation  flattenPlusMinus ( Cexpr* exp, Position pos ) ;
    /** optimizer */
    void optimize() ;
    /** 2 levels peephole optimizer */
    int optimize2() ;
    /** 3 levels peephole optimizer */
    int optimize3() ;
    /** 4 levels peephole optimizer */
    int optimize4();
    /** optimize single test during flattening */
    enum TestResult optimizeTest();
    ResultLocation flattenIncDec ( Cexpr *e, Position pos );
    /** No descriptions */
    ResultLocation flattenInPlaceOperator ( Cexpr *e, Position pos );
    ResultLocation  flattenTest ( Cexpr *e, Position pos ) ;
    /** Clear operation table */
    void clear();
    /** No descriptions */
    void putComment ( const string &c );
    /** Search the next "active" operation from "from", and returns it in "to".
    Return true if succes.

    An active operation is everything except comment. */
    bool nextO ( list<Operation>::iterator& from,
                 list<Operation>::iterator& to,  list<Operation>::iterator& max );
    /** Flattener table concatenation. */
    Flatten& operator+= ( const Flatten& f );
    Flatten& append ( const Flatten& f ) { return operator+=(f);}
    Flatten getComments (); 
    /** No descriptions */
    ResultLocation flattenFunctionCall ( Cexpr * exp, Position pos );
    /** Special processing of sequence (,) operator */
    ResultLocation flattenSeq ( Cexpr * exp, Position pos );
    /** No descriptions */
    ResultLocation flattenLOr ( Cexpr * exp, Position pos );
    /** Flatten && operator */
    ResultLocation flattenLAnd ( Cexpr * exp, Position pos );
    /** No descriptions */
    ResultLocation flattenShifts ( Cexpr * exp, Position pos );
    /** No descriptions */
    ResultLocation flattenBitOp ( Cexpr * exp, Position pos, Operation::Code op ) ;

    /** Flatten ? :  operator */
    ResultLocation flattenCondOp ( Cexpr * exp, Position pos );
    /** Flatten compatisons of FP entities */
    ResultLocation flattenFPComparisons ( Cexpr *e );
    /** return the last inserted operation */
    Operation& lastOp() { return _ops.back() ; }

    void deleteOp( list<Operation>::iterator op) { deleteBlock(op,op); };
    void deleteBlock( list<Operation>::iterator from, list<Operation>::iterator to );
    bool seekToOperation( list<Operation>::iterator &i, Operation::Code code, string label );
    void eraseDeleted(void);

};

#endif
