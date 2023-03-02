/***************************************************************************
                          parser.cpp  -  description
                             -------------------
    begin                : mar fï¿½v 3 2004
    copyright            : (C) 2004 by Alain Gibaud
    email                : alain.gibaud@free.fr
 ***************************************************************************/

#include "parser.h"
#include <ctype.h>
#include <iostream>
#include <iterator>
#include <sstream>
using namespace std ;

#include "file.h"
#include "centity.h"
#include "staticbuffer.h"
#include "xctype.h"
#include "flatten.h"
#include "compiler.h"
#include "codegen.h"
#include "cexpr.h"
#include "operation.h"
#include "utility.h"

#include "exprinstr.h"
#include "returninstr.h"
#include "gotoinstr.h"
#include "whileinstr.h"
#include "dowhileinstr.h"
#include "breakinstr.h"
#include "continueinstr.h"
#include "ifinstr.h"
#include "forinstr.h"
#include "asminstr.h"
#include "switchinstr.h"

#include "initializer.h"

Parser::Parser()
{
  errCount = warnCount = 0 ;
  breakable = continueable = caseable = 0 ;
}
Parser::~Parser()
{
}
void Parser::clearParStack()
{
  while ( nestPar.size() != 0 ) nestPar.pop() ;
}


int Parser::parse()
{

  errCount = warnCount = 0 ;
  lx      = c18.lexer()  ;
  symbols = c18.symtab() ;

  clearParStack() ;  // clear nested calls stack

  nestPar.push ( 0 ) ;

  while ( lx->blk(),  lx->ch() != EOF )
  {
    if ( !pDecl_0 ( entity::Global ) )
    {
      string msg ( "Parse error before \""+lx->nextChars ( 10 ) +"\"." ) ;

      error ( msg ) ;
      lx->zap() ;
    }
    if ( errCount >= 6 )
    {
      error ( "Too many errors, compilation aborted." ) ;
      break ;
    }
  }
  return errCount ;
}


bool Parser::pDecl_0 ( entity::Storage storage )
{
  Ctype ty, root  ;
  string id ;
  int useraddr ;
  bool isextern  ;
  bool isinterrupt ;
  bool isstatic ;
  bool istype;
  Cexpr *init ;
  bool parseinitializerOK ;
  Initializer staticInit ;


  isextern = isstatic = isinterrupt = istype = false ;
  lx->blk() ;
  isinterrupt =  lx->kmatch ( "__interrupt__" ) ;
  lx->blk() ;
  // these qualifiers are mutually exclusive
  ( isextern =  lx->kmatch ( "extern" ) ) ||
  ( isstatic =  lx->kmatch ( "static" ) ) ||
  ( istype =  lx->kmatch ( "typedef" ) ) ;
  lx->blk() ;

  if ( !parseBaseTypes ( root ) ) return false ;

  // const might be placed before or after type
  for ( ;; )
  {
    ty = root ;

    parseinitializerOK = false ;

    lx->blk() ;
    if ( lx->kmatch ( "const" ) ) ty->constness() = 1 ;

    if ( pDecl_1 ( ty, id, useraddr ) )
    {
      // definition or declaration found

      // for static local variables,
      // make a function-specific identifier and move it to global storage
      if ( isstatic && curFct()->fct() != 0 )
      {
        id = curFct()->fct()->name() +"#"+id ;
        storage =  entity::Global ;
      }

      Centity ent ( id, storage ) ;
      ent->thetype() = ty ;

      // if user-defined address, set the address
//    if ( useraddr>=0 ) useraddr += RAM_PTR_OFFSET; // flag the ram pointer
      if ( ent->isGlobal() ) ent->addr() = useraddr ;

      // if __interrupt__ fct, modify type
      if ( isinterrupt && ty->isFct() ) ty->setItHandler() ;

      // choose extern, normal or static ot typdef(ined) class
      if ( isextern )
        ent->theclass() = entity::Extern ;
      else if ( isstatic )
        ent->theclass() = entity::Static ;
      else if ( istype )
      {
        ent->theclass() = entity::Type ;
        ent->storage()  = entity::None ;
      }

      init = 0 ;

      // fct always extern  TODO implement static functions.
      if ( ty->isFct() ) // functions are extern by default
        ent->theclass() = entity::Extern ;
      else if ( ( ty->isArray() || ty->isStruct() || ty->isUnion() ) && ( isstatic || storage ==  entity::Global ) )
      {
        // global or static arrays initializers
        Initializer cc ;
        if ( parseCompoundStaticInitializer_0 ( cc ) )
        {
          // fix type of initializer - if needed, and if possible
          const char* msg = cc.fixType ( ty ) ;
          if ( msg != 0 )
          {
            error ( msg ) ;
            return false ;
          }
          ent->getInitializer() = cc ;
        }
      }
      else if ( !ent->isType() )
      {

        lx->blk()   ;
        if ( lx->match ( "=" ) )
        {
          lx->blk() ;
          // , operator invalidation
          nestPar.push ( 0 ) ;
          parseinitializerOK = parseExpression ( init )  ;
          nestPar.pop() ;
        }
        else if ( ent->isReadOnly() )
        {
          error ( utility::setMessage ( "Uninitialized const '"+ ent->name() +"'." ) ) ;
          return false  ;
        }
      }


      if ( verifySemantics ( ent ) )
      {
        bool isfuncdef = ty->isFct() && lx->blk() && lx->ch() == '{' ;

        if ( isfuncdef )  // turn entity as a function definition
          ent->theclass()  = entity::Normal ;

        const char *stat = symbols->insertEntity ( ent, isstatic ) ;

        if ( stat != 0 )
        {
          error ( stat ) ;
        }
        else
        {
          // is it a function definition ?
          if ( isfuncdef )
          {
            // TODO : signal error
            parseFunctionBody ( ent ) ;
          }
          else if ( parseinitializerOK && ( isstatic || storage ==  entity::Global ) )
          {
            evalStaticInitializer ( ent, init ) ;
          }
          else if ( storage == entity::Auto )
          {
            // ATTN: stack frame size evaluation may cause problem
            // if authentic initialization (ie: not affectation) is implemented later
            currentFct.updateTotalDataSize ( ent ) ; // ATTENTION
            if ( parseinitializerOK )
              evalDynamicInitializer ( ent, init ) ;
          }
        }
      }
    }
    else
    {
      break ;
    }
    lx->blk() ;
    if ( ! lx->match ( "," ) ) break ;
  }
  return ns() ;
}


bool Parser::pDecl_1 ( Ctype& typ, string& id, int& useraddr )
{
  int constness = 0 ;
  while ( lx->blk(), lx->ch() == '*' )
  {
    lx->gch() ;
    constness = lx->kmatch ( "const" ) ;
    Ctype sub = Ctype ( type::Ptr, 0, constness ) ;
    sub->subtype() = typ ;
    typ = sub ;
    constness = 0 ;
  }

  return   pDecl_2 ( typ, id,  useraddr ) ;
}

bool Parser::parseConstantIntegerExpression ( int& val )
{
  const char *r ;
  Cexpr *init = 0 ;
  nestPar.push ( 0 ) ;
  bool ok = parseExpression ( init )  ;
  nestPar.pop() ;

  if ( ok )
  {
    r = init->propagateTypes() ;
    if ( r )
    {
      delete init ; init = 0 ;
      error ( r ) ;
      return false ;
    }
    else
    {
      int k ;
      do
      {
        k = init->constantFolding() ;
        k += init->removeNops() ;
        k += init->rearrange() ;
      }
      while ( k ) ;

      // normalement, le constant folding devrait generer une constante
      if ( init->isIntegerConstant ( val ) )
      {
        delete init ; init = 0 ;
        return true ;
      }
    }
  }
  error ( "Constant integer expression expected" ) ;
  return false ;

}

bool Parser::pDecl_2 ( Ctype& typ, string& id, int& useraddr )
{
  int k ;
  Ctype type2 ;
  string id2 ;
  useraddr = -1 ;

  lx->blk() ;
  if ( lx->ident ( id ) )
  {
    lx->match ( "@" ) && lx->number ( useraddr )  ;
  }
  else if ( lx->match ( "(" ) && pDecl_1 ( type2, id2, useraddr ) &&
            lx->blk() &&  lx->match ( ")" ) )
    ;
  else return false ;

  Ctype arrays ;
  k = 0 ;
  /*
   Array size can be empty (equivalent to size == 0)
   or must be an arbitrary complex constant expression
  */

  while ( lx->blk() && lx->match ( "[" )  &&
          ( lx->blk(), k = 0 ,
            ( ( lx->ch() == ']' ) || parseConstantIntegerExpression ( k ) ) ) &&
          ( lx->blk(), lx->match ( "]" ) ) )

  {
    Ctype sub ( type::Array,k ) ;
    if ( arrays ) arrays->terminaltype() = sub ;
    else arrays = sub ;
  }
  Ctype function, func ;
  if ( lx->blk() && lx->match ( "(" ) && ( func=parseFormalParams_0() ) && lx->match ( ")" ) )
  {
    function = func  ;
  }

  if ( function )
  {
    function->subtype() = typ ;
    typ = function ;
  }

  if ( arrays )
  {
    int constness=typ->constness();
    arrays->terminaltype() = typ ;
    typ = arrays ;
    typ->constness() =constness; // propagate constness
  }
  if ( type2 )
  {
    type2->terminaltype() = typ ;
    typ = type2 ;
    id = id2 ;
  }

  return true ;
}

Ctype Parser::parseFormalParams_0()
{
  Ctype param  ;
  string id ;

  Ctype func ( type::Fct ) ;

  lx->blk() ;

  for ( ;  ; )
  {

    if ( !parseBaseTypes ( param ) ) return func ;

    if ( lx->kmatch ( "const" ) ) param->constness() = 1 ;
    lx->blk() ;

    if ( parseFormalParams_1 ( param, id ) )
    {
      // param found
      Centity ent ( id, entity::Param ) ;
      ent->thetype( ) = param;
      func->addFuncParam ( ent ) ;
    }
    else
    {
      // naked types are corrects in this context
      Centity ent ( "", entity::Param ) ;
      ent->thetype( ) = param;
      func->addFuncParam ( ent ) ;
    }
    lx->blk() ;
    if ( ! lx->match ( "," ) ) break ;
    // variable argument list ?
    lx->blk() ;
    if ( lx->match ( "..." ) )
    {
      lx->blk() ;
      func->valist() = 1 ;
    }
  }
  lx->blk() ;

  return func ;
}

bool Parser::parseFormalParams_1 ( Ctype& typ, string& id )
{
  int constness = 0 ;
  Ctype sub  ;
  while ( lx->blk(), lx->ch() == '*' )
  {
    lx->gch() ;
    constness = lx->kmatch ( "const" ) ;
    sub = Ctype ( type::Ptr, 0, constness ) ;
    sub->subtype() = typ ;
    typ = sub ;
    constness = 0 ;
  }
  return parseFormalParams_2 ( typ, id ) || sub ;
}

bool Parser::parseFormalParams_2 ( Ctype& typ, string& id )
{
  int k ;
  string id2 ;
  Ctype typ2, arrays, function ;

  lx->blk() ;

  ( lx->ident ( id ) )  ||
  ( lx->match ( "(" ) && parseFormalParams_1 ( typ2, id2 ) && lx->blk() &&  lx->match ( ")" ) ) ;

  while ( lx->blk() ) // always true
  {
    k = 0 ;
    if ( lx->blk() && lx->match ( "[" )  && ( lx->blk(),lx->number ( k ),true )  &&
         ( lx->blk(), lx->match ( "]" ) ) )
    {
      Ctype sub ( type::Array,k ) ;
      if ( arrays ) arrays->terminaltype() = sub ;
      else arrays = sub ;
    }
    else if ( lx->blk() && lx->match ( "(" ) && ( function=parseFormalParams_0() ) && lx->blk() && lx->match ( ")" ) )
    {
      function->subtype() = typ ; typ = function ;
    }
    else break ;
  }
  if ( arrays )
  {
    arrays->terminaltype() = typ ;
    typ = arrays ;


  }
  if ( typ2 )
  {
    typ2->terminaltype() = typ ;
    typ = typ2 ;
    id = id2 ;
  }
  return typ2 || arrays || function || ( id != "" );
}


/** No descriptions */
void Parser::error ( const string& txt )
{
  int line ;
  string file ;
  lx->getLocation ( file, line ) ;
  cerr <<file << ":"<<line<<": error: "<<txt<<endl ;
  ++errCount ;
}
void Parser::warning ( const string& txt )
{
  int line ;
  string file ;
  lx->getLocation ( file, line ) ;
  cerr << file << ":"<<line<<": warning: "<<txt<<endl ;
  ++warnCount ;
}
/** semicolon enforcer */
bool Parser::ns()
{
  lx->blk() ;
  if ( lx->match ( ";" ) ) return true ;
  string msg ( "Parse error before \""+lx->nextChars ( 5 ) +"\" (missing semicolon ?)" ) ;
  error ( msg ) ;
  return false ;
}
/** No descriptions */
bool Parser::verifySemantics ( Centity /*e*/ )
{
  // TODO: a refaire ou a supprimer
  return true ;
}
/** No descriptions */
bool Parser::matchLitteral ( string& s )
{
  lx->blk() ;
  s.clear() ;
  if ( lx->ch() != '\"' ) return false ;
  for ( lx->gch() ; lx->ch() != '\"' ; )
  {
    if ( lx->ch() == '\n' )
    {
      error ( "Multi-line litteral." ) ;
      lx->gch() ;
      return false ;
    }
    else if ( lx->ch() == EOF )
    {
      error ( "Unterminated litteral." ) ;
      return false ;
    }
    else if ( lx->ch() == '\\' )
      s += ( char ) lx->esc_seq() ;
    else
      s += ( char ) lx->gch() ;
  }
  lx->gch() ; // eat "
  string s1 ;
  // consecutive litteral ?
  if ( matchLitteral ( s1 ) ) s += s1 ;
  return true ;
}


bool Parser::parseCompoundStaticInitializer_0 ( Initializer& ini )
{
  lx->blk() ;

  return lx->match ( "=" ) &&   parseCompoundStaticInitializer_1 ( ini )  ;
}


bool Parser::parseCompoundStaticInitializer_1 ( Initializer& ini )
{
  Cexpr *expr = 0 ;
  bool r = false ;


  if ( parseCompoundStaticInitializer_2 ( ini ) )
  {
    r = true ;
  }
  else
  {
    nestPar.push ( 0 ) ;
    bool parseinitializerOK = parseExpression ( expr )  ;
    nestPar.pop() ;
    if ( parseinitializerOK )
    {
      // try to make an initializer from this expression
      const char *err = expr2StaticInitializer ( expr, ini ) ;
      if ( err )
      {
        error ( err ) ;
      }
      else
        r = true ;
      delete expr ; expr = 0 ;
    }
  }
  return r ;
}



bool Parser::parseCompoundStaticInitializer_2 ( Initializer& ini )
{
  bool r = false ;

  string s ;
  if ( matchLitteral ( s ) )
  {
    //  creer un point d'entrée pour ce literal
    // car on peut avoir a le referencer
    Centity e = makeLitteral ( s ) ;
    // asm name
    string litname = "C18_"+e->name() ;
    // add this identifier as external symbol
    vector<string> ext ;
    ext.push_back ( litname ) ;

    /*
     l'initialiseur contient une reference symbolique
     (suffisante pour initialiser un pointeur, mais qui devra etre resolue
     pour initialiser un tableau
    */
    Initializer vec ( litname , ext )  ;
    vec.setType ( e->thetype() ) ;
    ini.add ( vec ) ;
    r = true ;
  }
  else
  {

    if ( lx->blk(), lx->match ( "{" ) )
    {
      Initializer vec, elem ;
      vec.insureCompound() ;
      while ( lx->blk() ,  parseCompoundStaticInitializer_1 ( elem ) )
      {
        r = true ;
        vec.add ( elem );

        elem.clear() ;
        if ( lx->blk(), !lx->match ( "," ) ) break ;
      }
      if ( lx->blk() , !lx->match ( "}" ) )
      {
        error ( "Missing } in initializer." ) ;
        lx->zap() ;
        r = false ;
        vec.clear() ;
        ini.clear() ;
      }
      else if ( vec.isCompound() && vec.compoundSize() == 0 )
      {
        error ( "ISO C forbids empty initializer braces." ) ;
        lx->zap() ;
        r = false ;
        vec.clear() ;
        ini.clear() ;
      }
      else
      {
        ini.add ( vec ) ;
      }
    }
  }
  return r ;
}

/** No descriptions */
bool Parser::parseSwitchBlock ( )
{
  lx->blk() ;
  if ( ! lx->match ( "{" ) )
  {
    error ( "Missing { " ) ; lx->zap() ;
    return false ;
  }
  symbols->enterContext() ; // enter context for block
  curFct()->switchCases.pushSwitch();
  bool b;
  do
  {
    if ( lx->kcheck ( "case" ) || lx->kcheck ( "default" ) )
    {
      caseable=true;
      b=parseInstruction();
      caseable=false;
    }
    else
    {
      b=parseBlock ( true ) || parseInstruction();
    }
  }
  while ( b );

  symbols->quitContext();
  if ( lx->blk() &&  !lx->match ( "}" ) )
  {
    error ( "Missing } " ) ; lx->zap() ;
    return false ;
  }

  return true ;
}


/** No descriptions */
bool Parser::parseBlock ( bool newcontext )
{
  lx->blk() ;
  if ( ! lx->match ( "{" ) ) return false ;

  if ( newcontext ) symbols->enterContext() ; // enter context for block

  int localsize =  symbols->localDataPoolSize() ;

  while ( pDecl_0 ( entity::Auto ) ) ; // parse optionnal local entities

  localsize =  symbols->localDataPoolSize()  - localsize ;

  while ( parseBlock ( true ) || parseInstruction() )  ;

  // symbols->dump();
  // symbols->prettyPrint(cout) ;
  if ( newcontext ) symbols->quitContext();
  if ( lx->blk() &&  !lx->match ( "}" ) )
  {
    error ( "Missing } " ) ; lx->zap() ;
    return false ;
  }

  return true ;
}

/** Parse an instruction */

bool Parser::parseInstruction()
{
  Cexpr *expr = 0, *init=0, *cond=0, *next=0  ;
  const char *err = 0 ;
  Instruction *instr = 0 ;
  bool b = false  ;
  bool needsemi = false ;
  string label , asmcode;
  Flatten *flat = 0 , *iftrue = 0 , *iffalse = 0;
  Initializer cst;

  lx->blk();
  if ( ( b = ( lx->ch() == ';' ) ) )
  {
    needsemi = true ;
  }
  else if ( ( b = ( lx->kmatch ( "return" ) && /* lx->needblk() && */ ( parseExpression ( expr ),true ) ) ) )
  {
    instr = new ReturnInstr ( expr, &currentFct ) ;
    needsemi = true ;
  }
  else if ( ( b = ( lx->kmatch ( "__asm__" ) && lx->blk() &&
                    lx->match ( "(" ) && matchLitteral ( asmcode ) && lx->blk() && lx->match ( ")" ) ) ) )
  {
    instr = new AsmInstr ( asmcode ) ;
    needsemi = true ;
  }
  else if ( ( b = ( lx->kmatch ( "goto" ) && lx->blk() && lx->ident ( label ) ) ) )
  {
    instr = new GotoInstr ( label, 1 ) ;
    needsemi = true ;
  }
  else if ( ( b = ( lx->kmatch ( "switch" ) &&
                    lx->blk() &&  lx->match ( "(" ) && parseExpression ( expr ) && lx->blk() && lx->match ( ")" ) ) )
          )
  {
    flat = changeFlatten ( new Flatten ) ;
    ++breakable ;    // allows break
    b = parseSwitchBlock() ;
    --breakable ;
    flat = changeFlatten ( flat ) ;
    if ( b ) instr = new SwitchInstr ( expr , flat ) ;
    else { delete expr ; delete flat ; }
  }
  else if ( ( b = lx->kmatch ( "case" )  &&
                  lx->blk() && parseStaticInitializer ( cst ) && cst.isIntegral() &&
                  lx->match ( ":" ) )
          )
  {
    instr = new CaseInstr ( caseable, cst.valueI() ) ;
  }
  else if ( ( b = lx->kmatch ( "default" )  &&
                  lx->blk() && lx->match ( ":" ) )
          )
  {
    instr = new CaseInstr ( caseable ) ;
  }
  else if ( ( b = lx->kmatch ( "break" ) ) )
  {
    instr = new BreakInstr ( breakable ) ;
    needsemi = true ;
  }
  else if ( ( b = lx->kmatch ( "continue" ) ) )
  {
    instr = new ContinueInstr ( continueable ) ;
    needsemi = true ;
  }
  else if ( ( b = ( lx->kmatch ( "while" ) &&
                    lx->blk() &&  lx->match ( "(" ) && parseExpression ( expr ) && lx->blk() && lx->match ( ")" ) ) )
          )
  {
    flat = changeFlatten ( new Flatten ) ;
    ++breakable ; ++continueable ;    // allows break and continue
    b = parseCompound() ;
    --breakable ;  --continueable ;
    flat = changeFlatten ( flat ) ;
    if ( b ) instr = new WhileInstr ( expr , flat ) ;
    else { delete expr ; delete flat ; }
  }

  else if ( ( b = ( lx->kmatch ( "do" ) && lx->blk() ) ) )
  {
    flat = changeFlatten ( new Flatten ) ;
    ++breakable ; ++continueable ;    // allows break and continue
    b = parseCompound() ;
    --breakable ;  --continueable ;
    flat = changeFlatten ( flat ) ;
    bool b1 = lx->blk() && lx->match ( "while" ) && lx->blk() && lx->match ( "(" ) && parseExpression ( expr ) && lx->blk() && lx->match ( ")" ) && lx->blk() && ns() ;

    if ( b && b1 )
      instr = new DoWhileInstr ( expr , flat ) ;
    else
    {
      delete expr ; delete flat ; b = false ;
    }
  }

  else if ( ( b =
                ( lx->kmatch ( "for" ) &&
                  lx->blk() &&  lx->match ( "(" ) &&
                  ( lx->blk(), parseExpression ( init ), ns() ) &&
                  ( lx->blk(), parseExpression ( cond ), ns() ) &&
                  ( lx->blk(), parseExpression ( next ), lx->blk(), lx->match ( ")" ) )
                ) )
          )
  {
    flat = changeFlatten ( new Flatten ) ;
    ++breakable ; ++continueable ;    // allows break and continue
    b = parseCompound() ;
    --breakable ;  --continueable ;
    flat = changeFlatten ( flat ) ;
    if ( b ) instr = new ForInstr ( init,cond,next , flat ) ;
    else { delete init; delete cond ; delete next ; delete flat ; }
  }
  else if ( ( b = ( lx->kmatch ( "if" ) &&
                    lx->blk() &&  lx->match ( "(" ) && parseExpression ( expr ) && lx->blk() &&
                    lx->match ( ")" ) ) )
          )
  {
    flat = changeFlatten ( iftrue = new Flatten ) ;
    b = parseCompound() ;
    lx->blk() ;
    if ( lx->kmatch ( "else" ) )
    {
      changeFlatten ( iffalse = new Flatten ) ;
      parseCompound() ;
    }
    changeFlatten ( flat ) ;
    if ( b ) instr = new IfInstr ( expr , iftrue, iffalse ) ;
    else { delete expr ; delete iftrue ; delete iffalse ; }
  }
  else if ( ( b = parseLabel ( label ) ) )
  {
    instr = new GotoInstr ( label, 0 ) ;
  }
  else if ( ( b = parseExpression ( expr ) ) )
  {
    instr = new ExprInstr ( expr ) ;
    needsemi = true ;
  }


  if ( instr )
  {
    if ( ( err = instr->process() ) )
    {
      message ( err ) ;
      c18.flattener()->putComment ( err ) ;
    }
    else
    {
      instr->flattenCode() ;
    }
    delete instr ;
  }
  if ( b && needsemi ) b = ns() ;

  return b ;
}


bool Parser::parseStaticInitializer ( Initializer& cst )
{
  bool r =false ;
  Cexpr *init = 0 ;
  int val ;
  string symb ;

  nestPar.push ( 0 ) ;
  r = parseExpression ( init ) ;
  nestPar.pop() ;

  if ( r )
  {

    // try to reduce this expression
    const char *err = init->propagateTypes() ;
    if ( err )
    {
      error ( err ) ;
    }
    else
    {
      int k ;
      do
      {
        k = init->constantFolding() ;
        k += init->removeNops() ;
        k += init->rearrange() ;
      }
      while ( k ) ;

      vector<string> symbols ;
      // normalement, le constant folding devrait generer une constante
      if ( init->isSymbolicConstant ( symb, symbols ) )
      {
        cst = Initializer ( symb , symbols ) ;
      }
      else if ( init->isIntegerConstant ( val ) )
      {
        cst = Initializer ( 4, val ) ;
        r    =  true ;
      }
      else
      {
        error ( "Initializers for global of static entities must be constant expressions" ) ;
      }

    }
  }
  delete init ; init = 0 ;
  return r ;
}

/*!
    \fn Parser::evalStaticInitializer( Centity& ent, Cexpr*& ini )
     Parses an expression, apply constant folding
     If the expression yield constant value, this
     value is attached to entity ent
 */

bool Parser::evalStaticInitializer ( Centity& ent, Cexpr*& init )
{

  Initializer result ;

  // make initializer from expression, if possible
  const char *err = expr2StaticInitializer ( init ,  ent->getInitializer() ) ;

  if ( err )
  {
    // not possible
    error ( err ) ;
    return false ;
  }

  // now, adapt the initializer to the type
  err = ent->getInitializer().fixType ( ent->thetype() ) ;

  if ( err )
  {
    error ( err ) ; delete init ; init = 0 ;
    return false ;
  }
  return  true ;

}
/*!
    \fn Parser::expr2StaticInitializer ( Cexpr*& init , Initializer& result )
     Parses an expression, apply constant folding

 Makes a numeric or symbolic  initializer from this expression, if it is constant
 The initializer has the type of the expression, but will need to be fixed
 to match the type of the initialized entity.

 \return 0 is OK, else an error message

 Note: initialization expression is deleted if not constant
 */

const char * Parser::expr2StaticInitializer ( Cexpr*& init , Initializer& result )
{
  const char *r ;
  int val ;
  string sym_constant ;
  // try to reduce this expression
  r = init->propagateTypes() ;

  result.clear() ;


  if ( r )
  {
    delete init ; init = 0 ;
  }
  else
  {
    int k ;
    do
    {
      k = init->constantFolding() ;
      k += init->removeNops() ;
      k += init->rearrange() ;
    }
    while ( k ) ;

    vector<string> symbols ;
    Ctype init_type = init->exprType() ;

    // normalement, le constant folding devrait generer une constante
    if ( init->isIntegerConstant ( val ) )
    {
      result = Initializer ( 4 , val ) ;
      result.setType ( init_type ) ;
      r = 0 ;
    }
    else if ( init->isCastConstant ( val ) )
    {
      result = Initializer ( init_type->sizeOf() , val ) ;
      result.setType ( init_type ) ;
      r = 0 ;
    }
    else if ( init->isSymbolicConstant ( sym_constant, symbols ) )
    {
      result = Initializer ( sym_constant , symbols ) ;
      result.setType ( init_type ) ;
      r = 0 ;
    }
    else if ( init->isLiteral ( sym_constant ) )
    {
      result = Initializer ( sym_constant , vector<string>() ) ;
      result.setType ( init_type ) ;
      r = 0 ;
    }
    else
    {
      delete init ; init = 0 ;
      r =  "Initializers for global or static entities must be constant expressions"  ;
    }
  }
  return r ;
}

/*!
    \fn Parser::evalDynamicInitializer( Centity& ent, Cexpr*& ini)
 */
bool Parser::evalDynamicInitializer ( Centity& ent, Cexpr*& init )
{
  bool r =false ;
  // currentFct.updateTotalDataSize ( ent ) ;

  // I build an expression tree corresponding to an
  // "variable = expression" instruction
  // so the resulting operation  is NOT  an initialization , but an affectation
  // less efficient, but same result and easier to implement
  // TODO: implement a genuine initalisation of local variables

 // V0.7.0
 // const variable : use a special Cexpr::AffInit operator
 // (same semantic as Cexpr::Aff, excepted that constness is ignored)

  // make variable node
  Cexpr *var = Cexpr::newCexpr() ;
  var->setEntity ( ent )  ;
  // node entity = init
  Cexpr *affec = Cexpr::newCexpr ( Cexpr::AffInit , var, init ) ;
  // propagate types, make optimizations, etc..
  const char *err=affec->process() ;
  if ( err )
    error ( err ) ;
  else
  {
    Instruction *initinstr ;
    if ( ( initinstr = new ExprInstr ( affec ) ) )
    {
      if ( ( err = initinstr->process() ) )
      {
        message ( err ) ;
        c18.flattener()->putComment ( err ) ;
      }
      else
      {
        initinstr->flattenCode() ;
        r = true ;
      }
      delete initinstr ;
      // signal *init is deleted, so it will not be deleted again by caller
      init = 0 ;
    }
  }

  return r ;
}

bool Parser::parseExpression ( Cexpr *& exp )
{
  bool r = exp0 ( exp ) ;
  return r ;
}

/** operator ',' */
bool Parser::exp0 ( Cexpr *& exp )
{
  // must be executed from L to R
  Cexpr  *e2 ;
  if ( exp1 ( exp ) )
  {
    while (
      ( nestPar.size() == 1 || nestPar.top() != 0 ) &&
      lx->opMatch ( "," ) &&
      exp1 ( e2 )
    )
    {
      exp = Cexpr::newCexpr ( Cexpr::Seq, exp ,e2 ) ;
    }
    return true ;
  }
  return false ;
}
/** = += -= *= etc ...  */
bool Parser::exp1 ( Cexpr * & exp )
{
  Cexpr *e2 ;
  if ( exp2 ( exp ) )
  {
    if ( lx->matchReject ( "=","=" ) &&  exp1 ( e2 ) ) // reject ==
    {
      exp = Cexpr::newCexpr ( Cexpr::Aff, exp,e2 ) ;
    }
    else if ( lx->opMatch ( "+=" ) &&  exp1 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::PlusAff, exp,e2 ) ;
    }
    else if ( lx->opMatch ( "-=" ) &&  exp1 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::MinusAff, exp,e2 ) ;
    }
    else if ( lx->opMatch ( "*=" ) &&  exp1 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::MulAff, exp,e2 ) ;
    }
    else if ( lx->opMatch ( "/=" ) &&  exp1 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::DivAff, exp,e2 ) ;
    }
    else if ( lx->opMatch ( "%=" ) &&  exp1 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::ModAff, exp,e2 ) ;
    }
    else if ( lx->opMatch ( "&=" ) &&  exp1 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::BAndAff, exp,e2 ) ;
    }
    else if ( lx->opMatch ( "^=" ) &&  exp1 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::BXorAff, exp,e2 ) ;
    }
    else if ( lx->opMatch ( "|=" ) &&  exp1 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::BOrAff, exp,e2 ) ;
    }
    else if ( lx->opMatch ( "<<=" ) &&  exp1 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::LShiftAff, exp,e2 ) ;
    }
    else if ( lx->opMatch ( ">>=" ) &&  exp1 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::RShiftAff, exp,e2 ) ;
    }
    return true ;
  }
  return false ;
}

/** ? :   */
bool Parser::exp2 ( Cexpr * & exp )
{
  Cexpr *e1, *e2 , *e3 ;
  if ( exp3 ( e1 ) )
  {
    exp = e1 ;
    if ( lx->opMatch ( "?" ) && exp2 ( e2 ) )
    {
      if ( lx->opMatch ( ":" ) && exp2 ( e3 ) )
      {
        exp = Cexpr::newCexpr() ;
        exp->oper() = Cexpr::CondOp ;
        exp->args() . push_back ( e1 ) ;
        exp->args() . push_back ( e2 ) ;
        exp->args() . push_back ( e3 ) ;
      }
      else
        error ( "Missing ':' in conditionnal operator." ) ;
    }
    return true ;
  }
  return false ;
}

/** || */
bool Parser::exp3 ( Cexpr * & exp )
{
  Cexpr  *e2 ;
  if ( exp4 ( exp ) )
  {
    while ( lx->opMatch ( "||" ) && exp4 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::LOr, exp ,e2 ) ;
    }
    return true ;
  }

  return false ;
}

/** && */

bool Parser::exp4 ( Cexpr * & exp )
{
  Cexpr  *e2 ;
  if ( exp5 ( exp ) )
  {
    while ( lx->opMatch ( "&&" ) && exp5 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::LAnd, exp ,e2 ) ;
    }
    return true ;
  }

  return false ;
}


bool Parser::exp5 ( Cexpr * & exp )
{
  Cexpr  *e2 ;
  if ( exp6 ( exp ) )
  {
    while ( lx->matchReject ( "|","|=" ) && exp6 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::BOr, exp ,e2 ) ;
    }
    return true ;
  }

  return false ;
}


bool Parser::exp6 ( Cexpr * & exp )
{
  Cexpr  *e2 ;
  if ( exp7 ( exp ) )
  {
    while ( lx->matchReject ( "^","=" ) && exp7 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::BXor, exp ,e2 ) ;
    }
    return true ;
  }

  return false ;
}

bool Parser::exp7 ( Cexpr * & exp )
{
  Cexpr  *e2 ;
  if ( exp8 ( exp ) )
  {
    while ( lx->matchReject ( "&", "&=" )  && exp8 ( e2 ) )
    {
      exp = Cexpr::newCexpr ( Cexpr::BAnd, exp ,e2 ) ;
    }
    return true ;
  }

  return false ;
}


bool Parser::exp8 ( Cexpr * & exp )
{
  Cexpr  *e2 ;

  if ( exp9 ( exp ) )
  {
    while ( lx->blk() )
    {
      if ( lx->match ( "==" ) && exp9 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::Eq, exp ,e2 ) ;
      else if ( lx->match ( "!=" )  && exp9 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::NE, exp ,e2 ) ;
      else break ;
    }
    return true ;
  }
  return false ;
}

/**  < <= > >=  */

bool Parser::exp9 ( Cexpr * & exp )
{
  Cexpr  *e2 ;

  if ( exp10 ( exp ) )
  {
    while ( lx->blk() )
    {
      if ( lx->matchReject ( "<","<=" ) && exp10 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::Lt, exp ,e2 ) ;
      else if ( lx->match ( "<=" )  && exp10 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::LE, exp ,e2 ) ;
      else if ( lx->matchReject ( ">",">=" )  && exp10 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::Gt, exp ,e2 ) ;
      else if ( lx->match ( ">=" )  && exp10 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::GE, exp ,e2 ) ;
      else break ;
    }
    return true ;
  }
  return false ;
}

/** << >> */
bool Parser::exp10 ( Cexpr * & exp )
{
  Cexpr  *e2 ;

  if ( exp11 ( exp ) )
  {
    while ( lx->blk() )
    {
      if ( lx->matchReject ( "<<","=" ) && exp11 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::LShift, exp ,e2 ) ;
      else if ( lx->matchReject ( ">>","=" ) && exp11 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::RShift, exp ,e2 ) ;
      else break ;
    }
    return true ;
  }
  return false ;
}

/** + - */
bool Parser::exp11 ( Cexpr * & exp )
{
  Cexpr  *e2 ;

  lx->blk();
  if ( exp12 ( exp ) )
  {
    while ( lx->blk() , ( lx->nch ( 1 ) != '=' ) )
    {
      if ( lx->match ( "+" ) && exp12 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::Plus, exp ,e2 ) ;
      else if ( lx->match ( "-" )  && exp12 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::Minus, exp ,e2 ) ;
      else break ;
    }
    return true ;
  }
  return false ;
}
/**  * / % */
bool Parser::exp12 ( Cexpr * & exp )
{
  Cexpr  *e2 ;
  lx->blk();
  if ( exp13 ( exp ) )
  {
    while ( lx->blk() , ( lx->nch ( 1 ) != '=' ) )
    {
      if ( lx->match ( "*" ) && exp13 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::Mul, exp, e2 ) ;
      else if ( lx->match ( "/" )  && exp13 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::Div, exp ,e2 ) ;
      else if ( lx->match ( "%" )  && exp13 ( e2 ) )
        exp = Cexpr::newCexpr ( Cexpr::Mod, exp ,e2 ) ;
      else
        break ;
    }
    return true ;
  }
  return false ;
}

/** ! ~ ++ -- (pre and post) + - * & (cast) sizeof */
bool Parser::exp13 ( Cexpr * & exp )
{

  Ctype target_type ;

  lx->blk();

  if ( lx->match ( "!" ) &&  exp13 ( exp ) )
    exp = Cexpr::newCexpr ( Cexpr::LNot, exp ) ;
  else if ( lx->match ( "~" ) && exp13 ( exp ) )
    exp = Cexpr::newCexpr ( Cexpr::BNot, exp ) ;
  else if ( lx->match ( "++" ) && exp13 ( exp ) )
    exp = Cexpr::newCexpr ( Cexpr::PlusPlusPre, exp ) ;
  else if ( lx->match ( "--" ) && exp13 ( exp ) )
    exp = Cexpr::newCexpr ( Cexpr::MinusMinusPre, exp ) ;
  else if ( lx->match ( "-" ) && exp13 ( exp ) )
    exp = Cexpr::newCexpr ( Cexpr::UMinus, exp ) ;
  else if ( lx->match ( "+" ) && exp13 ( exp ) )
    exp = Cexpr::newCexpr ( Cexpr::UPlus, exp ) ;
  else if ( lx->kmatch ( "sizeof" ) )
  {
    int pos = lx->mark() ;
    lx->blk() ;
    if ( parseCast ( target_type ) )
    {
      // sizeof(type) is compiled like sizeof (type)0
      Cexpr *subexp =  Cexpr::newCexpr() ;
      Centity dummy ( "",entity::Constant ) ;
      dummy->value() = 0 ;
      dummy->thetype() = target_type ;
      subexp->setEntity ( dummy ) ;
      exp = Cexpr::newCexpr ( Cexpr::Sizeof, subexp ) ;
    }
    else if ( lx->mark ( pos ),  exp13 ( exp ) )
      exp = Cexpr::newCexpr ( Cexpr::Sizeof, exp ) ;
    else
      return false ;
  }
  else if ( lx->matchReject ( "*","=" ) && exp13 ( exp ) )
    exp = Cexpr::newCexpr ( Cexpr::UStar, exp ) ;
  else if ( lx->matchReject ( "&","=" ) && exp13 ( exp ) )
    exp = Cexpr::newCexpr ( Cexpr::UAddr, exp ) ;
  else if ( parseCast ( target_type ) && exp13 ( exp ) )
  {
    exp = Cexpr::newCexpr ( Cexpr::Cast, exp ) ;
    exp->exprType() = target_type ;
  }
  else if ( exp14 ( exp ) )
  {
    lx->blk();
    if ( lx->match ( "++" ) )
      exp = Cexpr::newCexpr ( Cexpr::PlusPlusPost, exp ) ;
    else if ( lx->match ( "--" ) )
      exp = Cexpr::newCexpr ( Cexpr::MinusMinusPost, exp ) ;
  }
  else
    return false ;


  return true ;
}
/** () [] -> .  */
bool Parser::exp14 ( Cexpr * & exp )
{
  Cexpr *e2 ;
  vector<Cexpr *> fnArgs  ;
  string member ;


  lx->blk();
  if ( primary ( exp ) )
  {
    while ( lx->blk() )
    {
      if ( lx->match ( "[" ) && exp0 ( e2 ) && lx->blk() && lx->match ( "]" ) )
      {
        // compile t[i] as *(t+i)
        exp = Cexpr::newCexpr ( Cexpr::Plus, exp, e2 ) ;
        exp = Cexpr::newCexpr ( Cexpr::UStar, exp ) ;
      }

      else if ( lx->match ( "." ) && lx->blk() && lx->ident ( member ) )
      {
        exp = Cexpr::newCexpr ( Cexpr::Dot, exp, member ) ;
      }

      else if ( lx->match ( "->" ) && lx->blk() && lx->ident ( member ) )
      {
        exp = Cexpr::newCexpr ( Cexpr::Arrow, exp, member ) ;
      }
      else if ( actualParams ( fnArgs ) )
      {
        exp = Cexpr::newCexpr ( Cexpr::Fct, exp, fnArgs ) ;
      }
      else
      {
        break ;
      }
    }
    return true ;
  }
  return false ;
}

/*
 Parses an explicit bit-field specification, with the following syntax
 .< BF position>[:<BF size>]

 The bit  field size is optionnal, and is 1 (bit) by default
*/
const char * Parser::explicitBF ( Centity& e )
{
  const char *r = 0  ;
  if ( e->isInt8() )
  {
    int pos = lx->mark() , bfoffset  , bfsize = 1 ;
    lx->blk() ;
    if ( lx->match ( "." ) && lx-> blk() && lx->number ( bfoffset ) )
    {

      lx->blk() ;
      // the second part is optional
      int pos2 = lx->mark() , bfsz ;
      if ( lx->match ( ":" ) && lx-> blk() && lx->number ( bfsz ) )  bfsize = bfsz ;
      else lx->mark ( pos2 ) ;

      // check values
      if ( bfoffset >=  0 &&  bfoffset <= 7 && ( bfoffset + bfsize ) <= 8 )
      {
        if ( bfsize != 8 ) //  bfsize == 8 ==> not really a bit field
        {
          // because type will be changed, a totally separate entity must be created
          e = e.clone() ;
          // this entity is never inserted in the entity table but
          // will survive as long as it is referenced somewhere
          // change the type from int8 to bit field
          e->thetype()->bsize() = bfsize ;
          e->thetype()->boffset() = bfoffset ;
        }
        // Note: explicit bit-field are always unsigned
        // TODO: parse a sign specification ?
        e->thetype()->code() = type::UInt ;
      }
      else
      {
        lx->mark ( pos ) ;
        r = "Invalid explicit bit-field specification." ;
      }
    }
    else
      lx->mark ( pos ) ;
  }

  return r ;
}

bool Parser::primary ( Cexpr * & exp )
{
  string id ;
  bool r = true ;
  int val ;
  float fval ;
  string s ;
  Centity e ;

  lx->blk() ;
  if ( lx->ident ( id ) )
  {
    if ( e = symbols->find ( id ) )
    {
      // experimental: explict bit-field suport
      // explicitBF can create a new entity
      const char *err = explicitBF ( e ) ;
      if ( err )
      {
        error ( err ) ;
        r = false ;
      }
      // end experimental
      exp = Cexpr::newCexpr() ;
      exp->setEntity ( e ) ;
    }
    else if ( curFct()->fct() && ( e = symbols->find ( curFct()->fct()->name() +"#"+id ) ) )  // try static local
    {
      exp = Cexpr::newCexpr() ;
      exp->setEntity ( e ) ;
    }
    else
    {
      error ( "Undefined symbol '"+id+"'." ) ;
      r = false ;
    }
  }
  else if ( lx->fnumber ( fval ) )
  {
    // the number is stored as a 32bit int
    val = utility::reinterpretToI32 ( fval ) ;

    e = Centity ( utility::toString ( fval ), entity::Constant, val ) ;  // make a constant
    e->thetype() = Ctype ( type::Float ) ;
    exp = Cexpr::newCexpr() ;
    exp->setEntity ( e ) ;
  }
  else if ( lx->number ( val ) )
  {
    e = Centity ( utility::toString ( val ), entity::Constant, val ) ;  // make a constant
    if ( lx->cumatch ( "LUU" ) || lx->cumatch ( "ULL" ) )
      e->thetype() = Ctype ( type::ULLong ) ;
    else if ( lx->cumatch ( "LU" ) || lx->cumatch ( "UL" ) )
      e->thetype() = Ctype ( type::ULong ) ;
    else if ( lx->cumatch ( "LL" ) )
      e->thetype() = Ctype ( type::LLong ) ;
    else if ( lx->cumatch ( "L" ) )
      e->thetype() = Ctype ( type::Long ) ;
    else if ( lx->cumatch ( "U" ) )
      e->thetype() = Ctype ( type::UInt ) ;
    else
      e->thetype() = Ctype ( type::Int ) ;
    exp = Cexpr::newCexpr() ;
    exp->setEntity ( e ) ;
  }
  else if ( matchLitteral ( s ) )
  {
    e = makeLitteral ( s ) ;
    exp = Cexpr::newCexpr() ;
    exp->setEntity ( e ) ;
  }
  else if ( matchCharConst ( val ) )
  {
    e = Centity ( "",entity::Constant,val ) ;  // make a constant
    e->thetype() = Ctype ( type::Int,0,1 ) ;
    exp = Cexpr::newCexpr() ;
    exp->setEntity ( e ) ;
  }
  else if ( lx->match ( "(" ) )
  {

    ++nestPar.top() ;
    if ( exp0 ( exp ) )
    {
      lx->blk() ;
      if ( !lx->match ( ")" ) )
      {
        error ( "Missing ')'." ) ;
        delete exp ;
        r = false ;
      }
    }
    else
      r = false ;
    --nestPar.top() ;
  }
  else
    r = false ;

  return r ;
}


bool Parser::actualParams ( vector<Cexpr *>& params )
{
  Cexpr *p ;

  lx->blk() ;
  params.clear() ;

  if ( lx->match ( "(" ) )
  {
    nestPar.push ( 0 ) ;
    while ( exp0 ( p ) )
    {
      params.push_back ( p ) ;
      lx->blk() ;
      if ( !lx->match ( "," ) ) break ;
    }
    nestPar.pop() ;
    lx->blk() ;

    if ( lx->match ( ")" ) ) return true ;

    error ( "Missing ')'" ) ;
    for ( vector<Cexpr *>::iterator i=params.begin() ; i != params.end() ; ++i )
      delete *i ;
  }
  return false ;
}
/** No descriptions */
bool Parser::parseCast ( Ctype& target )
{
  bool r = true ;
  int pos = lx->mark() ;

  if ( lx->match ( "(" ) && parseType ( target ) )
  {
    lx->blk() ;
    if ( !lx->match ( ")" ) )
    {
      r = false ;
      target = Ctype() ;
      lx->mark ( pos ) ;
      error ( "Missing ')'." ) ;
    }
  }
  else
  {
    r = false ;
    lx->mark ( pos ) ;
  }

  return r ;
}
/** Parser for cast types */
bool Parser::parseType ( Ctype& the_type )
{
  string id ;

  if ( !parseBaseTypes ( the_type ) ) return false ;

  lx->blk() ;
  if ( lx->kmatch ( "const" ) ) the_type->constness() = 1 ;

  if ( parseFormalParams_1 ( the_type, id ) )
  {
    // definition found
    //        entity *ent = entity::newentity(id, storage) ;
    //        ent->thetype() = ty ;
    //        if( verifySemantics(ent))
    //        {
    //        }
    //        else
    //            delete ent ;
  }

  return true ;
}
/** parse ( 'const unsigned' | 'unsigned const' )?  ('char' | 'int' | 'long')
  or a typedef defined type
  return the corresponding type object
*/
bool Parser::parseBaseTypes ( Ctype& the_type )
{
  int constness  , is_unsigned ;
  bool r = true ;

  Ctype default_type ;

  constness = lx->kmatch ( "const" ) ;
  is_unsigned = lx->kmatch ( "unsigned" )  ;
  if ( !constness ) constness = lx->kmatch ( "const" );

  if ( is_unsigned )
  {
    default_type = Ctype ( type::UInt ,0,constness ) ;
  }

  lx->blk() ;
  if ( lx->kmatch ( "char" ) )
  {
    the_type =  Ctype ( is_unsigned ? type::UChar : type::Char ,0,constness ) ;
  }
  else if ( lx->kmatch ( "int" ) )
  {
    the_type =  Ctype ( is_unsigned ? type::UInt :type::Int,0,constness ) ;
  }
  else if ( lx->kmatch ( "long" ) )
  {
    lx->blk() ;
    if ( lx->kmatch ( "long" ) )
      the_type =  Ctype ( is_unsigned ? type::ULLong :type::LLong,0,constness ) ;
    else
      the_type =  Ctype ( is_unsigned ? type::ULong :type::Long,0,constness ) ;
    lx->kmatch ( "int" ) ; // ignore optional int
  }
  else if ( lx->kmatch ( "long32" ) )
  {
    the_type =  Ctype ( is_unsigned ? type::ULLong :type::LLong,0,constness ) ;
  }
  else if ( lx->kmatch ( "float" ) )
  {
    the_type =  Ctype ( type::Float ,0,constness ) ;
    if ( is_unsigned ) warning ( "Extra 'unsigned' qualifier ignored." ) ;
  }
  else if ( lx->kmatch ( "void" ) )
  {
    the_type =  Ctype ( type::Void,0,constness ) ;
    if ( is_unsigned ) warning ( "Extra 'unsigned' qualifier ignored." ) ;
  }
  else if ( lx->kmatch ( "struct" ) )
  {
    r = parseStruct ( the_type , type::Struct ) ;
    if ( r ) the_type->constness() = constness ;
    if ( is_unsigned ) warning ( "Extra 'unsigned' qualifier ignored." ) ;
  }
  else if ( lx->kmatch ( "union" ) )
  {
    r = parseStruct ( the_type , type::Union ) ;
    if ( r ) the_type->constness() = constness ;
    if ( is_unsigned ) warning ( "Extra 'unsigned' qualifier ignored." ) ;
  }
  else if ( lx->kmatch ( "enum" ) )
  {
    r = parseEnum ( the_type );
    if ( r ) the_type->constness() = constness ;
    if ( is_unsigned ) warning ( "Extra 'unsigned' qualifier ignored." ) ;
  }
  else
  {
    // process typedef defined type
    int pos= lx->mark() ;
    string name ;
    if ( lx->ident ( name ) )
    {
      the_type = symbols->findType ( name ) ;
      if ( the_type == 0 )
      {
        lx->mark ( pos ) ;  // restore lexer current point
        // last chance : stand alone "unsigned"
        the_type = default_type ;
        r = is_unsigned ;
      }
      else if ( constness || is_unsigned )
      {
        // detach the type
        the_type = Ctype ( the_type->clone() ) ;
        the_type->constness() = constness ;

        if ( is_unsigned && the_type->isIntegral() )
        {
          switch ( the_type->code() )
          {
            case type::Char: the_type->code() = type::UChar ; break ;
            case type::Int: the_type->code() = type::UInt ; break ;
            case type::Long: the_type->code() = type::ULong ; break ;
            default: break ;
          }
        }
      }
    }
    else
    {
      the_type = default_type ;
      r = is_unsigned  ;
    }
  }

  return r ;
}
/** No descriptions CBLOCK */
bool Parser::matchCharConst ( int &k )
{
  int c ;
  if ( ! lx->match ( "'" ) )
    return false;
  k = 0;
  while ( ( c = lx->ch() ) != '\'' )
  {
    k = ( ( k & 0xFF ) << 8 ) | ( ( c == '\\' ) ? lx->esc_seq() : lx->gch() );
  }
  if ( lx->gch() != '\'' )
    error ( "Missing terminating ' character." ) ;
  if ( k & ~0xFF )
    error ( "Multi-character character constant." );
  return true;
}
/** No descriptions */
bool Parser::parseFunctionBody ( Centity fct )
{
  symbols->enterContext() ; // enter new context for function
  currentFct.clear() ;      // clear context
  breakable = 0 ;           // no break allowed
  continueable = 0 ;        // no continue allowed
  getFirstSFR() ;           // get SFR info from firstsfr pragma

  currentFct.theFct = fct ;
  // Turn parameters to local variables.
  Ctype ty = fct->thetype() ;
  int last = ty->funcParams().size() -1 ;

  for ( ; last >= 0 ; --last )
  {
    Centity& ent = ( ty->funcParams() ) [last] ;
// ***TEST***
    if ( ent->isArray() ) ent->thetype()->code() = type::Ptr ;
    const char *stat = symbols->insertEntity ( ent ) ;
    if ( stat ) error ( stat ) ;
  }

  currentFct.totalDataSize = currentFct.paramDataSize = symbols->localDataPoolSize()  ;

  // reserve return label
  currentFct.returnLabel = c18.uniqueLabel() ;

  // clean flattener buffer
  c18.flattener()->clear() ;
  //  put enter function into flattening flow - local data size is not known yet
  c18.flattener()->insertOp ( Operation ( Operation::EnterFunction, fct ) ) ;

  if ( parseBlock ( false ) )
  {
    ;
  }


  //  put exit function into flattening flow
  int locals =   currentFct.totalDataSize - currentFct.paramDataSize ;
  c18.flattener()->insertOp ( Operation ( Operation::ExitFunction, fct ,
                                          0 , locals, currentFct.returnLabel ) ) ;

  // patch enter function record to specify local data size
  ( * ( c18.flattener()->ops().begin() ) ) ._val =
    currentFct.totalDataSize - currentFct.paramDataSize ;

  const char *mess = currentFct.analyseUserLabels()  ;
  if ( mess ) message ( mess ) ;

  // various debugging outputs
  if ( c18.debugOpt() & 1 ) c18.flattener()->dump ( "non optimized",c18.out() )  ;
  // optimize flattener buffer
  c18.flattener()->optimize() ;
  // dump optimized flatten code
  if ( c18.debugOpt() & 2 ) c18.flattener()->dump ( "optimized",c18.out() )  ;
  // dump local symbol table
  if ( c18.debugOpt() & 4 ) c18.symtab()->dump ( "locals " ) ;

  // generates code for all function body
  c18.codegen()->makeCode ( *c18.flattener() ) ;


  // parameters will be removed from stack by caller's code
  lx->pushBack ( ";" ) ; // simulate semicolon.

  symbols->quitContext();  // quit function context

  currentFct.theFct = 0 ;

  return true ;
}
/** No descriptions */
void Parser::message ( const string& mess )
{
  if ( mess[0] == '\t' ) warning ( mess ) ;
  else error ( mess ) ;
}
/** No descriptions */
/*
int Parser::fctStackLevel()
{
  return entryStackLevel ;
}
*/
/** No descriptions */
bool Parser::parseLabel ( string& label )
{
  lx->blk() ;
  int m = lx->mark() ;
  bool r = false ;

  if ( lx->ident ( label ) && lx->ch() == ':' )
  {
    lx->gch() ;
    r = true ;
  }
  else
    lx->mark ( m ) ;

  return r ;
}

FctCtx *Parser::curFct()
{
  return &currentFct ;
}
/** Replace current flattener with f.
Return the previous flattener
 */
Flatten * Parser::changeFlatten ( Flatten *f )
{
  Flatten *t = c18.flattener() ;
  c18.flattener() = f ;
  return t ;
}
/** No descriptions */
bool Parser::parseCompound()
{
  return parseBlock ( true ) || parseInstruction() ;
}
/** Make a litteral (ie: initialized anonymous global array) from a string.

Global entities table is searched first and equals litterals are merged.

This optimization only works at a compilation unit level.
(ie: same litteral in different compilation units are not merged)
 */
Centity Parser::makeLitteral ( const string& s )
{
  Centity e = symbols->findLitteral ( s ) ;
  if ( e ) return e ;

  e = Centity ( c18.uniqueLiteralName(), entity::Global ) ;  // make a constant
  e->getInitializer().makeCstFromLitteral ( s )  ;
  // make a type 'char *'
  Ctype t0 ( type::Char ) ;
  Ctype t1 ( type::Array, s.size() +1, 1 ) ;  // const array of char
  t1->subtype() = t0 ;
  e->thetype() = t1 ;
  e->storage() = entity::Litteral ;
  // this entity is inserted into table immediately
  symbols->insertEntity ( e,true ) ;

  return e ;

}
/** Look for a "firstsfr" pragma, and set the Code Generator accordingly
 */
void Parser::getFirstSFR()
{
  string sfr = c18.getPragma ( "firstsfr" ) ;
  if ( sfr != "" )
  {
    int addr ;
    if ( utility::intValue ( sfr, addr ) )
    {
      c18.codegen()->firstSFR() = addr ;
    }
  }
}


/*!
    \fn Parser::parseStruct(Ctype& t)
 */
bool Parser::parseStruct ( Ctype& t , type::Code what )
{
  // the "struct" keyword has been parsed
  string id ;
  bool withid ;
  Ctype mtype, mt ;
  string mid ;
  int maddr ;
  int constness = 0 ;
  string swhat ( ( what == type::Struct ) ? "struct" : "union" ) ;


  lx->blk() ;
  withid = lx->ident ( id ) ;
  lx->blk() ;

  t = Ctype() ;
  if ( lx->ch() == '{' )
  {
    lx->gch() ;
    //  struct  already defined ?
    if ( withid )
    {
      t = symbols->findStruct ( id ) ;

      if ( t != 0 &&  t->completed() )
      {
        if ( t->code() != what )
          error ( "'"+id+"' defined as wrong kind of tag." ) ;
        else
          error ( "Redefinition of '"+swhat+" "+id+"'." ) ;
        return false ;
      }
    }
    // else, this an anonymous struct

    // create a struct type if needed
    if ( t == 0 )
    {
      t = Ctype ( what, 0, constness ) ;


      if ( withid )
      {
        t->structName() = id ;
        symbols->insertStruct ( t ) ;
      }
      // else, no need to insert the struct into struct table
    }

    t->completed() = false ;
    lx->blk() ;

    int bitoffset ;
    for ( bitoffset = 0 ; parseBaseTypes ( mtype ) ; )
    {
      int bitsz ;

      while (
        pDecl_1 ( mt = mtype  , mid, maddr ) ||
        ( lx->blk(), lx->ch() == ':' ) ||  // anonymous bit-field
        ( lx->ch() == ';' )    // anonymous structure in union (or structure)
      )
      {
        bitsz = 0 ;

        // anonymous bit-field : I change the name in order to make the error messages more readable
        if ( mid == "" ) mid = "<anonymous>" ;

        lx->blk() ;
        if ( lx->ch() == ':' )
        {
          if ( mt->isInt8() )
          {

            lx->gch() ;
            lx->blk() ;
            // reste a parser un entier
            if ( parseConstantIntegerExpression ( bitsz ) )
            {
              // check for overflow
              if ( bitsz > 8 )
              {
                error ( "Width of '"+mid+"' exceeds its type." ) ;
                return false ;
              }
              // check for room for this new field in the current int8
              if ( bitsz+bitoffset > 8 )
              {
                bitoffset = 0 ; // no room, go to next int8
              }
              //  cout << mid << ": offset=" << bitoffset << " size=" << bitsz << endl ;
              // at this point, mt must be cloned beecause each bit-field is a variant
              // of the original int type (that cannot be shared anymore)
              mt=Ctype ( mtype->clone() ) ;
              mt->bsize() = bitsz ;
              mt->boffset() = bitoffset ;
              // prepare for next field
              bitoffset += bitsz ;
            }
            lx->blk() ;
          }
          else
          {
            error ( "Bit-field '"+mid+"' has invalid type." ) ;
            return false ;
          }
        }
        else // no more fields, prepare for a new one
        {
          bitoffset = 0 ;
        }

        StructMember sm ( mid,mt, 0 ) ;

        // verify incomplete struct types
        if ( ( mt->isStruct() || mt->isUnion() ) && !mt->completed() )
        {
          error ( "Field '"+mid+"' has incomplete type." ) ;
          return false ;
        }

        // member offset and struct size are both updated by addStructMember()
        if ( !t->addStructMember ( sm ) )
        {
          error ( "Duplicate member '"+ mid + "'" ) ;
          return false ;
        }

        lx->blk() ;
        if ( lx->ch() != ',' ) break ;
        lx->gch() ;
        lx->blk() ;
      } // end of members loop
      if ( !ns() )
      {
        t = 0 ; return false ;
      }
    }
    if ( lx->ch() != '}' )
    {
      error ( "Missing } in '"+swhat+" "+id+"' definition." ) ;
      t = 0 ;
      return false ;
    }

    lx->gch() ;
    t->completed() = true ;
    // OK !!
  }
  else
  {
    if ( withid )
    {
      // struct exists ?
      t = symbols->findStruct ( id ) ;
      if ( t == 0 )
      {
        // no it doesn't -- however, this is legal
        // just create a 0 sized struct
        t = Ctype ( type::Struct, 0, constness ) ;
        t->structName() = id ;
        t->completed() = false ;
      }
      else
      {
        // duplicate the struct descriptor to permit different constness
        // for different variables and pointers to the same structure
        Ctype t2 ( type::Struct, t->sizeOf(), constness ) ;
        t2->structName() = id;
        t2->members() =t->members();
        t2->completed() = true;
        t=t2;
      }
    }
    else
    {
      //  just struct !!
      lx->blk() ;
      string sc  ;
      sc += ( char ) lx->ch() ;
      error ( "Expected '{' but '"+sc+"' found." ) ;
      return false ;
    }
  }


  return true ;
}

bool Parser::parseEnum ( Ctype& t )
{
// fixme - declare all members as constants
// probably as const int name=value
// but those constants must be compiled as literals, not as variables in rom!

  // the "enum" keyword has been parsed
  string id ;
  bool withid ;
  int value ;

  lx->blk() ;
  withid = lx->ident ( id ) ; // has identifier? currently ignored
  lx->blk() ;

  value=0;
  t = Ctype() ;
  if ( lx->ch() == '{' )
  {
    lx->gch() ;

    while ( lx->blk(), lx->ch() !='}' )
    {
      string name ;
      if ( !lx->ident ( name ) )
      {
        error ( "Identifier expected." ) ;
        return false ;
      }
      lx->blk();
      if ( lx->match ( "=" ) )
      {
        Initializer cst;
        if ( parseStaticInitializer ( cst ) && cst.isIntegral() && cst.valueI() >=-128 && cst.valueI() <256 )
        {
          value=cst.valueI();
        }
        else
        {
          error ( "Integer constant expected." ) ;
          return false ;
        }
      }
      if ( lx->match ( "," ) || lx->ch() == '}' )
      {
        Ctype et ( type::EnumMember, value, 1 ) ;
        Centity e ( name, 0, value ) ; // make a constant
        e->thetype() = et ;
        e->storage() = entity::Constant ;

        const char *stat=symbols->insertEntity ( e );
        if ( stat )
        {
          error ( stat ) ;
          return false;
        }
        value++;
        continue;
      }
    }
    lx->gch() ; // get '}'
    // OK !!
  }
  t = Ctype ( type::Enum, 1 ) ;
  t->completed() = true ;

  return true ;
}

