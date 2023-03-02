/***************************************************************************
                          fctctx.cpp  -  description
                             -------------------
    begin                : lun avr 4 2005
    copyright            : (C) 2005 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/

#include "fctctx.h"
#include "utility.h"

FctCtx::FctCtx()
{
  clear() ;
}
FctCtx::~FctCtx()
{
}

void FctCtx::clear()
{
  labels.clear() ;
  extRefs.clear() ;
  while(! breakLabels.empty()) breakLabels.pop() ;
  while(! continueLabels.empty()) continueLabels.pop() ;
  while(! caseLabels.empty()) caseLabels.pop() ;
  paramDataSize = totalDataSize = 0 ;
  returnLabel = "" ;
  theFct.detach() ;
  litcpt = 0 ;
  switchCases.clear();
}

/** No descriptions */
string FctCtx::currentFunctionName()
{
  return theFct ? theFct->name() : "" ;
}
/** Try to insert a new label for this function.
Return 0 if Ok, else an error message
*/
/*
Code for label status:
bit 0 set == created
bit 1 set == referenced
*/

const char* FctCtx::declareLabel(const string &n)
{
  if( labels[n] & 1 ) return utility::setMessage("Duplicate label '"+n+"'.") ;
  labels[n] |= 1 ; // mark as created
  return 0 ;
}


/** Just mark label as "referenced" */
void FctCtx::referenceLabel(const string& n)
{
  labels[n] |= 2 ; // mark as referenced
}
/** Analyse labels usage, and emit an error message
if any problem.
 */
const char * FctCtx::analyseUserLabels()
{
  map<string,int>::const_iterator p ;

  for( p = labels.begin() ; p != labels.end() ; ++p)
  {
    int st =   (*p).second ;
    if( (st & 1) == 0 )
      return utility::setMessage( "Undefined label '"+ (*p).first + "'.") ;
    else if((st & 2) == 0 )
      return utility::setMessage( "\tUnused label '"+ (*p).first + "'.") ;
  }
  return 0 ;
}
/** No descriptions */
void FctCtx::updateTotalDataSize(Centity ent)
{
  if( ent->isLocal() )
  {
    int k = ent->addr() + ent->sizeOf() ;
    if( k > totalDataSize) totalDataSize = k ;
  }
}

int FctCtx::getTotalDataSize()
{
  return totalDataSize ;
}
/** Add an external reference for this function
 */
void FctCtx::addExtRef(const string& s)
{
  extRefs.insert(utility::stripOffset(s) );
}
/** Returns the set of external references for this function
 */
set<string>& FctCtx::externs()
{
    return  extRefs ;
}
/** Pushes a new break label */
void FctCtx::pushBreak(const string &b)
{
  breakLabels.push(b) ;
}
/** Pops the latest break label and returns it
 */
string FctCtx::popBreak()
{
  string l   ;
  if( !  breakLabels.empty())
  {
    l =  breakLabels.top() ;
    breakLabels.pop() ;
  }
  return l ;
}
/** Returns the newest break label
 */
string FctCtx::topBreak()
{
  string l   ;
  if( !  breakLabels.empty())
  {
    l =  breakLabels.top() ;
  }
  return l ;
}
/** Pushes a new continue label */
void FctCtx::pushContinue(const string &b)
{
  continueLabels.push(b) ;
}
/** Pops the latest continue label and returns it
 */
string FctCtx::popContinue()
{
  string l   ;
  if( !  continueLabels.empty())
  {
    l =  continueLabels.top() ;
    continueLabels.pop() ;
  }
  return l ;
}
/** Returns the newest continue label
 */
string FctCtx::topContinue()
{
  string l   ;
  if( !  continueLabels.empty())
  {
    l =  continueLabels.top() ;
  }
  return l ;
}
/** Pushes a new case label */
void FctCtx::pushCase(const string &b)
{
  caseLabels.push(b) ;
}
/** Pops the latest case label and returns it
 */
string FctCtx::popCase()
{
  string l   ;
  if( !  caseLabels.empty())
  {
    l =  caseLabels.top() ;
    caseLabels.pop() ;
  }
  return l ;
}
/** Returns the newest case label
 */
string FctCtx::topCase()
{
  string l   ;
  if( !  caseLabels.empty())
  {
    l =  caseLabels.top() ;
  }
  return l ;
}
/** No descriptions */
Centity& FctCtx::fct()
{
  return theFct ;
}
