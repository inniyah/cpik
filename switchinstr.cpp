
/***************************************************************************
                          switchinstr.cpp  -  description
                             -------------------
    begin                : 2011
    copyright            : (C) 2011 by Gibaud Alain, Josef Pavlik
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

#include "switchinstr.h"
#include "flatten.h"
#include "cexpr.h"
#include "operation.h"
#include "compiler.h"
#include "utility.h"

// fixme - check sizeof()
 
SwitchInstr::SwitchInstr(Cexpr *e, Flatten *f) : sw(e), block(f)
{
}
SwitchInstr::~SwitchInstr()
{
  delete sw ;
  delete block ;
}
/** Generates code for this instruction */
void SwitchInstr::flattenCode()
{
  string casesString;

  list<int> cases=c18.parser()->curFct()->switchCases.getCases();
  list<int>::iterator it;
  for (it=cases.begin(); it!=cases.end(); ++it)
  {
    casesString+=(casesString.empty()?"":" ") + utility::toString(*it);
  }
  c18.flattener()->insertOp(Operation(Operation::PushBreakLabel,exitLabel))  ;
  c18.flattener()->insertOp(Operation(Operation::PushCaseLabel,caseLabel))  ;

  c18.flattener()->flatten(sw,Root) ;
// value is in R0L, transfer it to W 
  c18.flattener()->insertOp ( Operation ( Operation::Mov8RLtoR ) ) ;


  c18.flattener()->insertOp(Operation(Operation::GotoCaseLabel,casesString,0)) ;
  (*c18.flattener()) += *block ;
  c18.flattener()->insertOp(Operation(Operation::PutLabel,exitLabel))  ;
  if ( !c18.parser()->curFct()->switchCases.hasDefault() )
  {
    c18.flattener()->insertOp(Operation(Operation::PutCaseLabel,"default" )) ;
  }

  c18.flattener()->insertOp(Operation(Operation::PopCaseLabel))  ;
  c18.flattener()->insertOp(Operation(Operation::PopBreakLabel))  ;

  c18.parser()->curFct()->switchCases.popSwitch();

}
/** Does various processings for this instruction */
const char * SwitchInstr::process()
{
  string label = c18.uniqueLabel() ;
  caseLabel =  label+"_case";
  exitLabel =  label+"_exit" ;
  // insert a keep pseudo operator
  // move value to R0 
  Cexpr *cond1= Cexpr::newCexpr(Cexpr::Keep,sw) ;
  sw = cond1 ;

  return sw->process() ;
}




CaseInstr::CaseInstr(int able, int c) : caseable(able)
{
  cst = (unsigned)c & 0xff;
}
CaseInstr::CaseInstr(int able) : caseable(able) // default
{
  cst = Default;
}
CaseInstr::~CaseInstr()
{
}
/** Generates code for this instruction */
void CaseInstr::flattenCode()
{
  string labelSuffix=(cst==Default)?"default":utility::toString(cst);
  c18.flattener()->insertOp(Operation(Operation::PutCaseLabel,labelSuffix )) ;
}
/** Does various processings for this instruction */
const char * CaseInstr::process()
{
  if (caseable)
  {
    if (! c18.parser()->curFct()->switchCases.addCase(cst))
    {
      return "Duplicate case.";
    }
  }
  return caseable > 0 ? 0 : "'case' statement not within switch." ;
}

