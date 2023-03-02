/***************************************************************************
                          operation.h  -  description
                             -------------------
    begin                : dim mar 27 2005
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

#ifndef OPERATION_H
#define OPERATION_H

#include "centity.h"


/**One operation of the Abstact Machine
  *@author Gibaud Alain
  */
class Operation
{
  public:
    // Instructions for the cpik abstract machine
    enum Code { None,   // nop
                Deleted, // to help the optimizer to delete unused operations
                PutComment , // insert a comment str1 (echoed as asm comment to output flow)
                PutAsm , // insert a text echoed "as is" to output flow.
                // The _val param is used to specify how many bytes are pushed/popped on to/from  the stack
                // by the asm code
                EnterFunction, // enter function str1
                ExitFunction, // exit function str1
                MakeLocal, // make local data e1 on stack
                RemoveLocals, // remove val bytes from stack
                TouchStack , // manually alter compiler internal stack tracker variable
                // (do not generates any code)
                CleanStack , // remove unused data from stack (due to no-effect instruction)
                PushStack , // save the  current stack level (allows partial cleaning)
                Return0,    // return from void function
                PutLabel,   // put label str1
                GotoLabel,   // goto label str1

                TestN, // test e1, set bit Z if 0
                PopTestN,   // pop N*8 bit TOS, set bit Z if 0

                GotoLabelIf,   // jump to str1 if zero (val == 0) , if not zero (val ==1)
                CallFunction,    // call  function e1, then clean val bytes from stack
                PushBreakLabel,   // change the current break label
                PopBreakLabel,    // remove the current break label
                GotoBreakLabel,    // jump to the current break label
                PushContinueLabel,   // change the current continue label
                PopContinueLabel,    // remove the current continue label
                GotoContinueLabel,    // jump to the current continue label
                PushCaseLabel,   // change the current case label
                PopCaseLabel,    // remove the current case label
                GotoCaseLabel,    // jump to the current case label
                PutCaseLabel,   // place current case label
                CallTos,      // pops addr at TOS and call it

                PushN,  // push N bytes variable e1 to stack TODO DONE teste

                // Attention: if N=1, pushes W (not R0L)
                PushNR , // push N bytes data register to stack TODO DONE

                PushP,  // push pointer register to stack
                PopN,  // pop N bytes - store to variable e1 TODO teste N>4

                // Attention : stores to WREG if N == 1
                PopNR, // pop N bytes value - store to register TODO teste

                PopP ,  // pop address - store to pointer register
                Push8RL,   // push 8 bit R0L (not W)!)
                Pop8RL ,  // pop 8  bit, store to R0L (NOT W ! )
                Pop8R,    // pop 8  bit, store to WREG
                Mov8RLtoTos,  // move R0L to TOS
                MovNRtoTos , // move N bytes from R0 zone to TOS (ATTN: moves WREG if N==0)TODO DONE TESTED

                AddN , // TOS + REG -> TOS (N*8 bit)
                AddFP , // TOS + REG -> TOS (FP)
                Add16scale2,  // TOS + 2*REG -> TOS (16 bit)
                Add16scale4,  // TOS + 4*REG -> TOS (16 bit)
                SubN ,  // TOS - REG -> TOS (N*8 bit)
                SubFP,  // TOS - REG -> TOS (FP)
                Sub16scale2,  //  TOS - 2*REG -> TOS (16 bit)
                SubPtrScale2, //  (TOS - REG) / 2  -> TOS

                IndirectN, // pop ptr from stack - N bytes  deref - push result
                Mov8toR,  // move 8 bit variable e1 to WREG
                Mov8toRL, // move 8 bit variable e1 to data register R0L
                ExtendRL, // extends RL to RH (signed if val = 1)
                MovNtoR, // move N bytes variable e1 to data register

                MovRLto8, // move 8 bit RL to variable e1
                MovRtoN, // move N bytes  data register to variable e1

                Mov8RLtoR, // Move R0L to W
                MovAddrtoR, // move 16 bit address e1 to data register
                MovGlobAddrToGlob16, // move 16 bit global addr e1 to 16 bit variable e2

                PushPtrIndirectN, // N bytes dereferencement - push result

                // Attention: moves data to WREG if N = 1
                PtrIndirectNtoR, // N bytes dereferencement - store result to REG

                MovToP ,// move 16 bit variable/cst e1 to ptr register , then add val if != 0
                MovAddrToP ,// move adress variable  e1 + offset to ptr register
                MovTosToN, // move N byte from top of stack to var e1
                Cast8_16,  // cast TOS to 16 bit, signed  target
                Cast8_16U,  // cast TOS to 16 bit, unsigned target
                Cast16_8,  // cast TOS to 8 bit (sign independant)
                CastN_N,  // cast TOS to TOS src size =  _val, dest size = _nbytes (signed)
                CastN_NU, // cast TOS to TOS src size =  _val, dest size = _nbytes (unsigned)

                CastF_NU, // cast FP-TOS to TOS, src size = implicit, dest size = _nbytes (unsigned)
                CastF_N, // cast FP TOS to TOS, dest size = _nbytes (signed)
                CastNU_F, // cast TOS to FP-TOS, src size = _val, dest size = implicit (unsigned)
                CastN_F, // cast TOS to FP-TOS, src size = _val, dest size = implicit (signed)

                MovN,   // move block (or 8-->32 constant) to block (N bytes)
                MovConst8toR, // move 8 bit constant val to data register
                MovConst16toR, // move 16 bit constant val to data register
// TODO mov 32 bit const

                MulN , // TOS * REG -> TOS (N*8 bit)
                MulFP , // TOS * REG -> TOS (FP)


                DivN, // TOS / REG -> TOS (N*8 bit signed )
                DivNU,  // TOS / REG -> TOS (N*8 bit unsigned )
                DivFP,  // TOS / REG -> TOS (FP )

                ModN,       // TOS % REG -> TOS (N*8 bit, signed)
                ModNU,      // TOS % REG -> TOS (N*8 bit, unsigned)

                PopPtrIndirectN, // pop N bytes data and store it to *Ptr

                MovTosToPtrIndirectN,   // move N bytes TOS to *Ptr

                MovPtrIndirectNto,   // move *Ptr to e1 (N bytes)

                IndirectPopNR, // Pop TOS to PTR, then store *PTR to WREG or R0 block

                IndirectPop8RL, // Pop TOS to PTR, then store *PTR to R0L

                NegN,      // -TOS -> TOS N*8 bit
                NegF,   // -TOS -> TOS (FP)
                PushAddr, // push adress of entity e1 + offset in val
                LNot8xxx,  // !TOS -> TOS
                LNot16xxx,  // !TOS -> TOS
                LNotN,
                LNotFP,   // !TOSFP ->TOS (+-0.0 == false)

                BNotN, // ~TOS -> TOS

                IncN , // increment var e1 , (N*8) bit (e1 == 0 => Ptr indirect)

                DecN, // decrement var e1 , (N*8) bit (e1 == 0 => Ptr indirect)

                Inc16x2, // incrementation, scale factor == 2
                Dec16x2,  // decrementation, scale factor == 2
                Inc8TOS, // increment 8 bit TOS
                Dec8TOS, // decrement 8 bit TOS
                Inc16TOS, // increment 16 bit TOS
                Dec16TOS, // decrement 16 bit TOS

                Double8R, // x2 value of 8 bit REG
                Double16R, // x2 value of 16 bit REG
                Quad16R, // x4 value of 16 bit REG

                // in place operations, 8/16bits
                // for operation @, perform
                // ... e1 @= REG   if e1 != 0
                // ... *Ptr @= REG if e1 == 0   (Ptr is guaranteed unchanged)

                IPAddN,
                IPSubN,
                IPMulN,
                IPDivN,


                IPDivNU,

                IPModN,
                IPModNU,

                IPAddF, // in place float arithmetic
                IPSubF,
                IPMulF,
                IPDivF,


                CompareN,   // N*8 bit comparison,  val  specify the comparison type
                // enum CompareType

                CompareF,   // FP comparison,  val  specify the comparison type

                LShiftNU, // left shift, N*8 bit , unsigned
                RShiftNU, // right shift, N*8 bit , unsigned
                RShiftN,  // right shift, N*8 bit , signed

                // ++Jet
                LShiftN8U, // partial left shift by byte swapping, N*8 bit , unsigned
                RShiftN8U, // partial right shift by byte swapping, N*8 bit , unsigned
                RShiftN8,  // partial right shift by byte swapping, N*8 bit , signed
                // --Jet


                IPLShiftNU, // left shift, N*8 bit , unsigned
                IPRShiftNU, // right shift, N*8 bit , unsigned
                IPRShiftN,  // right shift, N*8 bit , signed

                BAndN, // bit AND
                BOrN,// bit OR
                BXorN ,// bit XOR

                IPBAndN, // In place Binary AND, N*8 bit
                IPBOrN, // In place Binary AND, N*8 bit
                IPBXorN, // In place Binary AND, N*8 bit


                PushPtr,  // push FSRx (x is _val, and can be 1 or 2) TODO DONE
                PopPtr,   // pop FSRx idem

                AddCst16PtrIndirect , // (*FSRx) += constant (x is _val, constant is _nbytes) DONE
                AddCst16Ptr , // add 16 bit signed offset in _val to Ptr
                AddCst8TOS16 ,   // add 8 bit unsigned offset to 16 bit value at TOS
                AddCst16TOS16 ,   // add 8 bit offset to 16 bit value at TOS (can be signed)
                MovPtrIndirectToPtr,  // Ptr = *Ptr
                MovPTo2 , // e1 = Ptr
                MovCstNTOPtrIndirect, // *Ptr = const (_nbytes = 1,2,3 or 4, value in _val )

                IBAndTest8, // e1 AND Cst8 (result is lost - Z set accordingly)
                IBIorTest8, // e1 IOR Cst8 (result is lost - Z set accordingly)
                IBXorTest8, // e1 XOR Cst8 (result is lost - Z set accordingly)

                DiscardR,   // tells to optimizer that the R is not needed

                // operations for bit fields support
                UpackU , // unpack a TOS bit-field to unsigned int (_bfsize, _bfoffset)
                Upack, // unpack a TOS bit-field to int (_bfsize, _bfoffset )
                UpackUW , // unpack  bit-field in W to unsigned int (_bfsize, _bfoffset)
                UpackW, // unpack   bit-field in W to int (_bfsize, _bfoffset )
                PopBF, // pop int8 on stack to BF entity (_bfsize, _bfoffset)
                MovTosToBF, // move a 8 bit data from TOS to bit field (_bfsize, _bfoffset)
                MovBF, // move a constant to BF. (_e1=cst, _e2=dest,  (_bfsize, _bfoffset) (_dest=0 <=> *Ptr))
                MovBFtoBF, // direct move from BF to BF (same BF size, operand NOT pointed to by Ptr) _e1 = src, _e2 = dst

            } ;
    // enum SpecialConstants { NoCst = 0x80000000 } ;
    enum CompareType
    {
      Ueq=0, Une, Ule, Uge, Ult, Ugt,
      Eq, Ne, Le, Ge, Lt, Gt,
      EqZero, NeZero, LeZero,  GtZero,

      RTL, // end of operations made by real time library
      True, False,
      LtZero, GeZero,
    };

    Code _code ;
    Centity _e1, _e2 ;
    int _val ;
    string _str1 ;
    int _nbytes ;
    bool _cstRhs ;
    int _bfsize, _bfoffset ;

    Operation ( Operation::Code code=Operation::None,
                Centity ent1=Centity(),
                Centity ent2=Centity(),
                int v=0,
                const string& = string() ) ;

    Operation ( Operation::Code code ,
                const string &s,
                int v=0 ) ;
    //  explicitely sized operations
    Operation ( int nbytes, Operation::Code code,
                Centity ent1,
                int v ) ;


    void dump ( ostream& os ) ;
    /** True is this operation generates code */
    bool isActive();
    /** True if this operation is an inconditional branch */
    bool isGoto();
    bool is ( Code  code, int sz );
    bool is ( Code  code );
    /** true if first arg is constant */
    bool hasConstant ( int& cst ) ;
    /** true if second arg is numeric constant (value in _val) */
    bool cstRHS ( ) ;
    /** mark RHS as constant */
    void setCstRHS ( int cst ) ;
    /** true when this operation operates on bit-field */
    bool isBF ( int& size, int& offset ) ;
    /** change the BF status */
    Operation& setBF ( int size, int offset ) ;

} ;

#endif
