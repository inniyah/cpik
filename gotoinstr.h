/***************************************************************************
                          gotoinstr.h  -  description
                             -------------------
    begin                : mer mar 30 2005
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

#ifndef GOTOINSTR_H
#define GOTOINSTR_H
#include  <string>
using namespace std ;

#include "instruction.h"

/**Process label and goto instructions
  *@author Gibaud Alain
  */

class GotoInstr : public Instruction  {
  string label ;
  int what ;
public:
	GotoInstr(const string& label, int what);
	virtual ~GotoInstr();
  /** Does various processings for this instruction */
  virtual const char *process();
  /** Generates code for this instruction */
  virtual void flattenCode();
};

#endif
