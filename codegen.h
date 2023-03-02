
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef CODEGEN_H
#define CODEGEN_H

#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std ;

class Flatten ;
class entity ;
class Symtab ;
class Compiler ;
class Operation ;

#include "centity.h"
#include "utility.h"

/**
  *@author Gibaud Alain
  */

class CodeGen
{
  public:
    CodeGen();
    ~CodeGen();

    ostream &output();
    void makeCode ( Flatten& f ) ;
    void emitTxt ( const string& iname );
    void emitGlobalSymbol ( Centity& e );
    void emitExternalReference ( const string& ref ) ;
    void emitLabel ( const string& lab );
    void emitComment ( const string& comm );
    void callRTL ( const string &, bool invalidW = true );
    void emitPushCst8 ( int cst ) ;
    void emitMovCst8To ( int cst, const string& to, bool page0 = false )  ;
    void emitMovCstToW ( int cst, bool hexa=false ) ;
    void setW ( int cst ) { emitMovCstToW ( cst );  };
    void setWX ( int cst ) { emitMovCstToW ( cst, true );  };
    void emitMovCstToBSR ( const string& target ) ;
    /**
     Emit a "load BSR" instruction, if needed

    side effect:
    symbol =
    the entity symbol (ie: C18_xxx+offset)

    access =
     "0" if access bank
     "1" if  access via BSR
    */
    void emitLoadBSR ( Centity e , int offset, string& symbol, string& access )   ;

    void emitMovAddrToR ( Centity e1, int offset = 0 ) ;
    void emitMovAddrToP ( Centity e1, int offset = 0 , bool preserve_W = false );
    void emitMovGlobAddrToGlob16 ( Centity e1, int off, Centity e2 ) ;
   // void emitMovGlobAddrToGlob16 ( Centity e1,  Centity e2 ) ;
    void emitPushAddr ( Centity e1, int offset );
    void emitMakeLocal ( Centity e1 );
    void emitFctProlog ( Operation& op );
    void emitFctEpilog ( Operation& op );
    void emitCleanLocalData ( int k );
    void emitMovCst16ToLocal ( int val, int off );
    void emitMovCst8ToLocal ( int val, int off );
    void emitLShift8u ( int k );
    void emitRShift8u ( int k );
    void emitMovPtrIndirectTo ( Centity e1 );
    string high(const string& s, int offset=0) ;
    string low(const string& s, int offset=0) ;

    /**
    Return the current offset for the variable e.
    For local variable, this offset is always negative or zero
    because the variable itself consume space on the stack.
    Due to stack activity during expressions evaluation, the offset
    of a given entity might change at any time.

    return 0 for non local entity (ie: glob variables and functions)
     */
    int varOffset ( Centity e );
    /** No descriptions */
    int& firstSFR();
	void emitIPBandN ( Operation &op ) ;
	void emitIPBorN ( Operation &op ) ;
	void emitIPBxorN ( Operation &op ) ;



    /** No descriptions */
    void emitMovCst16ToR ( int val );
    /**
    if byte k has only one "zero" bit , return that bit number [0..7]
    else if ALL bits are zeros return -2
    else if NO bit is zero, return -3
    else return -1

    */
    static int bitZero ( int k );
    /**
    if byte k has only one "one" bit, return that bit number [0..7]
    else if ALL bits are ones return -2
    else if NO bit is one return -3 ;
    else return -1 (more than one bit
    */
    static int bitOne ( int k );

    /** code for AND with constant on target register
    return the "bitZero" code for this constant
    */
    int emitBAndByte ( int cst , const string& target ) ;
    void emitBAnd8 ( int k , bool cst );
    void emitBAnd16 ( int k , bool cst );
    void emitBAnd32 ( int k , bool cst ) ;

    /** binary OR */
    int emitBOrByte ( int cst , const string& target ) ;
    void emitBOr8 ( int k , bool cst );
    void emitBOr16 ( int k , bool cst );
    void emitBOr32 ( int k , bool cst ) ;

    /** binary XOR */
    int emitBXorByte ( int cst , const string& target ) ;
    void emitBXor8 ( int k , bool cst );
    void emitBXor16 ( int k , bool cst );
    void emitBXor32 ( int k , bool cst );

    /** True if address a is in access bank
    ie:  0 <= a <= 0x7F or
    0xF80 <= a <= 0xFFF
    (TODO: might be controlled by option or pragma)
    */
    bool accBank ( int a );
    /* true is an entity is reachable via access bank */
    bool accBank ( Centity& e )  ;
    /** Emit a load W with constant,
    if constant is != 0.

    Return "PLUSW0" string if constant !=0
    or "INDF0" if constant == 0

    This allows stack access optimization

     */
    string emitStackOff ( int k );
    void emitCleanStack ( int cnt );

    void emitIPAddSubN ( Operation& op ) ;
    void emitIPAddSub8( Operation& op ) ;
    void emitIPAddSub16 ( Operation& op ) ;
    void emitIPAddSub32 ( Operation& op ) ;

    void emitIPMulN ( Operation& op ) ;
    void emitIPDivModN ( Operation& op ) ;
    void emitIPAddSubMulDivF ( Operation& op ) ;

    void emitIPRLShiftN ( Operation& op ) ;

    /** Buid a global name for u user symbol (prepend C18_)
    AND store this symbol as an external reference.
    */
    string mkGlob ( const string &n, int offset=0 );
    /**
     * Reserve sz bytes on the stack
      */
    void emitReserveLocalData (int sz );
    /** utility routines */
    void gen ( const string &s );
    void emitGetLNA( int negoffset );
    void lab ( const string& s );
    string i2s ( int i ) { return utility::toString ( i )  ; }
    void emitMovNToR ( Centity e1, int sz, int val );
    int byte ( int k, int bytenum ) ;
    void emitP1toP2();

    void emitSwitch( string label, string cases );
    void emitSwitch( string label, list<int> &cases );
    void emitJumpSwitch(int *offset, string label, list<int> &cases );
    void emitTableSwitch(string label, int tablenr, int *sc, int offset, int len, int Woffset, string nextlabel);
    void emitCombinedSwitch( string label, list<int> &cases );
    int  switchFindBlock(int *table, int *offset);

    void emitCompareN( Operation &op );
    void emitCompareF( Operation &op );

    // code generation for bit bield support
    void emitUnpackUBF ( int offset, int size ) ;
    void emitUnpackBF ( int offset, int size )  ;
    void emitUnpackUBFW ( int offset, int size ) ;
    void emitUnpackBFW ( int offset, int size )  ;
    void emitStackToBF ( Centity& e, int  off,  int sz , bool dopop) ;
    void emitMovBF ( Centity& dest,  int value, int  off,  int sz ) ;
    void emitMovBFtoBF ( Centity& src, Centity& dst ) ;
    void emitInc8 (const string&  target, const string& access, int bsize, int boffset ) ;
    void emitDec8 (const string&  target, const string& access, int bsize, int boffset ) ;
    int BFMask(int bsize, int boffset = 0 ) ;
    void reset();
    bool  faststackPragma() ;

  private: // Private attributes

    ostream& out ;
    /** Pointer to the entity which contains the last computed result.
    As result are generally sored in working register or stack,
    this information is rarely used.
    */
    Symtab&  symbols ;
    /** keeps track of stack usage during compilation of expressions */
    int stk;
    /** keeps track of extra data added on the stack by asm code */
    int extrastk ;

    /** Stack of stack levels during code generation : allows to remember and to go 
        back to a stack level other than zero
    */
    stack<int , vector<int> > stkStack ;

    /** W tracking flag : true => W is up to date */
    bool Wvalid ;
    /** W tracking value (valid if Wflag == true) */
    signed char W ;

    /** Address of the first SFR
    (used for accessing SFRs thru access bank)
    */
    int firstSFR_;

    /** current function name  (maintened by fct prlolog/epilog)  */
    string currentFuncName ;
};

#endif
