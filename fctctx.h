/***************************************************************************
                          fctctx.h  -  description
                             -------------------
    begin                : lun avr 4 2005
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

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef FCTCTX_H
#define FCTCTX_H

#include "centity.h"

#include <map>
#include <string>
#include <set>
#include <stack>
#include "switchinstr.h"
using namespace std ;

/**Compilation context for a function
  *@author Gibaud Alain
  */

class SwitchCases
{
public:
  stack< list<int> > matrix;
  list<int> emptylist;

  void pushSwitch(void) 
  { 
    list<int> newtop;
    matrix.push ( newtop ) ;
  }
  void popSwitch(void) { if ( matrix.size() > 0 ) matrix.pop(); }
  list<int>& topSwitch(void) { emptylist.clear(); return ( matrix.size() > 0)?matrix.top():emptylist; }
  int topSwitchId(void) { return matrix.size(); }
  bool addCase(int c) 
  { 
    if ( hasCase(c) ) return false;
    topSwitch().push_back(c); 
    return true;
  }

// get list of all cases in natural order
  list<int> getCases(void) { return topSwitch(); }
#if 0
// get list of all cases expect the default
// the list is sorted by number BUT the first defined case is last in the list
// to allow to optimize the last test
  list<int> getCases(void)
  {
    list<int> ts=topSwitch();
    int theFirstCase=ts.front();
    ts.pop_front();
    ts.sort();
    if (ts.back() == CaseInstr::Default)
    {
      ts.pop_back();
    }
    if (theFirstCase != CaseInstr::Default)
    {
      ts.push_back(theFirstCase);
    }
    return ts;
  }
#endif
  bool hasCase(int c)
  {
    list<int>::iterator it;
    for (it=topSwitch().begin(); it!=topSwitch().end(); ++it)
    {
      if ( *it == c ) return true;
    }
    return false;
  }
  bool hasDefault(void)
  {
    list<int> ts=topSwitch();
    ts.sort();
    return ts.back() == CaseInstr::Default;
  }
  void clear(void)
  {
    while (!matrix.empty())
    {
      matrix.top().clear();
      matrix.pop();
    }
    emptylist.clear();
  }
  void dump(void)
  {
    int i=0;
    stack< list<int> > st2=matrix;
    while (!st2.empty())
    {
      i++;
      cout << i << ": ";
      list<int>::iterator i2;
      for (i2=st2.top().begin(); i2!=st2.top().end(); ++i2)
      {
        cout << *i2 << " ";
      }
      cout << endl;
      st2.pop();
    }
  }
};

class FctCtx
{
public:
  Centity theFct ;        /// ref to function entity
  int totalDataSize ;  /// total (ie: local+params datasize)
  int paramDataSize ;  /// only param data size
  string returnLabel ; /// unique return label
  map<string, int> labels ; /// user labels
  set<string> extRefs ; // external references
  stack<string> breakLabels ;
  stack<string> continueLabels ;
  stack<string> caseLabels ;
  SwitchCases   switchCases ;
  int litcpt ;

  void clear() ;
	FctCtx();
	~FctCtx();
  string currentFunctionName();
  /**
  Try to insert a new label for this function.
  Return 0 if Ok, else an error message
  */
  const char* declareLabel(const string &);
  /**
  Just mark label as "referenced"
  */
  void referenceLabel(const string& n);
  /**
  Analyse labels usage, and return an error message
  if any problem.
  */
  const char* analyseUserLabels();
  
  void updateTotalDataSize(Centity ent);
  
  int getTotalDataSize() ;
  /** Add an external reference for this function
 */
  void addExtRef(const string& s);
  /** Returns the set of external references for this function
 */
  set<string>& externs();
  /** Returns the newest break label
 */
  /** "break" management */
  void pushBreak(const string &b);
  string topBreak();
  string popBreak();
  
  /** "continue" management */
  void pushContinue(const string &c);
  string topContinue();
  string popContinue();
  /** "case" management */
  void pushCase(const string &c);
  string topCase();
  string popCase();
  /** No descriptions */
  Centity& fct();
};

#endif
