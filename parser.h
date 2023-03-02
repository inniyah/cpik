/***************************************************************************
                          parser.h  -  description
                             -------------------
    begin                : mar fév 3 2004
    copyright            : (C) 2004 by Alain Gibaud
    email                : alain.gibaud@free.fr
 ***************************************************************************/


#ifndef PARSER_H
#define PARSER_H
#include <vector>
#include <stack>
#include <fstream>
#include <map>
using namespace std ;


class Ctype ;
class type ;
class Symtab ;
class CodeGen ;
class initializer ;
class Lexer ;
class File ;
class Compiler ;
class Cexpr ;
class Flatten ;
class Initializer ;

#include "centity.h"
#include "fctctx.h"

class Parser
{
  public:
    Parser();
    ~Parser();
    /** look for any blanks */
    bool needblk();
    /** look at blanks (excluding newlines) */
    bool needspc();

    /** Declaration parser */
    bool pDecl_0 ( entity::Storage storage ) ;
    bool pDecl_1 ( Ctype& typ, string& id, int& useraddr ) ;
    bool pDecl_2 ( Ctype& typ, string& id, int& useraddr ) ;

    /** formal function parameters parser */
    Ctype parseFormalParams_0() ;
    bool parseFormalParams_1 ( Ctype& typ, string& id ) ;
    bool parseFormalParams_2 ( Ctype& typ, string& id ) ;

    /** true if e has a correct semantics */
    bool verifySemantics ( Centity e ) ;

    /** run parser , return number of errors */
    int parse();

    /** print error location (file,line), then error text */
    void error ( const string& txt );
    void warning ( const string& txt );

    /** semicolon enforcer */
    bool ns();

    /** All is in the title */
    bool matchLitteral ( string& s );

    /** No descriptions */
    // TODO en sursis

    bool parseCompoundStaticInitializer_0 ( Initializer& ini )    ;
    bool parseCompoundStaticInitializer_1 ( Initializer& ini )    ;
    bool parseCompoundStaticInitializer_2 ( Initializer& ini )    ;


    bool parseSwitchBlock ( );
    bool parseBlock ( bool newcontext );
    /** No descriptions */
    bool parseInstruction();
    /** No descriptions */
    bool parseExpression ( Cexpr*& exp );
    /** Parse an instruction */
    bool exp0 ( Cexpr *& exp );
    bool exp1 ( Cexpr * & exp );
    bool exp2 ( Cexpr * & exp );
    bool exp3 ( Cexpr * & exp );
    bool exp4 ( Cexpr * & exp );
    bool exp5 ( Cexpr * & exp );
    bool exp6 ( Cexpr * & exp );
    bool exp7 ( Cexpr * & exp );
    bool exp8 ( Cexpr * & exp );
    bool exp9 ( Cexpr * & exp );
    bool exp10 ( Cexpr * & exp );
    bool exp11 ( Cexpr * & exp );
    bool exp12 ( Cexpr * & exp );
    bool exp13 ( Cexpr * & exp );
    bool exp14 ( Cexpr * & exp );
    bool primary ( Cexpr * & exp );
    const char * explicitBF ( Centity&  e ) ;
    bool actualParams ( vector<Cexpr *>& params );
    /** No descriptions */
    bool parseCast ( Ctype& target );
    /** No descriptions */
    bool parseType ( Ctype& the_type );
    /** No descriptions */
    bool parseBaseTypes ( Ctype& the_type );
    /** No descriptions */
    bool matchCharConst ( int &value );
    /** No descriptions */
    bool parseFunctionBody ( Centity fct );
    /** No descriptions */
    void message ( const string& mess );
    /** No descriptions */
    //  int fctStackLevel();
    /** No descriptions */
    bool parseLabel ( string& label );
    /** No descriptions */
    /** Eval a constant numeric  expression, reduce it to an int
    and attach  value to ent */
    bool evalStaticInitializer ( Centity& ent, Cexpr*& init ) ;
    const char * expr2StaticInitializer ( Cexpr*& init , Initializer& result ) ;

    /** Parse, Eval and fold  a constant numeric  expression  *** */
    bool parseStaticInitializer ( Initializer& cst ) ;
    /** Parse  an  expression, and generates the code to initialize ent with its result */
    bool evalDynamicInitializer ( Centity& ent, Cexpr*& init ) ;

    /** parse an integer constant expression */
    bool parseConstantIntegerExpression ( int& val ) ;


    FctCtx *curFct() ;

    void makeInitializerFromLitteral ( const string &s, initializer **node ) ;

    /** Replace current flattener with f.
    Return the previous flattener
    */
    Flatten * changeFlatten ( Flatten *f );
    /** No descriptions */
    bool parseCompound();
    /** Make a litteral (ie: initialized anonymous global array)
    from a string.
    Global entities table is searched first and equals litterals are merged.

    This optimization only works at a compilation unit level.

    (ie: same litteral in different compilation units are not merged)
    */
    Centity makeLitteral ( const string& s );

    /** clear the nested function parenthesis stack */
    void clearParStack() ;
    /** Look for a "firstsfr" pragma, and set the Code Generator accordingly
    */
    void getFirstSFR();
    bool parseStruct ( Ctype& t, type::Code what );
    bool parseEnum( Ctype& t );

  private:
    int errCount, warnCount;
    Lexer     *lx ;
    Symtab    *symbols ;
    // the function compilation context
    FctCtx    currentFct ;
    //    Centity    currentFct ;
    /** This stack of nesting counter is used to correctly parse operator ','
    in function actual parameters.
    Each level of the stack corresponds to a level of nested
    function calls.
    Each counter corresponds to the nesting level of parenthesis
    in function call parameters.

    At stack level 0, ',' operator is always enabled.
    At other levels, ',' is only enabled if counter is different from 0.

    */
    stack<int> nestPar;
    /** this counter is used by parser to see if break statement is acceptable */
    int breakable ; // break acceptable if != 0
    /** True if a "continue" instruction is legal in the current code region */
    int continueable;
    /** True if "case" instruction is legal */
    int caseable;
};

#endif


