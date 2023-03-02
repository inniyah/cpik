/***************************************************************************
                          asminstr.cpp  -  description
                             -------------------
    begin                : sam avr 23 2005
    copyright            : (C) 2005 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/

#include "asminstr.h"
#include "flatten.h"
#include "compiler.h"
#include "operation.h"

using namespace std ;

AsmInstr::AsmInstr(const string& a) : asmcode(a)
{
}
AsmInstr::~AsmInstr()
{
}
/** Generates code for this instruction */
void AsmInstr::flattenCode()
{
        c18.flattener()->insertOp(Operation(Operation::PutAsm,0,0,0, asmcode)) ;
}
/** Does various processings for this instruction */
const char * AsmInstr::process()
{
  if( asmcode == "") return "No code found in \"__asm__\" directive." ;
  return 0 ;
}
