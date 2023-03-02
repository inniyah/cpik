/***************************************************************************
                          operation.cpp  -  description
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

#include "operation.h"

// --------------------- Operation class code ---------------------------
void Operation::dump ( ostream& os )
{
  static const char *n[] =
  {
    "None",
    "Deleted",
    "PutComment",
    "PutAsm",
    "EnterFunction", "ExitFunction",
    "MakeLocal",
    "RemoveLocals",
    "TouchStack",
    "CleanStack" ,
    "PushStack" ,
    "Return0",
    "PutLabel",
    "GotoLabel",
    "TestN",
    "PopTestN",
    "GotoLabelIf",
    "CallFunction",
    "PushBreakLabel", "PopBreakLabel", "GotoBreakLabel",
    "PushContinueLabel", "PopContinueLabel", "GotoContinueLabel",
    "PushCaseLabel", "PopCaseLabel", "GotoCaseLabel", "PutCaseLabel",
    "CallTos",

    "PushN",  "PushNR", "PushP",
    "PopN to ", "PopNR", "PopP" ,
    "Push8RL", "Pop8RL",
    "Pop8R",
    "Mov8RLtoTos",
    "MovNRtoTos" ,

    "AddN", "AddFP", "Add16scale2" , "Add16scale4" ,
    "SubN",  "SubFP", "Sub16scale2" ,
    "SubPtrScale2" ,
    "IndirectN" ,
    "Mov8toR",
    "Mov8toRL",
    "ExtendRL",
    "MovNtoR",
    "MovRLto8",
    "MovRtoN",
    "Mov8RLtoR",
    "MovAddrToR",
    "MovGlobAddrToGlob16",
    "PushPtrIndirectN",
    "PtrIndirectNtoR",
    "MovToP", "MovAddrToP",
    "MovTosToN",
// integer casts
    "Cast8_16", "Cast8_16U", "Cast16_8" ,
    "CastN_N", "CastN_NU",
// FP casts
    "CastF_NU", "CastF_N",
    "CastNU_F", "CastN_F",

    "MovN",
    "MovConst8toR", "MovConst16toR",
    "MulN", "MulFP",
    "DivN",  "DivNU", "DivFP" ,
    "ModN", "ModNU",

    "PopPtrIndirectN",

    "MovTosToPtrIndirectN",

    "MovPtrIndirectNto",

    "IndirectPopNR",

    "IndirectPop8RL",

    "NegN",
    "NegF",
    "PushAddr",
    "LNot8xxx", "LNot16xxx", "LNotN", "LNotFP",

    "BNotN" ,

    "IncN",
    "DecN",

    "Inc16x2" , "Dec16x2" ,
    "Inc8TOS", "Dec8TOS",
    "Inc16TOS", "Dec16TOS",
    "Double8R", "Double16R", "Quad16R",

    "IPAddN",
    "IPSubN",
    "IPMulN",
    "IPDivN",

    "IPDivNU" ,
    "IPModN",
    "IPModNU" ,

    "IPAddF",
    "IPSubF",
    "IPMulF",
    "IPDivF",

    "CompareN",
    "CompareF",

    "LshiftNU",
    "RshiftNU",
    "RshiftN",
// ++Jet
    "LShiftN8U", // partial left shift by byte swapping, N*8 bit , unsigned
    "RShiftN8U", // partial right shift by byte swapping, N*8 bit , unsigned
    "RShiftN8" ,  // partial right shift by byte swapping, N*8 bit , signed
// --Jet
    "IPLshiftNU",
    "IPRshiftNU",
    "IPRshiftN",



    "BAndN",
    "BOrN" ,
    "BXorN" ,

    "IPBAndN",
    "IPBOrN",
    "IPBXorN",


    "PushPtr", "PopPtr" ,
    "AddCst16PtrIndirect",
    "AddCst16Ptr",
    "AddCst8TOS16",  "AddCst16TOS16",
    "MovPtrIndirectToPtr",
    "MovPTo2",
    "MovCstNTOPtrIndirect",
    "IBAndTest8" ,
    "IBIorTest8",
    "IBXorTest8",

    "DiscardR",
    // op for bit-field support
    "UpackU",
    "Upack",
    "UpackUW",
    "UpackW",
    "PopBF",
    "MovTosToBF",
    "MovBF",
    "MovBFtoBF",
  } ;
  static const char *compareNames[]=
  {
    "Ueq", "Une", "Ule", "Uge", "Ult", "Ugt",
    "Eq", "Ne", "Le", "Ge", "Lt", "Gt",
    "EqZero", "NeZero", "LeZero",  "GtZero",

    "RTL", // end of operations made by real time library
    "True", "False",
    "LtZero", "GeZero",
  } ;
  const char *s = ( _code >= 0 && _code < ( int ) ( sizeof ( n ) /sizeof ( *n ) ) ) ? n[_code] : "BAD CODE" ;

  os << s << " " ;
  if ( _e1 )
  {
    os << _e1->prettyPrint() << " " ;
  }
  os << flush ;
  if ( _e2 )
  {
    os << _e2->prettyPrint() <<" " ;
  }
  os << flush ;
  if ( _code == CompareN && _val >= 0
       && _val < ( int ) ( sizeof ( compareNames ) /sizeof ( *compareNames ) ) )
  {
    os << compareNames[_val] << " " ;
  }
  else if ( _val != 0 )
  {
    os << "K = " << _val << " " ;
  }
  if ( _nbytes != 0 ) os << "SZ = " << _nbytes << " " ;
  os << flush ;
  if ( _str1 != "" )
  {
    os << "STR = [" ;
    // multiline strings must be considered as comments by assembler,
    // so newlines must be followed by a ;
    for ( unsigned int k = 0 ; k < _str1.size() ; ++k )
    {
      os << _str1[k] ;
      if ( _str1[k] == '\n' ) os  << ";" ;
    }
    os << "] " ;
  }
  if( _bfsize != 0) os << "[." << _bfoffset << ":" << _bfsize << "]" ;
  os << flush ;
}

Operation::Operation ( Operation::Code code, Centity ent1, Centity ent2, int v,const string& s ) :
    _code ( code ), _e1 ( ent1 ) , _e2 ( ent2 ) , _val ( v ), _str1 ( s ), _nbytes ( 0 ), _cstRhs ( false ),
    _bfsize ( 0 ), _bfoffset ( 0 )
{

}

Operation::Operation ( Operation::Code code, const string& s, int v ) :
    _code ( code ), _e1 ( 0 ) , _e2 ( 0 ) , _val ( v ), _str1 ( s ), _nbytes ( 0 ), _cstRhs ( false ),
    _bfsize ( 0 ), _bfoffset ( 0 )
{

}

Operation::Operation ( int nbytes, Operation::Code code, Centity ent1, int val ) :
    _code ( code ), _e1 ( ent1 ) , _e2 ( 0 ) , _val ( val ), _str1 ( "" ),  _nbytes ( nbytes ), _cstRhs ( false ),
    _bfsize ( 0 ), _bfoffset ( 0 )
{

}

/** No descriptions */
bool Operation::isActive()
{
  return _code != PutComment && _code != TouchStack && _code != Deleted;
}
/** True if this operation is an inconditional branch
 */
bool Operation::isGoto()
{
  return
    _code == GotoLabel ||
    _code == GotoCaseLabel ||
    _code == GotoContinueLabel ||
    _code == GotoBreakLabel ;
}



/*!
    \fn Operation::is(int code, int sz)
 true if operation code and size match
 */
bool Operation::is ( Code code, int sz )
{
  return ( _code == code ) && ( _nbytes == sz ) ;
}
/*!
    \fn Operation::is(int code)
 true if operation code  matches
 */
bool Operation::is ( Code code )
{
  return ( _code == code )  ;
}
/*!
    \fn Operation::hasConstant ( int& cst )
 true if operation uses a constant as first argument
 */

bool Operation::hasConstant ( int& cst )
{
  bool r = false ;
  if ( _e1 == 0 )
  {
    cst = _val ;
    r = true ;
  }
  else if ( _e1->isConstant() )
  {
    cst = _e1->value() ;
    r = true ;
  }
  return r ;
}

bool Operation::cstRHS ( )
{
  return _cstRhs ;
}

void Operation::setCstRHS ( int cst )
{
  _cstRhs = true ;
  _val = cst ;
}
/** return true if the current operation concern a bit-field 
    (bsize and boffset are set accordingly)
*/
bool Operation::isBF ( int& bsize, int& boffset )
{
    bsize = _bfsize ;
    boffset = _bfoffset ;
    return bsize ;
}

Operation&  Operation::setBF ( int bsize, int boffset )
{
  _bfsize = bsize ;
  _bfoffset = boffset ;
  return *this ;
}
