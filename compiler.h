/***************************************************************************
                          compiler.h  -  description
                             -------------------
    begin                : sam nov 20 2004
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


#ifndef COMPILER_H
#define COMPILER_H

#include <iostream>
#include <map>
#include <string>
using namespace std ;
class Flatten ;
class Symtab ;
class CodeGen ;

#define DEBUG_ASM_PRINT_JUMP_OPT_STAT 1
#define DEBUG_ASM_PRINT_LOG           2

#define RAM_PTR_OFFSET 0xf000 // offset for pointers to ram

#include "parser.h"
#include "lexer.h"
#include "symtab.h"
#include "linker.h"
#include "stringlist.h"

/**
  *@author Gibaud Alain
  */

class Assembler;

class Compiler
{
  public:
    Compiler();
    ~Compiler();
    /** Start parsing process : call preprocessor, parse preprocessed file */
    const char * compile();
    /** Link aleady compiled code */
    const char * link();
    /** optimize the jumps and assembly already linked code */
    const char * assembly(string in, string out);
    /** compile/link depending of informations collected by parseCommands */
    const char *go() ;
    /** simple command line parser */
    const char * parseCommandLine ( int argc, char **argv ) ;
    /** No descriptions */
    void outputGlobals();
    /** No descriptions */
    Lexer * lexer();
    /** No descriptions */
    Parser * parser();
    /** No descriptions */
    CodeGen *& codegen();
    /** No descriptions */
    Flatten *& flattener();
    /** No descriptions */
    Symtab * symtab();
    /** No descriptions */
    ofstream& out();
    /** No descriptions */
    ifstream& in();
    /** No descriptions */
    string uniqueSuffix();
    /** No descriptions */
    string currentFunctionName();
    /** No descriptions */
    string nakedFileName();
    /** Make an unique label with the form

    L18_<source_file_name>_<unique_number>
    */
    string uniqueLabel();
    /** No descriptions */
    map<string,string>& pragmas();
    /** Generates __config section if #pragma are used for
    defining config bits */
    const char * outputConfig();
    /** generates __idlocs section */
    const char * outputIdlocs();

    stringList& includePaths() ;
    /** No descriptions */
    const char * usage();
    void printVersion() ;

    /** Access to debug options
    Return the current debug state
    1 = abstract machine code before peephole optimization
    2 = abstract machine code after peephole optimization
    4 = dump expression tree on stdout
    */
    int & debugOpt();
    /** No descriptions */
    string getPragma ( const string& p );
    /**version of cpik */
    string version ( const string& v="" ) ;
    /** build a literal name from file name */
    string uniqueLiteralName();
    string  secureNakedFileName();
    
    int romSize;

  private:
    /**  various file names */
    string inFileName, outFileName, justFileName, deviceName  ;
    /** true if compilation only (option -c) */
    bool justCompile ;
    /** true -v option is present */
    bool justVersion ;
    /** true -a option is present */
    bool justAssembly ;

    /** the lexer */
    Lexer lexer_ ;

    /** the parser : emits trees for expressions or code for abstact machine */
    Parser parser_ ;

    /** the flattener : this object emits code for abstact machine from expression trees */
    Flatten *fl_ ;

    /** the code generator : this object emits asm code */
    CodeGen *cg_;

    /** the linker */
    Linker linker_ ;

    /** the assembler invoker and optimizer */
    Assembler *assembler_;

    /** base addr for global objects in RAM -
    addr from 0 to  globalsBaseAddr-1 are reserved for compiler usage */
//    int globalsBaseAddr;
    /** symbol table */
    Symtab symtab_ ;
    /** output file (ie: asm file) */
    ofstream out_ ;
    /** input file (ie: preprocessed C file) */
    ifstream in_ ;
    /** Used to generate unique labels */
    int uniqueID_;
    /** Store pragma(s) detected by File class */
    map<string,string> pragmas_;
    /** include Paths */
    stringList includepaths_ ;
    /** defines Paths */
    stringList defines_ ;
    /** store current debug option (developer only)  */
    int debugOpt_;
    /** compiler version  */
    string version_ ;

    /** counter for unique literal name generation */
    int uniqueLitID_ ;

};

extern Compiler c18 ;

#endif
