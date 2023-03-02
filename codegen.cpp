
#include "codegen.h"
#include "centity.h"
#include "utility.h"
#include "operation.h"
#include "symtab.h"
#include "flatten.h"
#include "compiler.h"

#include <iomanip>
#include <cstdlib>
using namespace std ;

/* ------------------------------------------------------------------
*/
CodeGen::CodeGen() :
    out ( c18.out() ), symbols ( *c18.symtab() )

{
  reset() ;
}
/* ------------------------------------------------------------------
*/
CodeGen::~CodeGen()
{
}

ostream& CodeGen::output()
{
  return out ;
}

/* -----------------------------------------------------------------
*/
/**
Return the current offset for the entity e.
For local variables, this offset is always negative or zero
because the variable itself consume space on the stack.
Due to stack activity during expressions evaluation, the offset
of a given entity might change at any compile time.

return 1 for non local entity (ie: glob variables and functions)
 */
int CodeGen::varOffset ( Centity e )
{
  if ( ! e->isLocal() ) return 1 ;

  //    cout << "addrvalue = " <<   e->addrvalue() << endl ;
  //    cout << "stk = " <<   stk << endl ;
  //    cout << "localDataPoolSize = " <<   symbols.localDataPoolSize() << endl ;
  /*
    cout << "e->addr()" << e->addr() << endl ;
    cout << "stk" << stk << endl ;
    cout << "total data size" << c18.parser()->curFct()->getTotalDataSize() << endl ;
  */

  return e->addr() - stk - c18.parser()->curFct()->getTotalDataSize()  + 1;
}
/* ------------------------------------------------------------------
*/

void CodeGen::makeCode ( Flatten& f )
{
  Operation op ;
  list<Operation>::iterator i ;
  string gn, ind , label1,label2 ;
  int off ;
  int k1, nb , v;

  for ( i = f.ops().begin() ; i !=  f.ops().end() ; ++i )
  {
    op =  *i ;
    switch ( op._code )
    {
      default:
        out << "; <not yet implemented> " << op._code << endl ;
        break ;

      case Operation::PutComment:
      {
        emitComment ( op._str1 )  ;
        break ;
      }

      case Operation::PutAsm:
      {
        out <<  op._str1 << endl ;
        Wvalid = false ; // asm code can change W
        break ;
      }

      case Operation::EnterFunction:
      {
        emitFctProlog ( op )  ;
        break ;
      }

      case Operation::ExitFunction:
      {
        emitFctEpilog ( op )  ;
        break ;
      }

      case Operation::MakeLocal:
      {
        emitMakeLocal ( op._e1 )  ;
        break ;
      }

      case Operation::RemoveLocals:
      {
        emitCleanLocalData ( op._val )  ;
        break ;
      }

      case Operation::TouchStack:
      {
        stk += op._val  ;
        break ;
      }

      case Operation::CleanStack:
      {
        emitCleanStack ( stk );
        break ;
      }

      case Operation::PushStack:
      {
        stkStack.push ( stk );
        break ;
      }


      case Operation::Return0:
      {
        out << "\tIBRA " << op._str1 << endl ;
        break ;
      }

      case Operation::PutLabel:
      {

        out << op._str1 << endl ;
        Wvalid = false ; // potential branches to this label invalidate W
        break ;
      }

      case Operation::GotoLabel:
      {

        out << "\tIBRA " << op._str1 << endl ;
        break ;
      }



      case Operation::TestN:
      {

        if ( op._e1 == 0 )
        {
          if ( op._val )
            out << "\tbcf STATUS,Z,0" << endl ;
          else
            out << "\tbsf STATUS,Z,0" << endl ;
        }
        else if ( op._e1->isConstant() )
        {
          if ( op._e1->value() )
            out << "\tbcf STATUS,Z,0" << endl ;
          else
            out << "\tbsf STATUS,Z,0" << endl ;
        }
        else if ( op._nbytes == 1 )
        {
          int bfsiz, bfoffset ;
          op.isBF ( bfsiz, bfoffset ) ;

          if ( op._e1->isGlobal() )
          {
            gn = mkGlob ( op._e1->name() );
            if ( accBank ( op._e1 ) )
            {
              out << "\tmovf  " << gn << ",W,0" << endl ;
            }
            else
            {
              out << "\tmovlb HIGH " << gn << "; BSR used here " << endl ;
              out << "\tmovf  " << gn << ",W,1" << endl ;
            }
            // if bit fied, mask unrelevant bits
            if ( bfsiz )
            {
              gen ( "andlw 0x"+utility::toHexString ( BFMask ( bfsiz, bfoffset ) ) );
            }
            Wvalid = false ;
          }
          else if ( op._e1->isLocal() )
          {
            off =  varOffset ( op._e1 ) ;
            ind = emitStackOff ( off ) ;
            // if bit fied, mask unrelevant bits
            if ( bfsiz )
            {
              gen ( "movf " +utility::toString ( ind ) + ",W,0" ) ;
              gen ( "andlw 0x"+utility::toHexString ( BFMask ( bfsiz, bfoffset ) ) );
              Wvalid = false ;
            }
            else
              gen ( "movf " +utility::toString ( ind ) + ",F,0" ) ;
          }
        }
        else if ( op._nbytes == 2 )
        {
          if ( op._e1->isGlobal() )
          {
            gn = mkGlob ( op._e1->name() ) ;
            if ( accBank ( op._e1 ) )
            {
              out << "\tmovf  " << gn << ",W,0" << endl ;
              out << "\tiorwf " << gn << "+1,W,0" << endl ;
            }
            else
            {
              out << "\tmovlb HIGH " <<  gn<< "; BSR used here "  << endl ;
              out << "\tmovf  " << gn << ",W,1" << endl ;
              out << "\tmovlb HIGH (" << gn  << "+1)" << "; can cross page boundary "  << endl ;
              out << "\tiorwf " << gn << "+1,W,1" << endl ;
            }
            Wvalid = false ;
          }
          else if ( op._e1->isLocal() )
          {

            emitMovCstToW ( varOffset ( op._e1 ) ) ;
            out << "\tmovff PLUSW0,PREINC0" << endl ;
            out << "\tmovf PLUSW0,W,0" << endl ;
            out << "\tiorwf POSTDEC0,W,0" << endl ;
            Wvalid = false ;
          }
        }
        else if ( op._nbytes == 4 ) // common to int32 and FP
        {
          if ( op._e1->isGlobal()  || op._e1->isLocal() )
          {
            emitMovAddrToP ( op._e1 ) ;
            Wvalid = false ;
            gen ( "movf POSTINC1,W,0" ) ;
            gen ( "iorwf POSTINC1,W,0" );
            gen ( "iorwf POSTINC1,W,0" );
            // for FP data, mask sign bit
            if ( op._e1->isFloatingPoint() )
            {
              gen ( "movff POSTINC1,PRODL" ) ;
              gen ( "bcf PRODL,7,0" ) ;
              gen ( "iorwf PRODL,W,0" );
            }
            else
              gen ( "iorwf POSTINC1,W,0" );

          }
        }
        break ;
      }


      case Operation::PopTestN: // works for any data size
      {
        int bfsiz, bfoffset ;

        gen ( "movf POSTDEC0,W,0" ) ; --stk ;
        // if tested entity is a bit field
        if ( op.isBF ( bfsiz, bfoffset ) )
        {
          gen ( "andlw 0x"+utility::toHexString ( BFMask ( bfsiz, bfoffset ) ) ) ;
        }
        // other bytes cannot be bit field
        for ( int i = 1 ; i < op._nbytes ; ++i )
        {
          gen ( "iorwf POSTDEC0,W,0" );
          --stk ;
        }
        Wvalid = false ;
        break ;
      }

      case Operation::GotoLabelIf:
      {
        if ( op._val == 0 )   //  branch if zero macro
          out << "\tIBZ " << op._str1 << endl ;
        else     //  branch if not zero macro
          out << "\tIBNZ " << op._str1 << endl ;
        break ;
      }

      case Operation::CallFunction:
      {
        string funcname ( "C18_" ) ;
        funcname +=   op._e1->name() ;

        callRTL ( funcname ) ;
        emitCleanLocalData ( op._val ) ;
        stk -=  op._val ;
        break ;
      }

      case Operation::PushBreakLabel:
      {
        c18.parser()->curFct()->pushBreak ( op._str1 ) ;
        break ;
      }

      case Operation::PopBreakLabel:
      {
        c18.parser()->curFct()->popBreak() ;
        break ;
      }

      case Operation::GotoBreakLabel:
      {

        string s = c18.parser()->curFct()->topBreak() ;
        if ( s != "" ) out << "\tIBRA " << s << endl ;
        break ;
      }

      case Operation::PushContinueLabel:
      {
        c18.parser()->curFct()->pushContinue ( op._str1 ) ;
        break ;
      }

      case Operation::PopContinueLabel:
      {
        c18.parser()->curFct()->popContinue() ;
        break ;
      }

      case Operation::GotoContinueLabel:
      {

        string s = c18.parser()->curFct()->topContinue() ;
        if ( s != "" ) out << "\tIBRA " << s << endl ;
        break ;
      }

      case Operation::PushCaseLabel:
      {
        c18.parser()->curFct()->pushCase ( op._str1 ) ;
        break ;
      }

      case Operation::PopCaseLabel:
      {
        c18.parser()->curFct()->popCase() ;
        break ;
      }

      case Operation::GotoCaseLabel:
      {
        string s = c18.parser()->curFct()->topCase() ;

        if ( s != "" ) emitSwitch ( s, op._str1 ) ;
        break ;
      }

      case Operation::PutCaseLabel:
      {
        string s = c18.parser()->curFct()->topCase() ;
        if ( s != "" ) out << s << "_" << op._str1 << endl ;
        Wvalid = false ; // potential branches to this label invalidate W
        break ;
      }

      case Operation::CallTos:
      {
        callRTL ( "indirect_call" );
        stk -= 2 ;
        emitCleanLocalData ( op._val ) ;
        stk -=  op._val ;
        break ;
      }

      case Operation::PushN:

        nb = op._nbytes ;
        if ( op._e1 == 0 )
        {
          // push constant : can push up to 4 bytes
          for ( k1 = 0 , v =  op._val ; k1 < nb ; ++k1, v >>= 8 )
          {
            emitPushCst8 ( v  & 0xFF ) ;
          }
        }
        else if ( op._e1->isGlobal() )
        {
          if ( nb <= 4 )
          {
            for ( k1 = 0 ; k1 < nb ; ++k1 )
            {
              out << "\tmovff " <<  mkGlob ( op._e1->name() ,k1 )
              << ",PREINC0" << endl ;
            }
          }
          else
          {
            emitMovAddrToP ( op._e1, 0 ) ;
            setW ( nb ) ;
            callRTL ( "pushSmallBlock" ) ;
          }
        }
        else if ( op._e1->isLocal() )
        {
          if ( nb <= 4 )
          {
            off =   varOffset ( op._e1 ) ;
            ind = emitStackOff ( off ) ;
            for ( k1 = 0 ; k1 < nb ; ++k1 )
            {
              out << "\tmovff " << ind << ",PREINC0" << endl ;
            }
          }
          else
          {
            // push local data
            setW ( nb ) ;
            out << "\tmovwf PRODL,0" << endl ; // byte count
            off =   varOffset ( op._e1 ) ;
            ind = emitStackOff ( off ) ; // offset of block
            label1 = c18.uniqueLabel() ;
            out << label1 << endl ;
            out << "\tdecf PRODL,F,0" << endl ;
            out << "\tmovff " << ind << ",PREINC0" << endl ;
            out << "\tbnz " << label1 << endl ;
          }
        }
        else if ( op._e1->isConstant() )
        {
          // push constant : can push up to 4 bytes
          for ( k1 = 0 , v = op._e1->value() ; k1 < nb ; ++k1, v >>= 8 )
          {
            emitPushCst8 ( v  & 0xFF ) ;
          }
        }

        stk += nb  ;
        break ;

      case Operation::PushNR:
        nb = op._nbytes ;
        if ( nb == 1 )
        {
          out << "\tmovwf PREINC0,0" << endl ;
        }
        else if ( nb <= 4 )
        {
          for ( k1 = 0 ; k1 < nb ; ++k1 )
            out << "\tmovff R0+"<< i2s ( k1 ) << ",PREINC0" << endl ;
        }
        else
        {
          gen ( "lfsr 1,R0" ) ;
          setW ( nb ) ;
          label1 = c18.uniqueLabel() ;
          lab ( label1 ) ;
          gen ( "addlw -1" );
          gen ( "movff POSTINC1,PREINC0" ) ;
          gen ( "bnz " +label1 ) ;
          W = 0 ;
        }
        stk += nb ;
        break ;



      case Operation::PushP:
        out << "\tmovff FSR1L,PREINC0" << endl ;
        out << "\tmovff FSR1H,PREINC0" << endl ;
        stk += 2  ;
        break ;


      case Operation::PopN:
        nb = op._nbytes ;
        if ( op._e1->isGlobal() )
        {
          if ( nb <= 4 )
          {
            for ( k1 = nb-1 ; k1 >= 0 ; --k1 )
            {
              gn =  mkGlob ( op._e1->name() ,k1 ) ;
              out << "\tmovff POSTDEC0," << gn  << endl ;
            }
          }
          else
          {
            gn =  mkGlob ( op._e1->name() ,nb-1 ) ;
            label1 = c18.uniqueLabel() ;
            gen ( "ILFSR1 "+gn ) ;
            setW ( nb ) ;
            out << label1 << endl ;
            out << "\taddlw -1" << endl ;
            out << "\tmovff POSTDEC0,POSTDEC1" << endl ;
            out << "\tbnz  " << label1 << endl ;
            W = 0 ;
          }
        }
        else if ( op._e1->isLocal() )
        {
          //           off =   varOffset ( op._e1 ) ;
          //           ind = emitStackOff ( off ) ; // offset of block
          if ( nb <= 4 )
          {
            string dst  = emitStackOff ( varOffset ( op._e1 ) + nb ) ;
            for ( k1 = nb ; k1 ; --k1 )
              out << "\tmovff POSTDEC0,"<< dst  <<endl ;
          }
          else
          {
            label1 = c18.uniqueLabel() ;
            setW ( nb ) ;
            gen ( "movwf PRODL,0" ) ;
            setW ( varOffset ( op._e1 ) + nb ) ;
            lab ( label1 )  ;
            gen ( "decf PRODL,F,0" ) ;
            gen ( "movff POSTDEC0,PLUSW0" ) ;
            gen ( "bnz "+label1 ) ;
          }
        }
        // else ???
        stk -= nb ;
        break ;


        // ATTN: does not replaces Pop8R
        // but replaces Pop16R and Pop8RL
      case Operation::PopNR:

        nb = op._nbytes ;
        if ( nb == 1 )
        {
          gen ( "movf POSTDEC0,W,0" ) ;
          Wvalid = false ;
        }
        else if ( nb <= 4 )
        {
          for ( k1=nb-1 ; k1 >=0 ; --k1 )
          {
            gen ( "movff POSTDEC0,R0+"+i2s ( k1 ) ) ;
          }
        }
        else
        {
          gen ( "lfsr 1,R0" ) ;
          setW ( nb ) ;
          lab ( label1 = c18.uniqueLabel() )  ;
          callRTL ( "popSmallBlock" ) ;
          W = 0 ;
        }
        stk -= nb ;
        break ;







      case Operation::PopP:
        out << "\tmovff POSTDEC0,FSR1H" << endl ;
        out << "\tmovff POSTDEC0,FSR1L" << endl ;
        stk -= 2  ;
        break ;

      case Operation::Mov8RLtoTos:
        out << "\tmovff R0,INDF0" << endl ;
        break ;


      case Operation::MovNRtoTos:
      {
        nb = op._nbytes ;

        if ( nb == 1 )
        {
          gen ( "movwf INDF0,0" ) ;
        }
        else if ( nb == 2 )
        {
          gen ( "movff R0+1,INDF0" ) ; ;
          setW ( -1 ) ;
          gen ( "movff R0,PLUSW0" );
        }
        else
        {
          setW ( -nb ) ;
          gen ( "lfsr 1,R0" );
          label1 = c18.uniqueLabel() ;
          lab ( label1 ) ;
          gen ( "addlw 1" ) ;
          gen ( "movff POSTINC1,PLUSW0" ) ;
          gen ( "bnz "+label1 ) ;
          W = 0 ;
        }
      }
      break ;


      case Operation::AddN:
      {
        if ( op._nbytes == 1 )
          gen ( "addwf INDF0,F,0" ) ;
        else if ( op._nbytes == 2 )
          callRTL ( "add16" ) ;
        else if ( op._nbytes == 4 )
          callRTL ( "add32" ) ;
      }
      break ;

      case Operation::AddFP:
      {
        callRTL ( "addFP" ) ;
      }
      break ;

      case Operation::Add16scale2:
        callRTL ( "add16x2" ) ;
        break ;

      case Operation::Add16scale4:
        callRTL ( "add16x4" ) ;
        break ;

      case Operation::SubN:
      {
        if ( op._nbytes == 1 )
          gen ( "subwf INDF0,F,0" ) ;
        else if ( op._nbytes == 2 )
          callRTL ( "sub16" ) ;
        else if ( op._nbytes == 4 )
          callRTL ( "sub32" ) ;
      }
      break ;

      case Operation::SubFP:
      {
        callRTL ( "subFP" ) ;
      }
      break ;

      case Operation::Sub16scale2:
        callRTL ( "sub16x2" ) ;
        break ;

      case Operation::SubPtrScale2:
        callRTL ( "subptrscale2" ) ;
        break ;

      case Operation::IndirectN:
        k1 = op._nbytes ;
        if ( k1 == 1 )
        {
          gen ( "movff POSTDEC0,FSR1H" ) ;
          gen ( "movff POSTDEC0,FSR1L" ) ;
          gen ( "movff INDF1,PREINC0" ) ;
        }
        else if ( k1 == 2 )
        {
          gen ( "movff POSTDEC0,FSR1H" ) ;
          gen ( "movff POSTDEC0,FSR1L" ) ;
          gen ( "movff POSTINC1,PREINC0" ) ;
          gen ( "movff POSTDEC1,PREINC0" ) ;
        }
        else
        {
          setW ( k1 ) ;
          callRTL ( "indirectN",false ) ; // ATTN: if reimplementing indirectN
          W = 0 ; // indirectN set W to 0
        }
        stk += ( k1-2 ) ;
        break ;


      case Operation::MovConst8toR:
        if ( op._e1 == 0 )
        {
          emitMovCstToW ( op._val ) ;
        }
        else if ( op._e1->isGlobal() )
        {
          gn = mkGlob ( op._e1->name() ) ;
          out << "\tmovff " << gn <<",WREG" << endl ;
          Wvalid = false ;
        }
        else if ( op._e1->isLocal() )
        {
          off = varOffset ( op._e1 )  ;
          ind = emitStackOff ( off ) ;
          out << "\tmovf " << ind << ",W,0" << endl ;

          Wvalid = false ;
        }
        else if ( op._e1->isConstant() )
        {
          emitMovCstToW ( op._e1->value() ) ;
        }
        break ;





      case Operation::Mov8toR:
        if ( op._e1 == 0 )
        {
          emitMovCstToW ( op._val ) ;
        }
        else if ( op._e1->isGlobal() )
        {
          gn =  mkGlob ( op._e1->name() ) ;
          out << "\tmovff " << gn <<",WREG" << endl ;
          Wvalid = false ;
        }
        else if ( op._e1->isLocal() )
        {
          off =  varOffset ( op._e1 ) ;
          ind = emitStackOff ( off ) ;
          out << "\tmovf " << ind << ",W,0" << endl ;
          Wvalid = false ;
        }
        else if ( op._e1->isConstant() )
        {
          int k =  op._e1->value() ;
          emitMovCstToW ( k ) ;
        }
        break ;

      case Operation::Mov8toRL:
        if ( op._e1 == 0 )
        {
          if ( op._val  == 0 )
          {
            out << "\tclrf R0,0" <<endl ;
          }
          else if ( ( op._val & 0xFF ) == 0xFF ) // ?? pourquoi masque ici et pas ailleurs ?
          {
            out << "\tsetf R0,0" <<endl ;
          }
          else
          {
            emitMovCstToW ( op._val ) ;
            out << "\tmovwf R0,0" << endl ;
          }
        }
        else if ( op._e1->isGlobal() )
        {
          gn =  mkGlob ( op._e1->name() ) ;
          out << "\tmovff " << gn <<",R0" << endl ;
        }
        else if ( op._e1->isLocal() )
        {
          off =  varOffset ( op._e1 ) ;
          ind = emitStackOff ( off ) ;
          out << "\tmovff " << ind << ",R0" << endl ;
        }
        else if ( op._e1->isConstant() )
        {
          int k =  op._e1->value() ;

          if ( k  == 0 )
          {
            out << "\tclrf R0,0" <<endl ;
          }
          else if ( ( k & 0xFF )   == 0xFF )
          {
            out << "\tsetf R0,0" <<endl ;
          }
          else
          {
            emitMovCstToW ( k ) ;
            out << "\tmovwf R0,0" << endl ;
          }
        }
        break ;
      case Operation::ExtendRL:
      {
        out << "\tclrf R0H,0" << endl ;
        if ( op._val != 0 ) // signed extension
        {
          out << "\tbtfsc R0L,7,0" << endl ;
          out << "\tsetf R0H,0" << endl ;
        }
        break ;
      }

      case Operation::MovConst16toR:
        if ( op._e1 == 0 )
        {
          emitMovCst8To ( op._val & 0xFF, "R0" ) ;
          emitMovCst8To ( ( op._val>>8 ) & 0xFF  , "R0+1" ) ;
        }
        else if ( op._e1->isGlobal() )
        {
          gn = mkGlob ( op._e1->name() ) ;
          out << "\tmovff " << gn <<",R0" << endl ;
          out << "\tmovff " << gn << "+1,R0+1" << endl ;
        }
        else if ( op._e1->isFct() )
        {
          gn = mkGlob ( op._e1->name() ) ;
          out << "\tmovlw LOW " << gn <<endl ;
          out << "\tmovwf R0,0" << endl ;
          out << "\tmovlw HIGH " << gn <<endl ;
          out << "\tmovwf R0+1,0" << endl ;
          Wvalid = false ;
        }
        else if ( op._e1->isLocal() )
        {
          off =   varOffset ( op._e1 ) ;
          ind = emitStackOff ( off ) ;
          out << "\tmovff " << ind << ",R0" << endl ;
          ind = emitStackOff ( off+1 ) ;
          out << "\tmovff " << ind << ",R0+1" << endl ;
        }
        else if ( op._e1->isConstant() )
        {
          emitMovCst8To ( op._e1->value() & 0xFF , "R0" ) ;
          emitMovCst8To ( ( op._e1->value() >>8 ) & 0xFF  , "R0+1" ) ;
        }
        break ;

      case Operation::MovNtoR:
        emitMovNToR ( op._e1, op._nbytes, op._val );
        break;

      case Operation::MovRLto8:
        if ( op._e1->isGlobal() )
        {
          gn = mkGlob ( op._e1->name() ) ;
          out << "\tmovff R0," << gn  << endl ;
        }
        else if ( op._e1->isLocal() )
        {
          ind = emitStackOff ( varOffset ( op._e1 ) ) ;
          out << "\tmovff R0," << ind << endl ;
        }
        break ;

      case Operation::MovRtoN:
      {
        nb = op._nbytes ;

        if ( op._e1->isGlobal() )
        {
          gn = mkGlob ( op._e1->name() ) ;
          if ( nb == 1 )
          {
            gen ( "movff WREG,"+gn ) ;
          }
          else if ( nb <= 4 )
          {
            for ( int i = 0 ; i < nb ; ++i )
            {
              gen ( "movff R0+"+i2s ( i ) +","+gn+"+"+i2s ( i ) );
            }
          }
          else
          {
            gen ( "lfsr 1,R0" ) ;
            gen ( "ILFSR2 "+gn ) ;
            setW ( nb ) ;
            callRTL ( "movSmallBlock" ) ;
          }
        }
        else if ( op._e1->isLocal() )
        {
          off =   varOffset ( op._e1 ) ;
          if ( nb == 1 )
          {
            if ( off == 0 )
              gen ( "movwf INDF0,0" ) ;
            else
            {
              gen ( "movwf PREINC0,0" );
              setW ( off ) ;
              gen ( "movff POSTDEC0,PLUSW0" ) ;
            }
          }
          else if ( nb ==2 )
          {
            ind = emitStackOff ( off ) ;
            gen ( "movff R0,"+ind ) ;
            ind = emitStackOff ( off+1 ) ;
            gen ( "movff R0+1,"+ind ) ;
          }
          else
          {
            gen ( "lfsr 1,R0" ) ;
            setW ( nb ) ;
            gen ( "movwf PRODL,0" ) ;
            setW ( off ) ;
            callRTL ( "movSmallBlockToStack" ) ;
          }
        }
      }
      break ;



      case Operation::Mov8RLtoR:
        out << "\tmovf R0,W,0" << endl ;
        Wvalid = false ;
        break ;

      case Operation::MovAddrtoR:
        emitMovAddrToR ( op._e1 , op._val ) ;
        break ;

      case Operation::MovGlobAddrToGlob16:
        emitMovGlobAddrToGlob16 ( op._e1, op._val , op._e2 ) ;
        break ;


      case Operation::PushPtrIndirectN:
      {
        // NOTE: FSR1 preserved for any size
        nb = op._nbytes ;
        if ( nb == 1 )
        {
          gen ( "movff INDF1,PREINC0" ) ;
        }
        else if ( nb == 2 )
        {
          gen ( "movff POSTINC1,PREINC0" ) ;
          gen ( "movff POSTDEC1,PREINC0" ) ;
        }
        else if ( nb == 4 )
        {
          gen ( "movff POSTINC1,PREINC0" ) ;
          gen ( "movff POSTINC1,PREINC0" ) ;
          gen ( "movff POSTINC1,PREINC0" ) ;
          gen ( "movff POSTDEC1,PREINC0" ) ;
          gen ( "movf POSTDEC1,F,0" ) ;
          gen ( "movf POSTDEC1,F,0" ) ;
        }
        else
        {
          gen ( "movff FSR1L,PRODL" ) ;
          gen ( "movff FSR1H,PRODH" ) ;
          setW ( nb ) ;
          label1 = c18.uniqueLabel() ;
          out << label1 << endl ;
          gen ( "addlw -1" ) ;
          gen ( "movff POSTINC1,PREINC0" ) ;
          gen ( "bnz "+label1 ) ;
          gen ( "movff PRODL,FSR1L" ) ;
          gen ( "movff PRODH,FSR1H" ) ;
          W = 0 ;
        }

        stk += nb ;
      }
      break ;

      // devrait egalement preserver FSR1L
      case Operation::PtrIndirectNtoR:
      {
        nb = op._nbytes ;
        if ( nb == 1 )
        {
          gen ( "movf INDF1,W,0" ) ;
          Wvalid = false ;
        }
        else if ( nb == 2 )
        {
          gen ( "movff POSTINC1,R0" ) ;
          gen ( "movff POSTDEC1,R0+1" ) ;
        }
        else if ( nb == 4 )
        {
          gen ( "movff POSTINC1,R0" ) ;
          gen ( "movff POSTINC1,R0+1" ) ;
          gen ( "movff POSTINC1,R0+2" ) ;
          gen ( "movff POSTDEC1,R0+3" ) ;
          gen ( "movf POSTDEC1,F,0" ) ;
          gen ( "movf POSTDEC1,F,0" ) ;
        }
        else
        {
          gen ( "movff FSR1L,PRODL" ) ;
          gen ( "movff FSR1H,PRODH" ) ;
          setW ( nb );
          label1 = c18.uniqueLabel() ;
          gen ( "ILFSR2 R0" ) ;
          out << label1 << endl ;
          gen ( "addlw -1" ) ;
          gen ( "movff POSTINC1,POSTINC2" ) ;
          gen ( "bnz "+label1 ) ;
          W = 0 ;
          gen ( "movff PRODL,FSR1L" ) ;
          gen ( "movff PRODH,FSR1H" ) ;
        }
      }
      break ;

      case Operation::MovToP:
      {
        int cst =  op._val ;
        int cstL = cst & 0xFF ;
        int cstH = ( cst >> 8 ) & 0xFF ;


        if ( op._e1->isGlobal() )
        {
          if ( op._e1->isArray() )
          {
            emitMovAddrToP ( op._e1,cst ) ;
          }
          else
          {
            gn = mkGlob ( op._e1->name() ) ;
            gen ( "movff "+gn+",FSR1L" ) ;
            gen ( "movff "+gn+"+1,FSR1H" ) ;
            if ( cst != 0 )
            {
              if ( cst == 1 )
                gen ( "incf FSR1L,F,0" ) ;
              else
              {
                emitMovCstToW ( cstL ) ;
                out << "\taddwf FSR1L,F,0" << endl ;
              }
              emitMovCstToW ( cstH ) ;
              out << "\taddwfc FSR1H,F,0" << endl ;
            }
          }

        }
        else if ( op._e1->isLocal() )
        {
          if ( op._e1->isArray() )
          {
            emitMovAddrToP ( op._e1,cst ) ;
          }
          else
          {
            off = varOffset ( op._e1 ) ;
            ind = emitStackOff ( off ) ;
            out << "\tmovff " << ind << ",FSR1L" << endl ;
            ind = emitStackOff ( off+1 ) ;
            out << "\tmovff " << ind << ",FSR1H" << endl ;

            if ( cst != 0 )
            {
              if ( cst == 1 )
                gen ( "incf FSR1L,F,0" ) ;
              else
              {
                emitMovCstToW ( cstL ) ;
                out << "\taddwf FSR1L,F,0" << endl ;
              }
              emitMovCstToW ( cstH ) ;
              out << "\taddwfc FSR1H,F,0" << endl ;
            }

          }
        }
        else if ( op._e1->isConstant() )
        {
          cst =  op._val + op._e1->value() ;
          cstL = cst & 0xFF ;
          cstH = ( cst >> 8 ) & 0xFF ;
          emitMovCst8To ( cstL, "FSR1L" ) ;
          emitMovCst8To ( cstH, "FSR1H" ) ;
        }
        break ;
      }

      case Operation::MovAddrToP:
      {
        emitMovAddrToP ( op._e1,op._val )  ;
        break ;
      }


      case Operation::MovTosToN:
      {
        nb = op._nbytes ;


        if ( op._e1->isGlobal() )
        {
          gn = mkGlob ( op._e1->name() ) ;

          if ( nb <= 4 )
          {
            for ( k1 = 0 ; k1 < nb ; ++k1 )
            {
              ind = emitStackOff ( -nb+1+k1 ) ;
              gen ( "movff "+ind+","+gn+"+"+i2s ( k1 ) ) ;
            }
          }
          else
          {
            gen ( "ILFSR1 "+gn ) ;
            setW ( -nb ) ;
            label1 = c18.uniqueLabel() ;
            lab ( label1 ) ;
            gen ( "addlw 1" ) ;
            gen ( "movff PLUSW0,POSTINC1" ) ;
            gen ( "bnz "+label1 ) ;
            W = 0 ;
          }
        }
        else if ( op._e1->isLocal() )
        {
          if ( nb == 1 )
          {
            ind = emitStackOff ( varOffset ( op._e1 ) ) ;
            out << "\tmovff INDF0," << ind << endl ;
          }
          else if ( nb == 2 )
          {
            off =  varOffset ( op._e1 ) + 1 ; // H offset of destination
            ind = emitStackOff ( off ) ;
            out << "\tmovff INDF0," << ind << endl ;
            ind = emitStackOff ( -1 ) ;
            out << "\tmovff "<< ind << ",PRODL" << endl ;
            ind = emitStackOff ( off-1 ) ;
            out << "\tmovff PRODL,"<< ind << endl ;
          }
          else
          {
            setW ( -varOffset ( op._e1 ) ) ;
            callRTL ( "getLOCALNEGADDR" ) ;  // FSR1 points to destination
            setW ( -nb ) ;
            label1 = c18.uniqueLabel() ;
            lab ( label1 ) ;
            gen ( "addlw 1" ) ;
            gen ( "movff PLUSW0,POSTINC1" ) ;
            gen ( "bnz "+label1 ) ;
            W = 0 ;
          }
        }
      }
      break ;


      case Operation::Cast8_16:
        callRTL ( "cast8_16" ) ;
        ++stk ;
        break ;

      case Operation::Cast8_16U:
        out << "\tclrf PREINC0,0" << endl ;
        ++stk ;
        break ;

      case Operation::Cast16_8:
        out << "\tclrf POSTDEC0,0" << endl ;
        --stk ;
        break ;

      case Operation::CastN_N:
      {
        int ssz =  op._val ;
        int dsz =  op._nbytes  ;
        if ( dsz != ssz )
        {
          if ( ssz == 1 )
          {
            if ( dsz == 2 )
              callRTL ( "cast8_16" ) ; // sign extension
            else if ( dsz == 4 )
              callRTL ( "cast8_32" ) ; // sign extension
          }
          else if ( ssz == 2 )
          {
            if ( dsz == 1 )
              gen ( "clrf POSTDEC0,0" ); // just truncate
            else if ( dsz == 4 )
              callRTL ( "cast16_32" ) ; // sign extension
          }
          else if ( ssz == 4 )
          {
            if ( dsz == 1 )
            {
              gen ( "clrf POSTDEC0,0" ); // just truncate
              gen ( "clrf POSTDEC0,0" ); // just truncate
              gen ( "clrf POSTDEC0,0" ); // just truncate
            }
            else if ( dsz == 2 )
            {
              gen ( "clrf POSTDEC0,0" ); // just truncate
              gen ( "clrf POSTDEC0,0" ); // just truncate
            }
          }

          // update stack size
          stk += ( dsz-ssz ) ;
        }
      }
      break ;

      case Operation::CastN_NU:
      {
        int ssz =  op._val  ;
        int dsz =  op._nbytes ;
        if ( dsz != ssz )
        {
          if ( ssz == 1 )
          {
            if ( dsz == 2 )
            {
              gen ( "clrf PREINC0,0" ) ;
            }
            else if ( dsz == 4 )
            {
              gen ( "clrf PREINC0,0" ) ;
              gen ( "clrf PREINC0,0" ) ;
              gen ( "clrf PREINC0,0" ) ;
            }
          }
          else if ( ssz == 2 )
          {
            if ( dsz == 1 )
              gen ( "clrf POSTDEC0,0" ); // just truncate
            else if ( dsz == 4 )
            {
              gen ( "clrf PREINC0,0" ) ;
              gen ( "clrf PREINC0,0" ) ;
            }
          }
          else if ( ssz == 4 )
          {
            if ( dsz == 1 )
            {
              gen ( "clrf POSTDEC0,0" ); // just truncate
              gen ( "clrf POSTDEC0,0" ); // just truncate
              gen ( "clrf POSTDEC0,0" ); // just truncate
            }
            else if ( dsz == 2 )
            {
              gen ( "clrf POSTDEC0,0" ); // just truncate
              gen ( "clrf POSTDEC0,0" ); // just truncate
            }
          }

          // update stack size
          stk += ( dsz-ssz ) ;
        }
      }
      break ;

      // Due to the complexity of FP casts, there is no advantage
      // to generate inline code
      case Operation::CastF_NU:
      {
        int ssz =  4 ;
        int dsz =  op._nbytes  ;
        string name = "castF_" ;
        name += utility::toString ( dsz*8 ); name += "U" ;
        callRTL ( name ) ;
        stk += ( dsz-ssz ) ;
        break ;
      }

      case Operation::CastF_N:
      {
        int ssz =  4 ;
        int dsz =  op._nbytes  ;
        string name = "castF_" ;
        name += utility::toString ( dsz*8 ) ;
        callRTL ( name ) ;
        stk += ( dsz-ssz ) ;
        break ;
      }

      case Operation::CastNU_F:
      {
        int ssz =  op._val;
        int dsz =  4  ;
        string name = "cast" ;
        name += utility::toString ( ssz*8 ); name += "U_F" ;
        callRTL ( name ) ;
        stk += ( dsz-ssz ) ;
        break ;
      }

      case Operation::CastN_F:
      {
        int ssz =  op._val;
        int dsz =  4  ;
        string name = "cast" ;
        name += utility::toString ( ssz*8 ); name += "_F" ;
        callRTL ( name ) ;
        stk += ( dsz-ssz ) ;
        break ;
      }






      // -------------------------------------

      case Operation::MovN:
      {
        nb = op._nbytes ;

        if ( op._e1->isGlobal()  &&  op._e2->isGlobal() )
        {
          gn = mkGlob ( op._e1->name() ) ;
          string gn1 = mkGlob ( op._e2->name() ) ;
          if ( nb <= 4 )
          {
            for ( k1 = 0 ; k1 < nb ; ++k1 )
              gen ( "movff " +  gn + "+" + i2s ( k1 ) + "," + gn1 + "+" + i2s ( k1 ) ) ;
          }
          else
          {
            gen ( "ILFSR1 "+gn ) ;
            gen ( "ILFSR2 "+gn1 ) ;

            setW ( nb );

            callRTL ( "movSmallBlock" ) ;
          }
        }
        else if ( op._e1->isLocal()  &&  op._e2->isGlobal() )
        {
          gn = mkGlob ( op._e2->name() ) ;
          off =  varOffset ( op._e1 )   ;

          if ( nb <= 4 )
          {
            for ( k1 = 0 ; k1 < nb ; ++k1 )
            {
              ind = emitStackOff ( off+k1 ) ;
              gen ( "movff " + ind + "," + gn + "+" + i2s ( k1 ) ) ;
            }
          }
          else
          {
            gen ( "ILFSR1 "+gn ) ;
            setW ( nb ) ;
            gen ( "movwf PRODL,0" ) ;
            gen ( "movlw "+i2s ( off ) ) ;
            callRTL ( "movSmallBlockFromStack" ) ;
          }
        }
        else if ( op._e1->isGlobal()  &&  op._e2->isLocal() )
        {
          gn = mkGlob ( op._e1->name() ) ;
          off = varOffset ( op._e2 ) ;

          if ( nb <= 4 )
          {
            for ( k1 = 0 ; k1 < nb ; ++k1 )
            {
              ind = emitStackOff ( off+k1 ) ;
              gen ( "movff " + gn + "+" + i2s ( k1 ) + "," + ind ) ;
            }
          }
          else
          {
            gen ( "ILFSR1 "+gn ) ;
            setW ( nb ) ;
            gen ( "movwf PRODL,0" ) ;
            gen ( "movlw "+i2s ( off ) ) ;
            callRTL ( "movSmallBlockToStack" ) ;
          }

        }
        else if ( op._e1->isLocal()  &&  op._e2->isLocal() )
        {
          if ( nb <= 4 )
          {
            for ( k1 = 0 ; k1 < nb ; ++k1 )
            {
              off =  varOffset ( op._e1 ) + k1 ;
              ind = emitStackOff ( off ) ;
              gen ( "movff " +  ind + ",PREINC0" ) ;

              off =  varOffset ( op._e2 ) + k1 ;
              ind = emitStackOff ( off ) ;
              gen ( "movff POSTDEC0," +  ind ) ; ;

            }
          }
          else
          {
            setW ( nb ) ;
            gen ( "movwf PRODL,0" ) ;
            setW ( - varOffset ( op._e2 ) ) ; // Caution !! This offset will be substracted from FSR0
            gen ( "movwf PRODH,0" ) ;
            setW ( varOffset ( op._e1 ) ) ;
            callRTL ( "movSmallBlockFromStackToStack" ) ;
          }
        }


        else if ( op._e1->isConstant()  &&  op._e2->isLocal() )
        {
          int val = op._e1->value(),  off = varOffset ( op._e2 )  ;
          for ( k1 = 0 ; k1 < nb ; ++k1, val >>= 8 )
          {
            emitMovCst8ToLocal ( val & 0xFF, off+k1 ) ;
          }

        }
        else if ( op._e1->isConstant()  &&  op._e2->isGlobal() )
        {
          int val = op._e1->value() ;
          // if the variable is placed in access bank,
          // proper adressing mode will be used.
          // this is the case of FSRx
          gn = mkGlob ( op._e2->name() ) ;
          for ( k1 = 0 ; k1 < nb ; ++k1, val >>= 8 )
          {
            int addr = op._e2->addr() ;
            // unlocated glob entity are never considered as located in bank 0
            bool bank0 = ( addr == -1 ) ? false :  accBank ( k1 +addr ) ;
            emitMovCst8To ( val & 0xFF,  gn+"+"+i2s ( k1 ) , bank0 ) ;
          }
        }
      }
      break ;




      case Operation::MulN:
      {
        if ( op._nbytes == 1 )
        {
          gen ( "mulwf INDF0,0" );
          gen ( "movff PRODL,INDF0" );
        }
        else if ( op._nbytes == 2 )
        {
          callRTL ( "mul16" );
        }
        else if ( op._nbytes == 4 )
        {
          callRTL ( "mul32" );
        }
        break ;
      }

      case Operation::MulFP:
        callRTL ( "mulFP" ) ;
        break ;

      case Operation::DivN:
      {
        if ( op._nbytes == 1 )
        {
          callRTL ( "div8" );
        }
        else if ( op._nbytes == 2 )
        {
          callRTL ( "div16" );
        }
        else if ( op._nbytes == 4 )
        {
          callRTL ( "div32" );
        }
        break ;
      }

      case Operation::DivNU:
      {
        if ( op._nbytes == 1 )
        {
          callRTL ( "div8u" );
        }
        else if ( op._nbytes == 2 )
        {
          callRTL ( "div16u" );
        }
        else if ( op._nbytes == 4 )
        {
          callRTL ( "div32u" );
        }
        break ;
      }

      case Operation::DivFP:
        callRTL ( "divFP" ) ;
        break ;

      case Operation::ModN:
      {
        if ( op._nbytes == 1 )
          callRTL ( "mod8" );
        else if ( op._nbytes == 2 )
          callRTL ( "mod16" );
        else if ( op._nbytes == 4 )
          callRTL ( "mod32" );
        break ;
      }

      case Operation::ModNU:
      {
        if ( op._nbytes == 1 )
          callRTL ( "mod8u" );
        else if ( op._nbytes == 2 )
          callRTL ( "mod16u" );
        else if ( op._nbytes == 4 )
          callRTL ( "mod32u" );
        break ;
      }

      case Operation::PopPtrIndirectN:
      {
        nb = op._nbytes ;
        if ( nb == 1 )
        {
          gen ( "movff POSTDEC0,INDF1" ) ;
        }
        else if ( nb == 2 )
        {
          gen ( "movff POSTDEC0,PREINC1" ) ;
          gen ( "movf POSTDEC1,F,0 ; just decr" );
          gen ( "movff POSTDEC0,INDF1" ) ;
        }
        else
        {
          setW ( nb ) ;
          label1 = c18.uniqueLabel() ;
          out << label1 << endl ;
          gen ( "decf WREG,F,0" ) ;
          gen ( "movff POSTDEC0,PLUSW1" ) ;
          gen ( "bnz "+label1 ) ;
        }
        stk -= nb ; ;
      }
      break ;


      case Operation::MovTosToPtrIndirectN:
      {
        nb = op._nbytes ;
        if ( nb == 1 )
        {
          gen ( "movff INDF0,INDF1" ) ;
        }
        else if ( nb == 2 )
        {
          setW ( -1 ) ;
          gen ( "movff PLUSW0,POSTINC1" );
          gen ( "movff INDF0,POSTDEC1" ) ;
        }
        else
        {
          setW ( nb ) ;
          gen ( "movwf PRODL,0" ) ;
          setW ( - ( nb-1 ) ) ;
          callRTL ( "movSmallBlockFromStack" ) ;
        }
      }
      break ;



      case Operation::MovPtrIndirectNto:
      {
        emitMovPtrIndirectTo ( op._e1 ) ;
      }
      break ;


      case Operation::IndirectPopNR:
      {
        nb = op._nbytes ;

        gen ( "movff POSTDEC0,FSR1H" ) ;
        gen ( "movff POSTDEC0,FSR1L" ) ;

        if ( nb == 1 )
        {
          gen ( "movf INDF1,W,0" ) ;
        }
        else if ( nb <= 4 )
        {
          for ( int i=0 ; i < nb ; ++i )
          {
            gen ( "movff POSTINC1,R0+" + i2s ( i ) ) ;
          }
        }
        else
        {
          gen ( "ILFSR2 R0" ) ;
          setW ( nb ) ;
          callRTL ( "movSmallBlock" ) ;
        }
        stk -= 2 ;
      }
      break ;

      case Operation::IndirectPop8RL:
      {
        out << "\tmovff POSTDEC0,FSR1H" << endl ;
        out << "\tmovff POSTDEC0,FSR1L" << endl ;
        out << "\tmovff INDF1,R0" << endl ;
        stk -= 2 ;
      }

      break ;

      case Operation::NegN:
      {
        if ( op._nbytes == 1 )
        {
          out << "\tcomf INDF0,F,0\n"
          "\tincf INDF0,F,0" << endl ;
        }
        else if ( op._nbytes == 2 )
          callRTL ( "neg16" ) ;
        else if ( op._nbytes == 4 )
          callRTL ( "neg32" ) ;
        break ;

      }

      case Operation::NegF:
      {
        // callRTL ( "fpneg32" ) ;
        out << "\tbtg INDF0,7,0" << endl ;
        break ;
      }

      case Operation::PushAddr:
      {
        emitPushAddr ( op._e1, op._val ) ;
        stk += 2 ;
      }
      break ;


      case Operation::LNotN:
      {
        if ( op._nbytes == 1 )
          callRTL ( "lnot8" ) ;
        else if ( op._nbytes == 2 )
        {
          callRTL ( "lnot16" ) ; --stk ;
        }
        else if ( op._nbytes == 4 )
        {
          callRTL ( "lnot32" ) ; stk -= 3 ;
        }
      }
      break ;

      case Operation::LNotFP:
      {
        callRTL ( "lnotFP" ) ; stk -= 3 ;
      }
      break ;


      case Operation::BNotN:
      {
        if ( op._nbytes == 1 )
        {
          out << "\tcomf INDF0,F,0" <<endl ;
        }
        else if ( op._nbytes == 2 )
        {
          out << "\tcomf INDF0,F,0" <<endl ;
          setW ( -1 ) ;
          out << "\tcomf PLUSW0,F,0" <<endl ;
        }
        else if ( op._nbytes == 4 )
        {
          gen ( "comf INDF0,F,0" ) ;
          setW ( -1 ) ;
          gen ( "comf PLUSW0,F,0" ) ;
          setW ( -2 ) ;
          gen ( "comf PLUSW0,F,0" ) ;
          setW ( -3 ) ;
          gen ( "comf PLUSW0,F,0" ) ;
        }
        break ;
      }
      case Operation::IncN:
      {
        string access = "0" , target  ;
        int bsize, boffset ;
        if ( op._nbytes == 1 )
        {
          if ( op._e1 == 0 &&  op._e2 == 0 )
          {
            target = "INDF1" ;
          }
          else if ( op._e1->isGlobal() )
          {
            emitLoadBSR ( op._e1, 0, target , access ) ;
          }
          else if ( op._e1->isLocal() )
          {
            off =  varOffset ( op._e1 )  ;
            target = emitStackOff ( off ) ;
          }

          op.isBF ( bsize,boffset ) ;
          emitInc8 ( target, access, bsize,boffset ) ;

        }
        else if ( op._nbytes == 2 )

        {
          if ( op._e1 == 0 &&  op._e2 == 0 )
          {
            out << "\tincf POSTINC1,1,0" <<endl ;
            emitMovCstToW ( 0 ) ;
            out << "\taddwfc POSTDEC1,1,0" << endl ;
          }
          else if ( op._e1->isGlobal() )
          {
            emitLoadBSR ( op._e1, 0, gn, access ) ;
            gen ( "incf " + gn +",F,"+access ) ;
            emitLoadBSR ( op._e1, 1, gn, access ) ;
            emitMovCstToW ( 0 ) ;
            gen ( "addwfc " + gn +",F,"+access ) ;
          }
          else if ( op._e1->isLocal() )
          {
            label1 = c18.uniqueLabel() ;
            off =  varOffset ( op._e1 )  ;
            ind = emitStackOff ( off ) ;
            out << "\tincf " << ind << ",F,0"  << endl ;
            out << "\tbnc " << label1 << endl ;
            ind = emitStackOff ( off+1 ) ;
            out << "\tincf " << ind <<",F,0" << endl ;
            out << label1 << endl ; ;
          }
        }
        else if ( op._nbytes == 4 )
        {
          if ( op._e1 == 0 &&  op._e2 == 0 )
          {
            callRTL ( "inc32indirect" ) ;
          }
          else if ( op._e1->isGlobal() ||  op._e1->isLocal() )
          {
            emitMovAddrToP ( op._e1 ) ;
            callRTL ( "inc32indirect" ) ;
          }
        }
        break ;
      }

      case Operation::DecN:
      {
        string access="0" , target;
        int  bsize,boffset  ;

        if ( op._nbytes == 1 )
        {
          if ( op._e1 == 0 &&  op._e2 == 0 )
          {
            // out << "\tdecf INDF" << op._val << ",F,0" << endl ;
            target = "INDF1" ;
          }
          else if ( op._e1->isGlobal() )
          {
            emitLoadBSR ( op._e1, 0, target , access ) ;
            // gen ( "decf " + gn +",F,"+access ) ;
          }
          else if ( op._e1->isLocal() )
          {
            off =  varOffset ( op._e1 )  ;
            target = emitStackOff ( off ) ;
            // out << "\tdecf " << ind << ",F,0"  << endl ;
          }

          op.isBF ( bsize,boffset ) ;
          emitDec8 ( target, access, bsize,boffset ) ;

        }


        else if ( op._nbytes == 2 )
        {
          if ( op._e1 == 0 &&  op._e2 == 0 )
          {
            out << "\tdecf POSTINC1,1,0" <<endl ;
            emitMovCstToW ( 0 ) ;
            out << "\tsubwfb POSTDEC1,1,0" << endl ;
          }
          else if ( op._e1->isGlobal() )
          {
            emitLoadBSR ( op._e1, 0, gn, access ) ;
            gen ( "decf " + gn +",F,"+access ) ;
            emitLoadBSR ( op._e1, 1, gn, access ) ;
            emitMovCstToW ( 0 ) ;
            gen ( "subwfb " + gn +",F,"+access ) ;
          }
          else if ( op._e1->isLocal() )
          {
            off =  varOffset ( op._e1 )  ;
            label1 = c18.uniqueLabel()  ;

            ind = emitStackOff ( off ) ;
            out << "\tdecf " << ind << ",F,0"  << endl ;
            out << "\tbc " << label1 << endl ;
            ind = emitStackOff ( off+1 ) ;
            out << "\tdecf " << ind <<",F,0" << endl ;
            out << label1 << endl ; ;
          }

        }
        else if ( op._nbytes == 4 )
        {
          if ( op._e1 == 0 &&  op._e2 == 0 )
          {
            callRTL ( "dec32indirect" ) ;
          }
          else if ( op._e1->isGlobal() ||  op._e1->isLocal() )
          {
            emitMovAddrToP ( op._e1 ) ;
            callRTL ( "dec32indirect" ) ;
          }
        }

        break ;
      }


      case Operation::Inc16x2:
      {
        if ( op._e1 == 0 &&  op._e2 == 0 )
        {
          emitMovCstToW ( 2 ) ;
          out << "\taddwf POSTINC1,F,0" <<endl ;
          emitMovCstToW ( 0 ) ;
          out << "\taddwfc POSTDEC1,F,0" << endl ;

        }
        else if ( op._e1->isGlobal() )
        {
          gn = mkGlob ( op._e1->name() ) ;
          emitMovCstToBSR ( gn ) ;
          emitMovCstToW ( 2 ) ;
          out << "\taddwf " << gn << ",F,1" << endl ;
          emitMovCstToBSR ( gn+"+1" ) ;
          emitMovCstToW ( 0 ) ;
          out << "\taddwfc " << gn << "+1,F,1" << endl ;
        }

        else if ( op._e1->isLocal() )
        {
          off =  varOffset ( op._e1 )  ;
          label1 = c18.uniqueLabel() ;  label2 = c18.uniqueLabel() ;

          ind = emitStackOff ( off ) ;
          out << "\tincf " << ind << ",F,0"  << endl ;
          out << "\tbnc " << label1 << endl ;
          ind = emitStackOff ( off+1 ) ;
          out << "\tincf " << ind <<",F,0" << endl ;
          out << label1 << endl ; ;

          ind = emitStackOff ( off ) ;
          out << "\tincf " << ind << ",F,0"  << endl ;
          out << "\tbnc " << label2 << endl ;
          ind = emitStackOff ( off+1 ) ;
          out << "\tincf " << ind <<",F,0" << endl ;
          out << label2 << endl ; ;
        }
      }
      break ;

      case Operation::Dec16x2:
      {
        if ( op._e1 == 0 &&  op._e2 == 0 )
        {
          emitMovCstToW ( 2 ) ;
          out << "\tsubwf POSTINC1,F,0" <<endl ;
          emitMovCstToW ( 0 ) ;
          out << "\tsubwfb POSTDEC1,F,0" << endl ;

        }
        else if ( op._e1->isGlobal() )
        {
          gn = mkGlob ( op._e1->name() ) ;
          emitMovCstToBSR ( gn ) ;
          emitMovCstToW ( 2 ) ;
          out << "\tsubwf " << gn << ",F,1" << endl ;
          emitMovCstToBSR ( gn+"+1" ) ;
          emitMovCstToW ( 0 ) ;
          out << "\tsubwfb " << gn << "+1,F,1" << endl ;
        }
        else if ( op._e1->isLocal() )
        {

          off =  varOffset ( op._e1 )  ;
          string label1 = c18.uniqueLabel() ,  label2 = c18.uniqueLabel() ;

          ind = emitStackOff ( off ) ;
          out << "\tdecf " << ind << ",F,0"  << endl ;
          out << "\tbc " << label1 << endl ;
          ind = emitStackOff ( off+1 ) ;
          out << "\tdecf " << ind <<",F,0" << endl ;
          out << label1 << endl ; ;

          ind = emitStackOff ( off ) ;
          out << "\tdecf " << ind << ",F,0"  << endl ;
          out << "\tbc " << label2 << endl ;
          ind = emitStackOff ( off+1 ) ;
          out << "\tdecf " << ind <<",F,0" << endl ;
          out << label2 << endl ; ;
        }

      }
      break ;

      case Operation::Inc8TOS:
      {
        out << "\tincf INDF0,F,0" << endl ;
      }
      break ;

      case Operation::Dec8TOS:
      {
        out << "\tdecf INDF0,F,0" << endl ;
      }
      break ;

      case Operation::Inc16TOS:
      {
        setW ( -1 ) ;
        out << "\tinfsnz PLUSW0,F,0" << endl ;
        out << "\tincf INDF0,F,0" << endl ;
      }
      break ;

      case Operation::Dec16TOS:
      {
        setW ( -1 ) ;
        out << "\tdecf PLUSW0,F,0" << endl ;
        // le carry est un borrow inverse lors des soustractions
        label1 = c18.uniqueLabel() ;
        out << "\tbc " << label1 << endl ;
        out << "\tdecf INDF0,F,0" << endl ;
        out << label1 << endl ;
      }
      break ;

      case Operation::Double8R:
      {
        out << "\taddwf WREG,W,0" << endl ;
        Wvalid = false ;
      }
      break ;

      case Operation::Double16R:
      {
        out << "\tbcf STATUS,C,0" << endl ; // Clear carry
        out << "\trlcf R0,F,0" << endl ;
        out << "\trlcf R0+1,F,0" << endl ;
      }
      break ;

      case Operation::Quad16R:
      {
        callRTL ( "R0x4" );
      }
      break ;

      case Operation::IPAddN:
      case Operation::IPSubN:
      {
        emitIPAddSubN ( op ) ;
      }
      break ;

      case Operation::IPMulN:
      {
        emitIPMulN ( op ) ;
      }
      break ;

      case Operation::IPDivN:
      case Operation::IPDivNU:
      case Operation::IPModN:
      case Operation::IPModNU:
      {
        emitIPDivModN ( op ) ;
      }
      break ;

      case Operation::IPAddF:
      case Operation::IPSubF:
      case Operation::IPMulF:
      case Operation::IPDivF:
        emitIPAddSubMulDivF ( op ) ;
        break ;

      case Operation::Push8RL:
      {
        out << "\tmovff R0,PREINC0" << endl ;
        ++stk ;
      }
      break ;

      case Operation::Pop8R:
      {
        out << "\tmovf POSTDEC0,W,0" << endl ;
        --stk ;
        Wvalid = false ;
      }
      break ;

      case Operation::Pop8RL:
      {
        out << "\tmovff POSTDEC0,R0" << endl ;
        --stk ;
      }
      break ;

      case Operation::CompareN:
      {
        emitCompareN ( op );
        break ;
      }
      case Operation::CompareF:
      {
        emitCompareF ( op );
        break ;
      }



      case Operation::LShiftN8U:
      {
        switch ( op._nbytes )
        {
          case 2:
            if ( op._val >= 16 )
            {
              callRTL ( "clr16", false ) ;
            }
            else
            {
              setW ( -1 ) ;
              out << "\tmovff PLUSW0,INDF0" << endl ;
              out << "\tclrf PLUSW0,0" << endl ;
            }
            break ;
          case 4:
            switch ( op._val )
            {
              case  8: callRTL ( "lshift32ub8" ); break;
              case 16: callRTL ( "lshift32ub16" ); break;
              case 24: callRTL ( "lshift32ub24" ); break;
              default: callRTL ( "clr32", false ); break;
            }
            break;
        }
        break ;
      }

      case Operation::LShiftNU:
      {
        switch ( op._nbytes )
        {
          case 1:
            if ( op._val == 0 )
              callRTL ( "lshift8u" ) ;
            else
              emitLShift8u ( op._val < 8 ? op._val : 8 ) ;
            break ;
          case 2:
            callRTL ( "lshift16u" ) ;
            break ;
          case 4:
            callRTL ( "lshift32u" ) ;
            break ;
        }
        break ;
      }


      case Operation::RShiftN8U:
      {
        switch ( op._nbytes )
        {
          case 2:
            if ( op._val >= 16 )
            {
              callRTL ( "clr16", false ) ;
            }
            else
            {
              out << "\tmovff POSTDEC0,POSTINC0" << endl ;
              out << "\tclrf INDF0,0" << endl ;
            }
            break ;
          case 4:
            switch ( op._val )
            {
              case  8: callRTL ( "rshift32ub8" ); break;
              case 16: callRTL ( "rshift32ub16" ); break;
              case 24: callRTL ( "rshift32ub24" ); break;
              default: callRTL ( "clr32", false ); break;
            }
            break ;
        }
        break ;
      }

      case Operation::RShiftNU:
      {
        switch ( op._nbytes )
        {
          case 1:
            if ( op._val == 0 )
              callRTL ( "rshift8u" ) ;
            else
              emitRShift8u ( op._val < 8 ? op._val : 8 ) ;
            break ;
          case 2:
            callRTL ( "rshift16u" ) ;
            break ;
          case 4:
            callRTL ( "rshift32u" ) ;
            break ;
        }
        break ;
      }


      case Operation::RShiftN8:
      {
        switch ( op._nbytes )
        {
          case 2:
            if ( op._val >= 16 )
            {
              callRTL ( "rshift16b16" ) ;
            }
            else
            {
              callRTL ( "rshift16b8", false ) ;
            }
            break ;
          case 4:
            // no 32 bit signed optimizing
            break ;
        }
        break ;
      }

      case Operation::RShiftN:
      {
        switch ( op._nbytes )
        {
          case 1:
            if ( op._val != 0 )
              setW ( op._val );
            callRTL ( "rshift8" ) ;
            break ;
          case 2:
            callRTL ( "rshift16" ) ;
            break ;
          case 4:
            callRTL ( "rshift32" ) ;
            break ;
        }
        break ;
      }

      case Operation::IPRShiftN:
      case Operation::IPRShiftNU:
      case Operation::IPLShiftNU:
      {
        emitIPRLShiftN ( op ) ;
        break ;
      }


      case Operation::BAndN:
      {
        if ( op._nbytes == 1 )
          emitBAnd8 ( op._val , op.cstRHS() ) ;
        else if ( op._nbytes == 2 )
          emitBAnd16 ( op._val , op.cstRHS() ) ;
        else if ( op._nbytes == 4 )
          emitBAnd32 ( op._val , op.cstRHS() ) ;
      }
      break ;


      case Operation::BOrN:
      {
        if ( op._nbytes == 1 )
          emitBOr8 ( op._val , op.cstRHS() ) ;
        else if ( op._nbytes == 2 )
          emitBOr16 ( op._val , op.cstRHS() ) ;
        else if ( op._nbytes == 4 )
          emitBOr32 ( op._val  , op.cstRHS() ) ;
      }
      break ;


      case Operation::BXorN:
      {
        if ( op._nbytes == 1 )
          emitBXor8 ( op._val  , op.cstRHS() ) ;
        else if ( op._nbytes == 2 )
          emitBXor16 ( op._val  , op.cstRHS() ) ;
        else if ( op._nbytes == 4 )
          emitBXor32 ( op._val  , op.cstRHS() ) ;
      }
      break ;

      case Operation::IPBAndN:
      {
        emitIPBandN ( op ) ;
        break ;
      }
      case Operation::IPBOrN:
      {
        emitIPBorN ( op ) ;
        break ;
      }
      case Operation::IPBXorN:
      {
        emitIPBxorN ( op ) ;
        break ;
      }

      case Operation::PushPtr:
        gen ( "movff FSR"+i2s ( op._val ) +"L,PREINC0" );
        gen ( "movff FSR"+i2s ( op._val ) +"H,PREINC0" );
        stk += 2 ;
        break ;


      case Operation::PopPtr:
        gen ( "movff POSTDEC0,FSR"+i2s ( op._val ) +"H" );
        gen ( "movff POSTDEC0,FSR"+i2s ( op._val ) +"L" );
        stk -= 2 ;
        break ;


      case Operation::AddCst16PtrIndirect:
        setW ( op._nbytes & 0xFF ) ;
        gen ( "addwf POSTINC"+i2s ( op._val ) +",F,0" );
        setW ( ( op._nbytes>>8 ) & 0xFF ) ;
        gen ( "addwfc POSTDEC"+i2s ( op._val ) +",F,0" );

        break ;

      case Operation::AddCst16Ptr:
      {
        if ( op._val != 0 )
        {
          int k = op._val &0xFF ;
          if ( k == 1 )
          {
            gen ( "incf FSR1L,F,0" ) ;
          }
          else
          {
            setW ( k )  ;
            gen ( "addwf FSR1L,F,0" ) ;
          }
          setW ( ( op._val>>8 ) &0xFF ) ;
          gen ( "addwfc FSR1H,F,0" ) ;
        }
      }
      break ;

      case Operation::AddCst8TOS16 :
      {
        int nb = op._val ;
        if ( nb != 0 )
        {
          if ( nb == 1 )
          {
            setW ( -1 ) ;
            gen ( "incf PLUSW0,F,0" ) ;
          }
          else
          {
            gen ( "movff POSTDEC0,PRODL" ) ;
            setW ( nb&0xFF ) ;
            gen ( "addwf INDF0,F,0" ) ;
            gen ( "movff PRODL,PREINC0" ) ;
          }
          setW ( 0 ) ;
          gen ( "addwfc INDF0,F,0" ) ;
        }
      }
      break ;

      case Operation::AddCst16TOS16 :
      {
        int nbl = op._val & 0xFF , nbh = ( op._val>>8 ) & 0xFF;
        int nb = op._val ;

        if ( nb != 0 )
        {
          gen ( "movff POSTDEC0,PRODL" ) ;
          setW ( nbl ) ;
          gen ( "addwf INDF0,F,0" ) ;
          gen ( "movff PRODL,PREINC0" ) ;
          setW ( nbh ) ;
          gen ( "addwfc INDF0,F,0" ) ;
        }
      }
      break ;

      case Operation::MovPtrIndirectToPtr :
      {
        gen ( "movf POSTINC1,W,0" );
        gen ( "movff INDF1, FSR1H" ) ;
        gen ( "movwf FSR1L,0" ) ;
        Wvalid = false ;
      }
      break ;


      case Operation::MovPTo2 :
      {
        if ( op._e1->isGlobal() )
        {
          gn = mkGlob ( op._e1->name() ) ;
          gen ( "movff FSR1L,"+gn ) ;
          gen ( "movff FSR1H,"+gn+"+1" ) ;
        }
        else if ( op._e1->isLocal() )
        {
          off =  varOffset ( op._e1 )  ;
          ind = emitStackOff ( off ) ;
          gen ( "movff FSR1L,"+ind ) ;
          ind = emitStackOff ( off+1 ) ;
          gen ( "movff FSR1H,"+ind ) ;
        }

      }
      break ;

      case Operation::MovCstNTOPtrIndirect:
      {
        int sz = op._nbytes ;
        int v = op._val ;
        for ( int i = 0 ; i < sz ; ++i, v >>= 8 )
        {
          int v8 = v & 0xFF ;
          if ( v8 == 0 )
            gen ( "clrf POSTINC1,0" ) ;
          else if ( v8 == 0xFF )
            gen ( "setf POSTINC1,0" ) ;
          else
          {
            setW ( v8 ) ;
            gen ( "movwf POSTINC1,0" ) ;
          }
        }
      }
      break ;

      case Operation::IBAndTest8:
      case Operation::IBIorTest8:
      case Operation::IBXorTest8:
      {
        //int sz = op._nbytes ;
        int v = op._val ;
        if ( op._e1 == 0 )
        {
          // FSR1 indirect
          gen ( "movf INDF1,W,0" ) ;
        }
        else
        {
          emitMovNToR ( op._e1,1,v ) ;
        }

        if ( op._code == Operation::IBAndTest8 )
          gen ( "andlw "+i2s ( v ) ) ;
        else if ( op._code == Operation::IBIorTest8 )
          gen ( "iorlw "+i2s ( v ) ) ;
        else if ( op._code == Operation::IBXorTest8 )
          gen ( "xorlw "+i2s ( v ) ) ;

        Wvalid = false ;
      }
      break ;

      case Operation::UpackU :
        emitUnpackUBF ( op._bfoffset, op._bfsize ) ;
        break ;
      case Operation::Upack :
        emitUnpackBF ( op._bfoffset, op._bfsize ) ;
        break ;

      case Operation::UpackUW :
        emitUnpackUBFW ( op._bfoffset, op._bfsize ) ;
        break ;

      case Operation::UpackW :
        emitUnpackBFW ( op._bfoffset, op._bfsize ) ;
        break ;

      case Operation::PopBF :
        emitStackToBF ( op._e1, op._bfoffset , op._bfsize , true ) ;
        break ;

      case Operation::MovTosToBF :
        emitStackToBF ( op._e1, op._bfoffset , op._bfsize   , false ) ;
        break ;

      case Operation::MovBF :
        emitMovBF ( op._e2,  op._e1->value() ,  op._bfoffset , op._bfsize ) ;
        break ;


      case Operation::MovBFtoBF :
        emitMovBFtoBF ( op._e1,  op._e2 ) ;
        break ;


        /* end of code generator */




    }
  }
}




/* =================================================================
These service functions emit common code
*/
/* ------------------------------------------------------------------
*/
void CodeGen::emitPushCst8 ( int cst )
{
  if ( cst == 0 )
    out << "\tclrf PREINC0,0" << endl ;
  else if ( cst == 0xFF )
    out << "\tsetf PREINC0,0" << endl ;
  else
  {
    emitMovCstToW ( cst ) ;
    out << "\tmovwf PREINC0,0" << endl ;
  }
}

void CodeGen::emitMovCst8To ( int cst, const string& to, bool page0 )
{
  if ( to == "W" )
    emitMovCstToW ( cst ) ;
  else if ( to.find ( "C18_" ) != 0 || page0 )
  {
    // not global var == access thru registers in page 0
    if ( cst == 0 )
      out << "\tclrf " << to << ",0"  << endl ;
    else if ( cst == 0xFF )
      out << "\tsetf " << to << ",0"<< endl ;
    else
    {
      emitMovCstToW ( cst ) ;
      out << "\tmovwf " << to << ",0" << endl ;;
    }
  }
  else
  {
    if ( cst == 0 )
    {
      emitMovCstToBSR ( to ) ;
      gen ( "clrf "+to+",1" ) ;
    }
    else if ( cst == 0xFF )
    {
      emitMovCstToBSR ( to ) ;
      gen ( "setf "+to+",1" ) ;
    }
    else
    {
      emitMovCstToW ( cst ) ;
      out << "\tmovff WREG," << to <<  endl ;
    }
  }
}
/* ------------------------------------------------------------------
*/

void CodeGen::emitLabel ( const string& lab )
{
  out << "C18_" << lab << endl ;
  // out << "__last_BSR_\tset -1" << endl ;
}



void CodeGen::emitGlobalSymbol ( Centity& e )
{
  string name ;
  int size ;
  vector<string> val ;
  string segment ;
  int finalsize,  addr ;
  Ctype t = e->thetype() ;

  if ( e->getInitializer() )
    e->getInitializer().toStrings ( val ) ;

  name = e->name() ;
  size = t->sizeOf() ;
  finalsize = t->finalSize() ;
  addr = e->addr() ;

  segment = addr != -1 ? "" : val.size() == 0 ? "|UDATA" : "|IDATA";

  out << ";" << endl ;
  out << ";<+C18_" <<  name << segment << ">" << endl ;
  if ( addr == -1 )
  {
    out << "\tCBLOCK"<< endl ; ;
    out << "\tC18_" << name << ":" << size << endl ;
    out << "\tENDC" << endl ;
  }
  else // user located global symbol
  {
    out << "C18_" << name << " equ 0x" << hex << addr << dec << endl ;
  }

  // output initialisation values/symbols, if any
  if ( val.size() != 0 )
  {
    for ( unsigned int j = 0 ; j < val.size() ; ++j )
    {
      if ( j % 8 == 0 )
      {
        if ( j != 0 ) out << ">\n" ;
        out << ";<= "  ;
      }
      out << val[j] << " " ;
    }
    out << ">\n" ;
  }

  // a static initializer may generate some external references
  vector<string>& symbs = e->getInitializer().extReferences() ;
  for ( unsigned int i = 0 ; i < symbs.size() ; ++i )
    emitExternalReference ( symbs[i] ) ;

  out << ";<->" << endl ;

}

/* ------------------------------------------------------------------
*/
void CodeGen::emitTxt ( const string &iname )
{
  out << iname << endl ;
}

/* ------------------------------------------------------------------
*/
void CodeGen::emitComment ( const string& comm )
{
  out << "; " ;
  for ( unsigned int i = 0 ; i < comm.size() ; ++i )
  {
    out << comm[i] ;
    if ( comm[i] == '\n' ) out << "; " ;
  }
  out << endl ;
}

/* ------------------------------------------------------------------
*/
void CodeGen::callRTL ( const string &func, bool invalidW )
{
  c18.parser()->curFct()->addExtRef ( func ) ;
  out << "\tICALL " << func  << endl ;
  if ( invalidW ) Wvalid = false ; // this is the default
}
/* ------------------------------------------------------------------
*/
void CodeGen::emitMovCstToW ( int cst, bool hexa )
{
  signed char w = cst ;
  //cout << "valid = " << Wvalid << " old = " << (int)W << " new = " << (int)w << endl ;
  if ( !Wvalid || W != w )
  {
    Wvalid = true ;
    W = w ;
    out << "\tmovlw " ;
    if ( hexa ) out << "0x" << hex << ( ( ( int ) W ) & 0xFF ) << dec << endl ;
    else out << ( int ) W << endl ;
  }
}
/* ------------------------------------------------------------------
*/
void CodeGen::emitMovCstToBSR ( const string& target )
{
  out << "\tmovlb HIGH ( " << target << " ) " << endl ;
}
/**
 Emit a "load BSR" instruction, if needed
 return the access type needed
 "0" for access bank
 "1" for access via BSR
*/
void CodeGen::emitLoadBSR ( Centity e , int offset, string& symbol, string& access )
{
  symbol  = mkGlob ( e->name() , offset ) ;
  // assume that e+offset is in access bank if e is
  if ( !accBank ( e ) )
  {
    emitMovCstToBSR ( symbol ); access  = "1" ;
  }
  else
    access = "0" ;
}
/* ------------------------------------------------------------------
*/

void CodeGen::emitMovAddrToR ( Centity e1, int off )
{
  if ( e1->isGlobal() )
  {
    string s ;
    if ( off < 0 ) s = i2s ( off ) ;
    else if ( off > 0 ) s = "+" + i2s ( off ) ;

    string gn = mkGlob ( e1->name() ) ;

    out << "\tmovlw LOW ( " << gn << s << " ) "<< endl ;
    out << "\tmovwf R0,0"    << endl ;
    out << "\tmovlw HIGH ( " << gn << s << " ) "<< endl ;
    out << "\tmovwf R0+1,0"   << endl ;
    Wvalid = false ;
  }
  else if ( e1->isLocal() )
  {
    emitMovCstToW ( varOffset ( e1 ) + off ) ;
    callRTL ( "movLOCALADDRtoR0" ) ;
  }
}
// ++Jet
// offset management
void CodeGen::emitMovGlobAddrToGlob16 ( Centity e1, int off, Centity e2 )
{
  // e1 & e2 are suposed to be global
  string s ;
  if ( off < 0 ) s = i2s ( off ) ;
  else if ( off > 0 ) s = "+" + i2s ( off ) ;

  string gn = mkGlob ( e1->name() ) ;
  string g2 = mkGlob ( e2->name() ) ;

  out << "\tmovlw LOW ( " << gn << s << " ) "<< endl ;
  out << "\tmovff WREG," << g2   << endl ;
  out << "\tmovlw HIGH ( " << gn << s << " ) "<< endl ;
  out << "\tmovff WREG," << g2 << "+1"  << endl ;
  Wvalid = false ;
}

void CodeGen::emitMovAddrToP ( Centity e1, int off, bool preserve_W )
{
  if ( e1 == 0 ) return ;

  if ( e1->isGlobal() )
  {
    string s="";
    if ( off < 0 ) s = i2s ( off ) ;
    else if ( off > 0 ) s = "+" + i2s ( off ) ;

    string gn = mkGlob ( e1->name() ) ;
    gen ( "ILFSR1 "+gn+s ) ;
  }
  else if ( e1->isLocal() )
  {
    if ( preserve_W ) { gen ( "movwf PREINC0,0" ) ; ++stk ; }
    emitMovCstToW ( - ( varOffset ( e1 ) + off ) ) ;
    callRTL ( "getLOCALNEGADDR" ) ;
    if ( preserve_W ) { gen ( "movf POSTDEC0,W,0" ) ; --stk ; }
  }
}

void CodeGen::emitPushAddr ( Centity e1, int off )
{
  if ( e1->isGlobal() || e1->isLitteral() )
  {
    string s ;
    if ( off < 0 ) s = i2s ( off ) ;
    else if ( off > 0 ) s = "+" + i2s ( off ) ;

    string gn = mkGlob ( e1->name() );

    out << "\tmovlw LOW ( " << gn << s << " ) " << endl ;
    out << "\tmovwf PREINC0,0"    << endl ;
    out << "\tmovlw HIGH ( " << gn << s << " ) " << endl ;
    out << "\tmovwf PREINC0,0"   << endl ;
    Wvalid = false ;
  }
  else if ( e1->isLocal() )
  {
    emitMovCstToW ( - ( varOffset ( e1 ) +off ) ) ;
    callRTL ( "pushLOCALNEGADDR" ) ;
  }
}
/*
Make room into stack for local entity
*/
void  CodeGen::emitMakeLocal ( Centity e1 )
{
  // --FIXED--
  int sz = e1->sizeOf() ;

  {
    for ( ; sz ; --sz )
      out << "\tmovf PREINC0,F,0" << endl ;
  }
}
/*

*/
void  CodeGen::emitFctProlog ( Operation& op )
{
  Wvalid = false ;

  // sanity check
  if ( stk != 0 )
  {
    string msg = "ERROR \"Internal CPIK compiler error: stk = " ;
    msg += utility::toString ( stk ) ;
    msg += " before entry of fct " ;
    msg +=  op._e1->name() ;
    msg += "\"" ;
    gen ( msg ) ;
    gen ( "ERROR \"please report this problem to alain.gibaud@free.fr \"" ) ;
    stk = 0 ;
  }

  if ( ! stkStack.empty() )
  {
    gen ( "ERROR  \"stk Stack not empty\"" ) ;
    gen ( "ERROR \"please report this problem to alain.gibaud@free.fr \"" ) ;
    while ( ! stkStack.empty() ) stkStack.pop() ;
  }

  out << endl << ";<+C18_" << op._e1->name() << "> "
  << op._e1->prettyPrint() << endl    ;
  if ( op._e1->addr() != -1 )
  {
    // "placed"  function
    out << "_OLD_ORG set $" << endl  ;
    out << "\torg 0x" << hex <<  op._e1->addr() << dec << endl ;
  }
  emitLabel ( op._e1->name() ) ;
  if ( c18.parser()->curFct()->fct()->isItFct() )
  {
    emitComment ( "retfie 1 is buggy for some device (see errata docs), " )  ;
    emitComment ( "so I prefer to save context in software data stack" ) ;
    out << "\tmovff BSR,PREINC0" << endl ;
    out << "\tmovff FSR1L,PREINC0" << endl ;
    out << "\tmovff FSR1H,PREINC0" << endl ;
    out << "\tmovff FSR2L,PREINC0" << endl ;
    out << "\tmovff FSR2H,PREINC0" << endl ;
    out << "\tmovff STATUS,PREINC0" << endl ;
    out << "\tmovwf PREINC0,0" << endl ;
  }

  emitReserveLocalData ( op._val ) ;
}

void  CodeGen::emitFctEpilog ( Operation& op )
{
  out <<  op._str1 << endl ;
  emitCleanLocalData ( op._val ) ;

  if ( c18.parser()->curFct()->fct()->isItFct() )
  {
    out << "\tmovf POSTDEC0,W,0" << endl ;
    out << "\tmovff POSTDEC0,STATUS" << endl ;
    out << "\tmovff POSTDEC0,FSR2H" << endl ;
    out << "\tmovff POSTDEC0,FSR2L" << endl ;
    out << "\tmovff POSTDEC0,FSR1H" << endl ;
    out << "\tmovff POSTDEC0,FSR1L" << endl ;
    out << "\tmovff POSTDEC0,BSR" << endl ;
    out << "\tretfie 0" << endl ;
  }
  else
    out << "\treturn 0" << endl ;

  if ( op._e1->addr() != -1 )
  {
    // "placed"  function
    out << "\torg _OLD_ORG" << endl ;
  }


  set<string>& exts ( c18.parser()->curFct()->externs() ) ;
  set<string>::const_iterator i ;
  for ( i= exts.begin() ; i != exts.end() ; ++i )
  {
    emitExternalReference ( *i );
  }
  out << ";<-> " << op._e1->prettyPrint() << endl ;
}

void CodeGen::emitExternalReference ( const string& ref )
{
  out << ";<?" << ref << ">" << endl ;
}

/** Generates code to clean stack for local vars
(temporary used by expressions are discarded by the cleanStack operator) */
void CodeGen::emitCleanLocalData ( int kk )
{
  if ( kk > 0 )
  {
    if ( kk <= 9 )
    {
      for ( ; kk > 0 ; --kk )
        out << "\tmovf POSTDEC0,F,0 ; clean stack " << endl ; // CLEAN
    }

    else
    {
      // fast support of large stack frame is experiemental
      out << "; --- non interruptible section" << endl ;
      setWX ( 0x3F ) ;  // mask GIEH, GIEL
      out << "\tandwf INTCON,F,0" << endl ;

      emitMovCstToW ( kk & 0xFF );
      out << "\tsubwf FSR0L,F,0" << endl ;
      emitMovCstToW ( ( kk>>8 ) & 0xFF );
      out << "\tsubwfb FSR0H,F,0 ; clean stack " << endl ;

      out << "\tmovf IT_MASK,W,0" << endl ; Wvalid = false ;
      out << "\tiorwf INTCON,F,0" << endl ;
      out << "; --- end of non interruptible section" << endl  ;
    }

  }
}
/** Reserve sz bytes on the stack
*/
void CodeGen::emitReserveLocalData ( int kk )
{
  if ( kk > 0 )
  {
    if ( kk <= 9 )
    {
      for ( ; kk > 0 ; --kk )
        out << "\tmovf PREINC0,F,0 ; reserve stack" << endl ;
    }
    else
    {
      // fast support of large stack frame is experiemental
      out << "; ---  non interruptible section" << endl ;
      setWX ( 0x3F ) ;  // mask GIEH, GIEL
      out << "\tandwf INTCON,F,0" << endl ;

      emitMovCstToW ( kk & 0xFF );
      out << "\taddwf FSR0L,F,0" << endl ;
      emitMovCstToW ( ( kk>>8 ) & 0xFF );
      out << "\taddwfc FSR0H,F,0  ; reserve stack" << endl ;

      out << "\tmovf IT_MASK,W,0" << endl ; Wvalid = false ;
      out << "\tiorwf INTCON,F,0" << endl ;
      out << "; --- end of non interruptible section" << endl  ;
    }

  }
}
/** Buid a global name for u user symbol (prepend C18_)
AND store this symbol as an external reference.
*/
string CodeGen::mkGlob ( const string &n, int offset )
{
  string s ( "C18_" ) ;
  s += n ;
  c18.parser()->curFct()->addExtRef ( s ) ;
  if ( offset != 0 )
  {
    if ( offset >0 ) s += "+" ;
    s += i2s ( offset ) ;
  }
  return s ;
}
/** Move 'val' constant to local var located at 'off'
*/
void CodeGen::emitMovCst8ToLocal ( int val, int off )
{
  string ind ;
  if ( val == 0 )
  {
    ind = emitStackOff ( off ) ;
    out << "\tclrf " << ind << ",0" << endl ;
  }
  else if ( val == 0xFF )
  {
    ind = emitStackOff ( off ) ;
    out << "\tsetf " << ind << ",0" << endl ;
  }
  else if ( off == 0 )
  {
    emitMovCstToW ( val ) ;
    out << "\tmovwf INDF0,0" << endl ;
  }
  else // difficult case
  {
    emitPushCst8 ( val ) ;
    ind = emitStackOff ( off ) ;
    out << "\tmovff POSTDEC0," << ind << endl ;
  }
}
/** Move a 16 bit constant to local variable */
void CodeGen::emitMovCst16ToLocal ( int val, int off )
{
  emitMovCst8ToLocal ( val&0xFF, off )  ;
  emitMovCst8ToLocal ( ( val>>8 ) &0xFF, off+1 )  ;
}

/**
 extract byte bytenum from k
*/
int CodeGen::byte ( int k, int bytenum )
{
  return ( k >> ( 8*bytenum ) ) & 0xFF ;
}

/**
 In place Add/substract
 As this code is inlined and optimized
 a specific code generator is necessary for each data size
 */
void CodeGen::emitIPAddSub8 ( Operation & op )
{
  string gn , access;
  int val = op._val, byte0  ;
  bool sub = ( op._code == Operation::IPSubN ) ;
  string instr = sub ? "subwf" : "addwf" ;
  int bfsize, bfoffset ;

  op.isBF ( bfsize,bfoffset ) ;

  if ( op.cstRHS( ) ) // cst rhs
  {
    byte0 = byte ( val,0 ) ;

    if ( op._e1 != 0 )
      emitMovAddrToP ( op._e1,0 ) ; // global += cst OR local += cst
    // else  target address is already in FSR1

    if ( bfsize )
    {
      // code for bit field
      if ( sub ) val = -val ;
      val = ( val << bfoffset ) & BFMask ( bfsize,bfoffset ) ;
      gen ( "movf INDF1,W,0" );
      gen ( "addlw 0x"  +utility::toHexString ( val ) ) ;
      gen ( "xorwf INDF1,W,0" ) ;
      gen ( "andlw 0x"+utility::toHexString ( BFMask ( bfsize,bfoffset ) ) ) ;
      gen ( "xorwf INDF1,F,0" ) ;
      Wvalid = 0 ;
    }
    else if ( byte0 != 1 )
    {
      emitMovCstToW ( byte0 ) ;
      gen ( instr+" INDF1,F,0" ) ;
    }
    else
    {
      if ( sub )
        gen ( "decf INDF1,F,0" ) ;
      else
        gen ( "incf INDF1,F,0" ) ; ;
    }
  }
  else // non cst value in R
  {
    if ( bfsize )
    {
      // the hard job: the value to add/substact is in W
      if ( op._e1 != 0 ) emitMovAddrToP ( op._e1, 0, true )  ; // note: true == preserve W
      // shift left and mask RHS operand
      if ( bfoffset == 1 )
        gen ( "rlncf WREG,F,0" ) ;
      else if ( bfoffset != 0 )
      {
        gen ( "mullw "+utility::toString ( 1<<bfoffset ) ) ;
        gen ( "movf PRODL,W,0" ) ;
      }
      gen ( instr+" INDF1,W,0" ) ; // add/substract (result in W)
      gen ( "xorwf INDF1,W,0" ) ; // move result to destination ..
      gen ( "andlw 0x"+utility::toHexString ( BFMask ( bfsize,bfoffset ) ) ) ;
      gen ( "xorwf INDF1,F,0" ) ; // .. without touching surrounding bits
      Wvalid = false ;
    }
    else if ( op._e1 == 0 ) // lhs pointed to by FSR1
    {
      gen ( instr+" INDF1,F,0" ) ;

      Wvalid = false ;
    }
    else   if ( op._e1->isGlobal() ) // global lhs
    {
      emitMovAddrToP ( op._e1,0 ) ; // global += W OR local += W (does not corrupt W)
      gen ( instr+" INDF1,F,0" ) ;
    }
    else // local + W TODO try to find a more efficient code
    {
      emitMovAddrToP ( op._e1,0 ,true ) ;
      gen ( instr+" INDF1,F,0" ) ;

      Wvalid = false ;

    }
  }
}

void CodeGen::emitIPAddSub16 ( Operation & op )
{
  string gn , access;
  int val = op._val, byte0  ;
  bool sub = ( op._code == Operation::IPSubN ) ;
  string instr , cinstr ;
  instr = sub ? "subwf" : "addwf" ;
  cinstr = sub ? "subwfb" : "addwfc" ;

  if ( op._e1 != 0 )
    emitMovAddrToP ( op._e1,0 ) ; // global += cst OR local += cst

  if ( op.cstRHS( ) ) // cst rhs
  {
    byte0 = byte ( val,0 ) ;

    // else  *PTR += cst

    if ( byte0 != 1 )
    {
      emitMovCstToW ( byte0 ) ;
      gen ( instr+" POSTINC1,F,0" ) ;
    }
    else
    {
      if ( sub )
        out << "\tdecf POSTINC1,F,0" << endl ;
      else
        out << "\tincf POSTINC1,F,0" << endl ;
    }
    emitMovCstToW ( byte ( val,1 ) ) ;
    gen ( cinstr+" POSTDEC1,F,0" ) ;

  }
  else // non cst value in R
  {
    if ( op._e1 == 0 ) // lhs pointed to by FSR1
    {
      gen ( "movf R0,W,0" ) ;
      gen ( instr+" POSTINC1,F,0" ) ;
      gen ( "movf R0+1,W,0" ) ;
      gen ( cinstr+" POSTDEC1,F,0" ) ;

      Wvalid = false ;
    }
    else  // global or local lhs
    {
      // global += R0 OR local += R0
      gen ( "movf R0,W,0" ) ;
      gen ( instr+" POSTINC1,F,0" ) ;
      gen ( "movf R0+1,W,0" ) ;
      gen ( cinstr+" POSTDEC1,F,0" ) ;
      Wvalid = false ;
    }
  }
}



void CodeGen::emitIPAddSub32 ( Operation & op )
{
  string gn , access;
  int val = op._val, byte0  ;
  bool sub = ( op._code == Operation::IPSubN ) ;
  string instr, cinstr ;
  instr = sub ? "subwf" : "addwf" ;
  cinstr = sub ? "subwfb" : "addwfc" ;

  if ( op._e1 != 0 )
    emitMovAddrToP ( op._e1,0 ) ;

  if ( op.cstRHS( ) ) // cst rhs
  {
    byte0 = byte ( val,0 ) ;


    if ( byte0 != 1 )
    {
      emitMovCstToW ( byte0 ) ;
      gen ( instr+" POSTINC1,F,0" ) ;
    }
    else
    {
      if ( sub )
        out << "\tdecf POSTINC1,F,0" << endl ;
      else
        out << "\tincf POSTINC1,F,0" << endl ;
    }

    emitMovCstToW ( byte ( val,1 ) ) ;
    gen ( cinstr+" POSTINC1,F,0" ) ;
    emitMovCstToW ( byte ( val,2 ) ) ;
    gen ( cinstr+" POSTINC1,F,0" ) ;
    emitMovCstToW ( byte ( val,3 ) ) ;
    gen ( cinstr+" POSTDEC1,F,0" ) ;

  }
  else // non cst value in R
  {
    gen ( "movf R0,W,0" ) ;
    gen ( instr+" POSTINC1,F,0" ) ;

    gen ( "movf R0+"+i2s ( 1 ) +",W,0" ) ;
    gen ( cinstr+" POSTINC1,F,0" ) ;
    gen ( "movf R0+"+i2s ( 2 ) +",W,0" ) ;
    gen ( cinstr+" POSTINC1,F,0" ) ;
    gen ( "movf R0+"+i2s ( 3 ) +",W,0" ) ;
    gen ( cinstr+" POSTDEC1,F,0" ) ;
  }
  // now restore FSR1 (must be decremented x 2)
  gen ( "movf POSTDEC1,F,0" ) ;
  gen ( "movf POSTDEC1,F,0" ) ;
  Wvalid = false ;
}




void CodeGen::emitIPAddSubN ( Operation & op )
{
  switch ( op._nbytes )
  {
    case 1: emitIPAddSub8 ( op ) ; break ;
    case 2: emitIPAddSub16 ( op ) ; break ;
    case 4: emitIPAddSub32 ( op ) ; break ;
    default: emitComment ( "CodeGen::emitIPAddSubN internal error" ) ; break ;
  }
}


void CodeGen::emitIPMulN ( Operation &op )
{
  string gn , ind, routine  ;
  int sz = op._nbytes ;
  if ( sz == 1 )
    routine = "ipmul8" ; // TODO: should be inlined
  else  if ( sz == 2 )
    routine = "ipmul16" ;
  else if ( sz == 4 )
    routine = "ipmul32" ;

  if ( op.cstRHS() )   // cst rhs
  {
    if ( op._e1 == 0 ) // *PTR *= cst
    {
      // just move constant to R0 (ptr already contains the addr of target variable)
      for ( int i = 0 ; i < sz  ; ++i )
        emitMovCst8To ( byte ( op._val, i ) , sz == 1 ? "W" : ( "R0+"+i2s ( i ) ) ,true ) ;
      callRTL ( routine ) ;
    }
    else     // global *= cst or local *= cst
    {
      emitMovAddrToP ( op._e1 , 0 ) ;

      for ( int i = 0 ; i < sz  ; ++i )
        emitMovCst8To ( byte ( op._val, i ) , sz == 1 ? "W" : ( "R0+"+i2s ( i ) ) ,true ) ;

      callRTL ( routine ) ;
    }
  }
  else // non cst value in R
  {
    if ( op._e1 == 0 ) // lhs pointed by FSR1
    {
      callRTL ( routine ) ;
    }
    else  if ( op._e1->isGlobal() || sz != 1 )
    {
      emitMovAddrToP ( op._e1, 0 ) ;
      callRTL ( routine ) ;
    }
    else
      // sz == 1 and local data : address computation will destroy W
      // as the code is short, inline it
    {
      gen ( "movwf PREINC0,0 " ) ; ++stk ;
      emitMovCstToW ( ( varOffset ( op._e1 ) ) ) ;
      gen ( "movf PLUSW0,W,0" ) ;
      gen ( "mulwf POSTDEC0,0" ); --stk ;
      emitMovCstToW ( ( varOffset ( op._e1 ) ) ) ;
      gen ( "movff PRODL,PLUSW0" ) ;
    }
  }
}

void CodeGen::emitIPAddSubMulDivF ( Operation &op )
{
  string   routine  ;
  int sz = 4  ;

  switch ( op._code )
  {
    case Operation::IPAddF:  routine = "ipaddFP" ; break ;
    case Operation::IPSubF:  routine = "ipsubFP" ; break ;
    case Operation::IPMulF:  routine = "ipmulFP" ; break ;
    case Operation::IPDivF:  routine = "ipdivFP" ; break ;
    default:  routine = "internal error in CodeGen::emitIPAddSubMulDivF" ; break ;
  }

  if ( op.cstRHS() )   // cst rhs
  {
    if ( op._e1 == 0 ) // *PTR *= cst
    {
      // just move constant to R0 (ptr already contains the addr of target variable)
      for ( int i = 0 ; i < sz  ; ++i )
        emitMovCst8To ( byte ( op._val, i ) , ( "R0+"+i2s ( i ) ) ,true ) ;
    }
    else     // global *= cst or local *= cst
    {
      emitMovAddrToP ( op._e1 , 0 ) ;

      for ( int i = 0 ; i < sz  ; ++i )
        emitMovCst8To ( byte ( op._val, i ) , ( "R0+"+i2s ( i ) ) ,true ) ;
    }
  }
  else // non cst value in R
  {
    if ( op._e1 != 0 ) // lhs not  pointed to by FSR1 yet
    {
      emitMovAddrToP ( op._e1, 0 ) ;
    }
  }
  callRTL ( routine ) ;
}

void CodeGen::emitIPDivModN ( Operation &op )
{
  string gn , ind, routine  ;
  int sz = op._nbytes ;

  // build run time library function name
  routine = "ip" ;
  if ( ( op._code ==  Operation::IPModNU ) || ( op._code ==  Operation::IPModN ) )
    routine += "mod" ;
  else
    routine += "div" ;

  if ( sz == 1 )
    routine += "8" ;
  else  if ( sz == 2 )
    routine += "16" ;
  else if ( sz == 4 )
    routine += "32" ;

  if ( ( op._code == Operation::IPDivNU )  || ( op._code == Operation::IPModNU ) )
    routine += "u" ;


  if ( op.cstRHS() )   // cst rhs
  {
    if ( op._e1 == 0 ) // *PTR op= cst
    {
      // just move constant to R0 (ptr already contains the addr of target variable)
      for ( int i = 0 ; i < sz  ; ++i )
        emitMovCst8To ( byte ( op._val, i ) , sz == 1 ? "W" : ( "R0+"+i2s ( i ) ) ,true ) ;
      callRTL ( routine ) ;
    }
    else     // global op= cst or local op= cst
    {
      emitMovAddrToP ( op._e1 , 0 ) ;

      for ( int i = 0 ; i < sz  ; ++i )
        emitMovCst8To ( byte ( op._val, i ) , sz == 1 ? "W" : ( "R0+"+i2s ( i ) ) ,true ) ;

      callRTL ( routine ) ;
    }
  }
  else // non cst value in R
  {
    if ( op._e1 == 0 ) // lhs pointed by FSR1
    {
    }
    else
    {
      bool saveW =  sz == 1 && op._e1->isLocal() ;

      emitMovAddrToP ( op._e1, 0 , saveW ) ;
    }
    callRTL ( routine ) ;
  }
}


void CodeGen::emitIPRLShiftN ( Operation &op )
{
  string gn , ind, routine="ip"  ;
  int sz = op._nbytes ;
  bool unsig;

  if ( op._code == Operation::IPLShiftNU ) routine += "l" ;
  else routine += "r" ;

  routine += "shift" ;

  if ( sz == 1 )
    routine += "8" ;
  else  if ( sz == 2 )
    routine += "16" ;
  else if ( sz == 4 )
    routine += "32" ;

  unsig= op._code == Operation::IPRShiftNU || op._code == Operation::IPLShiftNU ;
  if ( unsig ) routine += "u" ;


  if ( op.cstRHS() && op._val==0 )
  {
    // no operation
  }
  else if ( op.cstRHS() && sz==2 && op._val==8 )   // can by optimized by bytes swap
  {
    if ( op._e1 ) emitMovAddrToP ( op._e1 , 0 ) ;
    callRTL ( routine+"b8" ) ;
  }
  else if ( op.cstRHS() && sz==4 && op._val%8==0 && op._val<32 && unsig )   // can by optimized by bytes swap
  {
    if ( op._e1 ) emitMovAddrToP ( op._e1 , 0 ) ;
    callRTL ( routine+"b"+ ( op._val==8?"8":op._val==16?"16":"24" ) ) ;
  }
  else if ( op.cstRHS() )   // cst rhs
  {
    if ( op._e1 == 0 ) // *PTR op= cst
    {
      // just move constant to W (ptr already contains the addr of target variable)
      emitMovCst8To ( byte ( op._val, 0 ) , "W"  ,true ) ;
      callRTL ( routine ) ;
    }
    else     // global *= cst or local *= cst
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      emitMovCst8To ( byte ( op._val, 0 ) , "W"  ,true ) ;
      callRTL ( routine ) ;
    }
  }
  else // non cst value in R
  {
    // RHS operand of shifts is always casted to int
    if ( op._e1 == 0 ) // lhs pointed by FSR1
    {
    }
    else
    {
//      emitMovAddrToP ( op._e1, 0 , sz == 1 && op._e1->isLocal() ) ; // uint16_t<<=int does not work
      emitMovAddrToP ( op._e1, 0 , true ) ;
    }
    callRTL ( routine ) ;
  }
}

/** Emit a load W with constant,
if constant is != 0.

Return "PLUSW0" string if constant !=0
or "INDF0" if constant == 0

This allows stack access optimization

*/
string CodeGen::emitStackOff ( int k )
{
  string s ;
  if ( k == 0 )
    s =  "INDF0" ;
  else
  {
    emitMovCstToW ( k ) ;
    s = "PLUSW0" ;
  }
  return s ;
}
/** True if address a is in access bank
ie:  0 <= a <= 0x7F or
0xF80 <= a <= 0xFFF

Note: Unknown addresses  have value -1
so they will NOT be considered as located in access bank

SFRs range from firstSFR_ to 0xFFF
*/
bool CodeGen::accBank ( int a )
{
  // cout << "firstsfr = " << hex << firstSFR_ << dec << endl ;
  return ( a >= 0 && a <= ( 0xFF- ( 0xFFF-firstSFR_+1 ) ) ) || ( a >= firstSFR_ && a <= 0xFFF ) ;
}
bool CodeGen::accBank ( Centity& e )
{
  if ( e == 0 ) return false ;
  return  e->isGlobal() && accBank ( e->addr() ) ;
}
/** No descriptions */
void CodeGen::emitLShift8u ( int k )
{
  switch ( k )
  {
    case 0:
      break ;
    case 1:
      out << "\tbcf STATUS,C,0" << endl ;
      out << "\trlcf INDF0,F,0" << endl ;
      break ;
    case 2:
      out << "\tbcf STATUS,C,0" << endl ;
      out << "\trlcf INDF0,F,0" << endl ;
      out << "\tbcf STATUS,C,0" << endl ;
      out << "\trlcf INDF0,F,0" << endl ;
      break ;
    case 3:
      out << "\tswapf INDF0,F,0" << endl ;
      out << "\trrncf INDF0,F,0" << endl ;
      setWX ( 0xF8 ) ;
      out << "\tandwf INDF0,F,0" <<endl ;
      break ;
    case 4:
      out << "\tswapf INDF0,F,0" << endl ;
      setWX ( 0xF0 ) ;
      out << "\tandwf INDF0,F,0" <<endl ;
      break ;
    case 5:
      out << "\tswapf INDF0,F,0" << endl ;
      out << "\trlncf INDF0,F,0" << endl ;
      setWX ( 0xE0 ) ;
      out << "\tandwf INDF0,F,0" <<endl ;
      break ;
    case 6:
      out << "\trrncf INDF0,F,0" << endl ;
      out << "\trrncf INDF0,F,0" << endl ;
      setWX ( 0xC0 ) ;
      out << "\tandwf INDF0,F,0" <<endl ;
      break ;
    case 7:
      out << "\trrncf INDF0,F,0" << endl ;
      setWX ( 0x80 ) ;
      out << "\tandwf INDF0,F,0" <<endl ;
      break ;
    default: // >=8 - more than 8 shifts clears the byte
      out << "\tclrf INDF0,0" << endl ;
      break ;
  }

}
/** No descriptions */
void CodeGen::emitRShift8u ( int k )
{
  switch ( k )
  {
    case 0:
      break ;
    case 1:
      out << "\tbcf STATUS,C,0" << endl ;
      out << "\trrcf INDF0,F,0" << endl ;
      break ;
    case 2:
      out << "\tbcf STATUS,C,0" << endl ;
      out << "\trrcf INDF0,F,0" << endl ;
      out << "\tbcf STATUS,C,0" << endl ;
      out << "\trrcf INDF0,F,0" << endl ;
      break ;
    case 3:
      out << "\tswapf INDF0,F,0" << endl ;
      out << "\trlncf INDF0,F,0" << endl ;
      setWX ( 0x1F ) ;
      out << "\tandwf INDF0,F,0" <<endl ;
      break ;
    case 4:
      out << "\tswapf INDF0,F,0" << endl ;
      setWX ( 0x0F ) ;
      out << "\tandwf INDF0,F,0" <<endl ;
      break ;
    case 5:
      out << "\tswapf INDF0,F,0" << endl ;
      out << "\trrncf INDF0,F,0" << endl ;
      setWX ( 0x07 ) ;
      out << "\tandwf INDF0,F,0" <<endl ;
      break ;
    case 6:
      out << "\trlncf INDF0,F,0" << endl ;
      out << "\trlncf INDF0,F,0" << endl ;
      setWX ( 0x03 ) ;
      out << "\tandwf INDF0,F,0" <<endl ;
      break ;
    case 7:
      out << "\trlncf INDF0,F,0" << endl ;
      setWX ( 0x01 ) ;
      out << "\tandwf INDF0,F,0" <<endl ;
      break ;
    default: // >=8 - more than 8 shifts clears the byte
      out << "\tclrf INDF0,0" << endl ;
      break ;
  }

}
/** No descriptions */
void CodeGen::emitBAnd8 ( int k , bool cst )
{
  if ( !cst )
  {
    out << "\tandwf INDF0,F,0" << endl ;
  }
  else
  {
    // try classic optimizations
    int n = bitZero ( k ) ;

    k = ( char )  k;

    if ( n == -3 ) ;    // this is a nop (all 1)
    else if ( n == -2 )    // clear all (all 0)
      out << "\tclrf INDF0,0" << endl ;
    else if ( n >= 0 )    // clear One bit
      out << "\tbcf INDF0,"<<n<<",0" << endl ;
    else          // general case
    {
      setWX ( k ) ;
      out << "\tandwf INDF0,F,0" << endl ;
    }
  }
}

void CodeGen::emitBAnd32 ( int k , bool cst )
{
  if ( !cst )
  {
    callRTL ( "band32" ) ;
  }
  else
  {
    gen ( "movff FSR0L,FSR2L" ) ;
    gen ( "movff FSR0H,FSR2H" ) ;
    emitBAndByte ( ( k >> 24 ) & 0xFF, "POSTDEC2" ) ;
    emitBAndByte ( ( k >> 16 ) & 0xFF, "POSTDEC2" ) ;
    emitBAndByte ( ( k >> 8 ) & 0xFF, "POSTDEC2" ) ;
    emitBAndByte ( ( k ) & 0xFF, "POSTDEC2" ) ;
  }
}

void CodeGen::emitIPBandN ( Operation &op )
{
  int sz = op._nbytes , val = op._val ;
  bool page0 = accBank ( op._e1 ) ;
  string target = page0 ? mkGlob ( op._e1->name() ) : "INDF1" ;
  int bfsize, bfoffset ;

  op.isBF ( bfsize,bfoffset ) ;

  if ( op.cstRHS() )   // cst rhs
  {
    if ( sz == 1 )
    {

      // bit field ?
      if ( bfsize ) val = ( val << bfoffset )  | ( ~BFMask ( bfsize,bfoffset ) & 0xFF )  ;

      int code = bitZero ( byte ( val,0 ) ) ;

      // this section makes a more compact code when a bit clear or bit set
      // instruction can be used on local data
      if ( ( op._e1 != 0 ) && op._e1->isLocal() && ( code == -2 || code >= 0 ) )
      {
        int off = varOffset ( op._e1 ) ;
        string where = emitStackOff ( off ) ;
        emitBAndByte ( byte ( val,0 ), where ) ;
      }
      else
      {
        // note: emitMovAddrToP now detects null entity
        if ( !page0 )
          emitMovAddrToP ( op._e1 , 0 ) ;

        emitBAndByte ( byte ( val,0 ), target ) ;
      }
    }
    else if ( sz == 2 )
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      emitBAndByte ( byte ( val,0 ), "POSTINC1" ) ;
      emitBAndByte ( byte ( val,1 ), "POSTDEC1" ) ;
    }
    else // 4
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      // TODO imagine a way to avoid unecessary INC/DEC when
      // hi part of the constant lead to a NOP (ie: zero for OR or all one for AND)
      emitBAndByte ( byte ( val,0 ), "POSTINC1" ) ;
      emitBAndByte ( byte ( val,1 ), "POSTINC1" ) ;
      emitBAndByte ( byte ( val,2 ), "POSTINC1" ) ;
      emitBAndByte ( byte ( val,3 ), "POSTDEC1" ) ;
      gen ( "movf POSTDEC1,F,0" ) ;
      gen ( "movf POSTDEC1,F,0" ) ; // just for restore FSR1
    }
  }
  else // non cst value in R
  {
    if ( sz == 1 )
    {
      if ( ! page0 && op._e1 )
        emitMovAddrToP ( op._e1 , 0  , op._e1->isLocal() ) ;

      if ( bfsize )
      {
        if ( bfoffset == 1 )
          gen ( "rlncf WREG,F,0" ) ;
        else if ( bfoffset != 0 )
        {
          gen ( "mullw "+utility::toString ( 1<<bfoffset ) ) ;
          gen ( "movf PRODL,W,0" ) ;
        }
        gen ( "iorlw 0x"+utility::toHexString ( ~BFMask ( bfsize,bfoffset ) & 0xFF ) ) ;
      }

      gen ( "andwf "+target+",F,0" ) ;
    }
    else if ( sz == 2 )
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      gen ( "movf R0,W,0" ) ;
      gen ( "andwf POSTINC1,F,0" ) ;
      gen ( "movf R0+1,W,0" ) ;
      gen ( "andwf POSTDEC1,F,0" ) ;
    }
    else // 4
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      callRTL ( "ipband32" ) ;
    }
  }
}


/**
 emit the code for target &= cst
*/

int CodeGen::emitBAndByte ( int cst , const string& target )
{
  // analyse constant for and
  int code = bitZero ( cst ) ;

  if ( code == -3 )     // this is a nop (all 1)
  {
    emitComment ( "no effect, removed" ) ;
    // something tricky : target might use autoincrment mode
    if ( target.find ( "PRE" ) == 0 || target.find ( "POST" ) == 0 )
    {
      // emit a nop, just for apply autoincrementation
      gen ( "movf "+target+",F,0" ) ;
    }
  }
  else if ( code == -2 )    // clear all (all 0)
    gen ( "clrf "+target+",0" ) ;
  else if ( code >= 0 )    // clear One bit
    gen ( "bcf "+target+","+i2s ( code ) +",0" ) ;
  else    // general case
  {
    setWX ( cst ) ;
    gen ( "andwf "+target+",F,0" ) ;
  }
  return code ;
}

void CodeGen::emitBAnd16 ( int k, bool cst )
{
  if ( !cst )
  {
    out << "\tmovf POSTDEC0,W,0" << endl  ; // H
    out << "\tandwf R0+1,F,0" << endl  ; // H & RH -> RH
    out << "\tmovf R0,W,0" << endl ; Wvalid = false ;
    out << "\tandwf INDF0,F,0" << endl  ; // RL & L -> L
    out << "\tmovff R0+1,PREINC0" << endl  ; // push H & RH
    Wvalid = false ;
  }
  else
  {
    int kL = k & 0xFF ;
    int kH = ( k>>8 ) & 0xFF ;
    int nL = bitZero ( kL ) ;
    int nH = bitZero ( kH ) ;

    /* --TESTED use PRODH as temporary - */
    if ( nH == -3 )     // this is a nop (all 1)
      ;
    else if ( nH == -2 )    // clear all (all 0)
      out << "\tclrf INDF0,0" << endl ;
    else if ( nH >= 0 )    // clear One bit
      out << "\tbcf INDF0,"<<nH<<",0" << endl ;
    else    // general case
    {
      setWX ( kH ) ;
      out << "\tandwf INDF0,F,0" << endl ;
    }
    if ( nL != -3 ) out << "\tmovff POSTDEC0,PRODH" << endl ; // save H


    if ( nL == -3 )     // this is a nop (all 1)
      ;
    else if ( nL == -2 )    // clear all (all 0)
      out << "\tclrf INDF0,0" << endl ;
    else if ( nL >= 0 )    // clear One bit
      out << "\tbcf INDF0,"<<nL<<",0" << endl ;
    else   // general case
    {
      setWX ( kL ) ;
      out << "\tandwf INDF0,F,0" << endl ;
    }
    if ( nL != -3 ) out << "\tmovff PRODH,PREINC0" << endl ; // restore H

  }
}



void CodeGen::emitIPBorN ( Operation &op )
{
  int sz = op._nbytes , val = op._val ;
  bool page0 = accBank ( op._e1 ) ;
  string target = page0 ? mkGlob ( op._e1->name() ) : "INDF1" ;
  int bfsize, bfoffset ;

  op.isBF ( bfsize,bfoffset ) ;


  if ( op.cstRHS() )   // cst rhs
  {
    if ( sz == 1 )
    {
      // bit field ?
      if ( bfsize ) val = ( val << bfoffset ) & BFMask ( bfsize,bfoffset ) ;

      int code = bitOne ( byte ( val,0 ) ) ;

      // this section produce more compact code when a single bit
      // instruction can be used on local data
      if ( ( op._e1 != 0 ) && op._e1->isLocal() && ( code == -2 || code >= 0 ) )
      {
        int off = varOffset ( op._e1 ) ;
        string where = emitStackOff ( off ) ;
        emitBOrByte ( byte ( val,0 ), where ) ;
      }
      else
      {
        if ( !page0 )
          emitMovAddrToP ( op._e1 , 0 ) ;

        emitBOrByte ( byte ( val,0 ), target ) ;
      }
    }
    else if ( sz == 2 )
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      emitBOrByte ( byte ( val,0 ), "POSTINC1" ) ;
      emitBOrByte ( byte ( val,1 ), "POSTDEC1" ) ;
    }
    else // 4
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      emitBOrByte ( byte ( val,0 ), "POSTINC1" ) ;
      emitBOrByte ( byte ( val,1 ), "POSTINC1" ) ;
      emitBOrByte ( byte ( val,2 ), "POSTINC1" ) ;
      emitBOrByte ( byte ( val,3 ), "POSTDEC1" ) ;
      gen ( "movf POSTDEC1,F,0" ) ;
      gen ( "movf POSTDEC1,F,0" ) ;
    }
  }
  else // non cst value in R
  {
    if ( sz == 1 )
    {
      if ( !page0 && op._e1 )
        emitMovAddrToP ( op._e1 , 0, op._e1->isLocal() ) ;

      // if bit field, just shift left and apply proper mask to W
      if ( bfsize )
      {
        if ( bfoffset == 1 )
          gen ( "rlncf WREG,F,0" ) ;
        else if ( bfoffset != 0 )
        {
          gen ( "mullw "+utility::toString ( 1<<bfoffset ) ) ;
          gen ( "movf PRODL,W,0" ) ;
        }
        gen ( "andlw 0x"+utility::toHexString ( BFMask ( bfsize,bfoffset ) ) ) ;
      }

      gen ( "iorwf "+target+",F,0" ) ;
    }
    else if ( sz == 2 )
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      gen ( "movf R0,W,0" ) ;
      gen ( "iorwf POSTINC1,F,0" ) ;
      gen ( "movf R0+1,W,0" ) ;
      gen ( "iorwf POSTDEC1,F,0" ) ;
    }
    else // 4
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      callRTL ( "ipbor32" ) ;
    }
  }
}



int CodeGen::emitBOrByte ( int cst , const string& target )
{
  // analyse constant for or
  int code = bitOne ( cst ) ;

  if ( code == -3 )     // this is a nop (all 0)
  {
    emitComment ( "no effect, removed" ) ;
    // something tricky : target might use autoincrment mode
    if ( target.find ( "PRE" ) == 0 || target.find ( "POST" ) == 0 )
    {
      // emit a nop, just for apply autoincrementation
      gen ( "movf "+target+",F,0" ) ;
    }
  }
  else if ( code == -2 )    // set all (all 1)
    gen ( "setf "+target+",0" ) ;
  else if ( code >= 0 )    // set One bit
    gen ( "bsf "+target+","+i2s ( code ) +",0" ) ;
  else    // general case
  {
    setWX ( cst ) ;
    gen ( "iorwf "+target+",F,0" ) ;
  }
  return code ;
}

void CodeGen::emitBOr32 ( int k , bool cst )
{
  if ( !cst )
  {
    callRTL ( "bor32" ) ;
  }
  else
  {
    gen ( "movff FSR0L,FSR2L" ) ;
    gen ( "movff FSR0H,FSR2H" ) ;
    emitBOrByte ( ( k >> 24 ) & 0xFF, "POSTDEC2" ) ;
    emitBOrByte ( ( k >> 16 ) & 0xFF, "POSTDEC2" ) ;
    emitBOrByte ( ( k >> 8 ) & 0xFF, "POSTDEC2" ) ;
    emitBOrByte ( ( k ) & 0xFF, "POSTDEC2" ) ;
  }
}

/** No descriptions */
void CodeGen::emitBOr8 ( int k, bool cst )
{
  if ( !cst )
  {
    out << "\tiorwf INDF0,F,0" << endl ;
  }
  else
  {
    // try classic optimizations
    int n = bitOne ( k ) ;

    k = ( char )  k;

    if ( n == -3 ) ;    // this is a nop (all 0)
    else if ( n == -2 )    // clear all (all 1)
      out << "\tsetf INDF0,0" << endl ;
    else if ( n >= 0 )    // set One bit
      out << "\tbsf INDF0,"<<n<<",0" << endl ;
    else          // general case
    {
      setWX ( k ) ;
      out << "\tiorwf INDF0,F,0" << endl ;
    }
  }
}

void CodeGen::emitBOr16 ( int k, bool cst )
{

  if ( !cst )
  {
    out << "\tmovf POSTDEC0,W,0" << endl ;
    out << "\tiorwf R0+1,F,0" << endl ;
    out << "\tmovf R0,W,0" << endl ;
    out << "\tiorwf INDF0,F,0" << endl ;
    out << "\tmovff R0+1,PREINC0" << endl  ; // push H | RH
    Wvalid = false ;
  }
  else
  {
    int kL = k & 0xFF ;
    int kH = ( k>>8 ) & 0xFF ;
    int nL = bitOne ( kL ) ;
    int nH = bitOne ( kH ) ;

    if ( nH == -3 )         // this is a nop (all 0)
      ;    // nothing to do
    else if ( nH == -2 )    // set all (all 1)
      out << "\tsetf INDF0,0" << endl ;
    else if ( nH >= 0 )    // set One bit
      out << "\tbsf INDF0,"<<nH<<",0" << endl ;
    else          // general case
    {
      setWX ( kH ) ;
      out << "\tiorwf INDF0,F,0" << endl ;
    }
    if ( nL != -3 ) out << "\tmovff POSTDEC0,PRODH" << endl ; // save hi part


    if ( nL == -3 )     // this is a nop (all 1)
      ;     // this is a nop (all 0)
    else if ( nL == -2 )    // clear all (all 0)
      out << "\tsetf INDF0,0" << endl ;
    else if ( nL >= 0 )    // set One bit
      out << "\tbsf INDF0,"<<nL<<",0" << endl ;
    else          // general case
    {
      setWX ( kL ) ;
      out << "\tiorwf INDF0,F,0" << endl ;
    }
    if ( nL != -3 ) out << "\tmovff PRODH,PREINC0" << endl ; // save hi part
  }
}

void CodeGen::emitIPBxorN ( Operation &op )
{
  int sz = op._nbytes , val = op._val ;
  bool page0 = accBank ( op._e1 ) ;
  string target = page0 ? mkGlob ( op._e1->name() ) : "INDF1" ;
  int bfsize, bfoffset ;

  op.isBF ( bfsize,bfoffset ) ;

  if ( op.cstRHS() )   // cst rhs
  {
    if ( sz == 1 )
    {

      // bit field ?
      if ( bfsize ) val = ( val << bfoffset ) & BFMask ( bfsize,bfoffset ) ;

      int code = bitOne ( byte ( val,0 ) ) ;

      // this section makes a more compact code when a bit clear or bit set
      // instruction can be used on local data
      if ( ( op._e1 != 0 ) && op._e1->isLocal() && ( code >= 0 ) )
      {
        int off = varOffset ( op._e1 ) ;
        string where = emitStackOff ( off ) ;
        emitBXorByte ( byte ( val,0 ), where ) ;
      }
      else
      {
        if ( !page0 )
          emitMovAddrToP ( op._e1 , 0 ) ;
        emitBXorByte ( byte ( val,0 ),  target ) ;
      }
    }
    else if ( sz == 2 )
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      emitBXorByte ( byte ( val,0 ), "POSTINC1" ) ;
      emitBXorByte ( byte ( val,1 ), "POSTDEC1" ) ;
    }
    else // 4
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      emitBXorByte ( byte ( val,0 ), "POSTINC1" ) ;
      emitBXorByte ( byte ( val,1 ), "POSTINC1" ) ;
      emitBXorByte ( byte ( val,2 ), "POSTINC1" ) ;
      emitBXorByte ( byte ( val,3 ), "POSTDEC1" ) ;
      gen ( "movf POSTDEC1,F,0" ) ;
      gen ( "movf POSTDEC1,F,0" ) ;
    }
  }
  else // non cst value in R
  {
    if ( sz == 1 )
    {
      if ( !page0 && op._e1 )
        emitMovAddrToP ( op._e1 , 0 ,  op._e1->isLocal() ) ;

      // if bit field, just shift left and apply proper mask to W
      if ( bfsize )
      {
        if ( bfoffset == 1 )
          gen ( "rlncf WREG,F,0" ) ;
        else if ( bfoffset != 0 )
        {
          gen ( "mullw "+utility::toString ( 1<<bfoffset ) ) ;
          gen ( "movf PRODL,W,0" ) ;
        }
        gen ( "andlw 0x"+utility::toHexString ( BFMask ( bfsize,bfoffset ) ) ) ;
      }

      gen ( "xorwf "+target+",F,0" ) ;
      Wvalid = false ;
    }
    else if ( sz == 2 )
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      gen ( "movf R0,W,0" ) ;
      gen ( "xorwf POSTINC1,F,0" ) ;
      gen ( "movf R0+1,W,0" ) ;
      gen ( "xorwf POSTDEC1,F,0" ) ;
      Wvalid = false ;
    }
    else // 4
    {
      emitMovAddrToP ( op._e1 , 0 ) ;
      callRTL ( "ipbxor32" ) ;
    }
  }
}


int CodeGen::emitBXorByte ( int cst , const string& target )
{
  // analyse constant for or
  int code = bitOne ( cst ) ;

  if ( code == -3 )     // this is a nop (all 0)
  {
    emitComment ( "no effect, removed" ) ;
    // but something tricky : target might use autoincrment mode
    if ( target.find ( "PRE" ) == 0 || target.find ( "POST" ) == 0 )
    {
      // emit a nop, just for apply autoincrementation
      gen ( "movf "+target+",F,0" ) ;
    }
  }
  else if ( code >= 0 )    // toggle One bit
    gen ( "btg "+target+","+i2s ( code ) +",0" ) ;
  else    // general case
  {
    setWX ( cst ) ;
    gen ( "xorwf "+target+",F,0" ) ;
  }
  return code ;
}

void CodeGen::emitBXor32 ( int k , bool cst )
{
  if ( !cst )
  {
    callRTL ( "bxor32" ) ;
  }
  else
  {
    gen ( "movff FSR0L,FSR2L" ) ;
    gen ( "movff FSR0H,FSR2H" ) ;
    emitBXorByte ( ( k >> 24 ) & 0xFF, "POSTDEC2" ) ;
    emitBXorByte ( ( k >> 16 ) & 0xFF, "POSTDEC2" ) ;
    emitBXorByte ( ( k >> 8 ) & 0xFF, "POSTDEC2" ) ;
    emitBXorByte ( ( k ) & 0xFF, "POSTDEC2" ) ;
  }
}
/** No descriptions */
void CodeGen::emitBXor8 ( int k , bool cst )
{
  if ( !cst )
  {
    out << "\txorwf INDF0,F,0" << endl ;
  }
  else
  {
    // try classic optimizations
    int n = bitOne ( k ) ;

    k = ( char )  k;

    if ( n == -3 ) ;    // this is a nop (all 0)
    else if ( n >= 0 )    // toggle One bit
      out << "\tbtg INDF0,"<<n<<",0" << endl ;
    else          // general case
    {
      setWX ( k );
      out << "\txorwf INDF0,F,0" << endl ;
    }
  }
}

void CodeGen::emitBXor16 ( int k , bool cst )
{
  if ( !cst )
  {
    out << "\tmovf POSTDEC0,W,0" << endl ;
    out << "\txorwf R0+1,F,0" << endl ;
    out << "\tmovf R0,W,0" << endl ;
    out << "\txorwf INDF0,F,0" << endl ;
    out << "\tmovff R0+1,PREINC0" << endl  ; // push H | RH
    Wvalid = false ;
  }
  else
  {
    int kL = k & 0xFF ;
    int kH = ( k>>8 ) & 0xFF ;
    int nL = bitOne ( kL ) ;
    int nH = bitOne ( kH ) ;

    if ( nH == -3 )         // this is a nop (all 0)
      ;    // nothing to do
    else if ( nH >= 0 )    // set One bit
      out << "\tbtg INDF0,"<<nH<<",0" << endl ;
    else          // general case
    {
      setWX ( kH ) ;
      out << "\txorwf INDF0,F,0" << endl ;
    }
    if ( nL != -3 ) out << "\tmovff POSTDEC0,PRODH" << endl ; // save hi part


    if ( nL == -3 )
      ;     // this is a nop (all 0)
    else if ( nL >= 0 )    // clear One bit
      out << "\tbtg INDF0,"<<nL<<",0" << endl ;
    else          // general case
    {
      setWX ( kL ) ;
      out << "\txorwf INDF0,F,0" << endl ;
    }
    if ( nL != -3 ) out << "\tmovff PRODH,PREINC0" << endl ; // restore hi part

  }
}

/**
if byte k has only one "zero" bit , return that bit number [0..7]
else if ALL bits are zeros return -2
else if NO bit is zero, return -3
else return -1
*/
int CodeGen::bitZero ( int k )
{
  int  n , r = -1;

  k &= 0xFF ;

  if ( k == 0 ) return -2 ;
  else if ( k == 0xFF ) return -3 ;

  for ( n=0 ; n < 8 ; ++n )
  {
    if ( ( k & ( 1<<n ) ) == 0 )
    {
      if ( r != -1 ) return -1 ;
      else r = n ;
    }
  }
  return r ;
}
/**
if byte k has only one "one" bit, return that bit number [0..7]
else if ALL bits are ones return -2
else if NO bit is one return -3 ;
else return -1 (more than one bit)
*/
int CodeGen::bitOne ( int k )
{
  int  n , r = -1;
  k &= 0xFF ;

  if ( k == 0xFF ) return -2 ;
  else if ( k == 0 ) return -3 ;

  for ( n=0 ; n < 8 ; ++n )
  {
    if ( ( k & ( 1<<n ) ) != 0 )
    {
      if ( r != -1 ) return -1 ;
      else r = n ;
    }
  }
  return r ;
}
/** No descriptions */
// this generator is no longer useful :  emitMov16ToR does the same job, and is optimized
void CodeGen::emitMovCst16ToR ( int val )
{
  int bval ;

  bval = ( char ) ( val & 0xFF ) ; // ??? char conversion ???
  setWX ( bval ) ;
  out << "\tmovwf R0,0" << endl ;
  bval = ( char ) ( ( val>>8 ) & 0xFF ) ;
  setWX ( bval ) ;
  out << "\tmovwf R0+1,0" << endl ;
}

/**
This routine is quite complex because it performs several optimisations
-Access to global var via access bank
-Change operation  into bit clear/set/toggle whenever possible
*/
#if 0
void CodeGen::emitIPBAndOrXor8 ( Operation& op )
{
  int val = op._val ;
  Centity e ( op._e1 ) ;
  string gn ;
  int off , bit;
  string ind ;

  // indirections for special processings
  int ( *bitZO ) ( int val ) = 0 ;  // find unique bit zero or one into val
  string genop ; // the general operation
  string bitop ; // the bit operation
  string globop ; // the set/clear operation

  if ( op._code == Operation::IPBAnd8xxx )
  {
    bitZO = &CodeGen::bitZero ;
    genop = "andwf" ;
    bitop = "bcf" ;
    globop = "clrf" ;
  }
  else if ( op._code == Operation::IPBOr8xxx )
  {
    bitZO = &CodeGen::bitOne ;
    genop = "iorwf" ;
    bitop = "bsf" ;
    globop = "setf" ;
  }
  else if ( op._code == Operation::IPBXor8xxx )
  {
    bitZO = &CodeGen::bitOne ;
    genop = "xorwf" ;
    bitop = "btg" ;
    globop = "" ;
  }



  if ( e == 0 )  // Access via FSR1
  {
    if ( op.cstRHS() )
    {
      bit = bitZO ( val ) ;

      if ( bit == -3 ) ; // NOP
      else if ( ( bit == -2 ) && ( globop != "" ) )
      {
        out << "\t" << globop <<" INDF1,0" << endl ;
      }
      else if ( bit >= 0 )
      {
        out << "\t" << bitop <<" INDF1,"<< bit <<",0" << endl ;
      }
      else
      {
        emitMovCstToW ( val ) ;
        out << "\t" << genop << " INDF1,F,0" << endl  ;
      }
    }
    else //  value is already on stack
    {
      out << "\tmovf POSTDEC0,W,0" << endl ;
      out << "\t" << genop << " INDF1,F,0" << endl  ;
      --stk ;
    }
  }
  else if ( e->isGlobal() )  // global variable
  {
    gn = mkGlob ( op._e1->name() ) ;
    if ( op.cstRHS() )
    {
      bit = bitZO ( val ) ;

      if ( bit == -3 ) ;
      else if ( bit == -2 && globop != "" )
      {
        if ( accBank ( e ) )
          out << "\t" << globop <<  " " << gn << ",0" << endl  ;
        else
        {
          emitMovCstToBSR ( gn ) ;
          out << "\t" << globop << " "  << gn << ",1" << endl  ;
        }
      }
      else   if ( bit >= 0 )
      {
        if ( accBank ( e ) )
          out << "\t" << bitop <<  " " << gn << "," << bit << ",0" << endl  ;
        else
        {
          emitMovCstToBSR ( gn ) ;
          out << "\t" << bitop << " "  << gn << "," << bit << ",1" << endl  ;
        }
      }
      else
      {
        emitMovCstToW ( val ) ;
        if ( accBank ( e ) )
          out << "\t" << genop << " "<< gn << ",F,0" << endl  ;
        else
        {
          emitMovCstToBSR ( gn ) ;
          out << "\t" << genop << " " << gn << ",F,1"  << endl ;
        }
      }

    }
    else // constant in W
    {
      if ( accBank ( e ) )
        out << "\t" << genop << " " << gn << ",F,0" << endl  ;
      else
      {
        emitMovCstToBSR ( gn ) ;
        out << "\t" << genop << " " << gn << ",F,1"  << endl ;
      }
    }
  }
  else if ( e->isLocal() ) // local variable (difficult because W is used as operand AND index)
  {
    if ( op.cstRHS() )  // constant stored in op record
    {
      bit = bitZO ( val ) ;

      if ( bit == -3 ) ;
      else if ( bit == -2 && globop != "" )
      {
        off =  varOffset ( e )  ;
        ind = emitStackOff ( off ) ;
        out << "\t" << globop << " " << ind << ",0" << endl ;
      }
      else if ( bit >= 0 )
      {
        off =  varOffset ( e )  ;
        ind = emitStackOff ( off ) ;
        out << "\t" << bitop << " " << ind <<","<< bit <<",0" << endl ;
      }
      else
      {
        // no optimization
        off =  varOffset ( e )  ;
        ind = emitStackOff ( off ) ;
        out << "\tmovff " << ind << ",PREINC0" << endl ;
        emitMovCstToW ( val ) ;
        out << "\t" << genop << " INDF0,F,0" <<  endl ;
        off =  varOffset ( e )  ;
        ind = emitStackOff ( off ) ;
        out << "\tmovff POSTDEC0,"<< ind <<  endl ;
      }
    }
    else // constant is in W
    {
      out << "\tmovwf PREINC0,0" << endl ;
      ++stk ;
      off =  varOffset ( e )  ;
      ind = emitStackOff ( off ) ;
      out << "\tmovf " << ind << ",W,0" << endl ;
      Wvalid = false ;
      out << "\t" << genop << " INDF0,F,0" <<  endl ;
      --stk ;
      off =  varOffset ( e )  ;
      ind = emitStackOff ( off ) ;
      out << "\tmovff POSTDEC0,"<< ind <<   endl ;
    }
  }
}


void CodeGen::emitIPBAndOrXor16 ( Operation& op )
{
  int val = op._val ;
  Centity e ( op._e1 ) ;
  string gn ;
  int off , bit;
  string ind ;

  // indirections for special treatments
  int ( *bitZO ) ( int val ) = 0 ;  // find unique bit zero or one into val
  string genop ; // the general operation
  string bitop ; // the bit operation
  string globop ;

  if ( op._code == Operation::IPBAnd16xxx )
  {
    bitZO = &CodeGen::bitZero ;
    genop = "andwf" ;
    bitop = "bcf" ;
    globop = "clrf" ;
  }
  else if ( op._code == Operation::IPBOr16xxx )
  {
    bitZO = &CodeGen::bitOne ;
    genop = "iorwf" ;
    bitop = "bsf" ;
    globop = "setf" ;
  }
  else if ( op._code == Operation::IPBXor16xxx )
  {
    bitZO = &CodeGen::bitOne ;
    genop = "xorwf" ;
    bitop = "btg" ;
    globop = "" ;
  }


  if ( e == 0 )  // Access via FSR1
  {
    if ( op.cstRHS() )
    {
      bit = bitZO ( val & 0xFF ) ;

      if ( bit == -3 ) ;
      else if ( bit == -2 && globop != "" )
        out << "\t" << globop << " POSTINC1,0" << endl ;
      else if ( bit >= 0 )
        out << "\t" << bitop << " POSTINC1,"<< bit <<",0" << endl ;
      else
      {
        emitMovCstToW ( val& 0xFF ) ;
        out << "\t" << genop << " POSTINC1,F,0" << endl  ;
      }


      bit = bitZO ( ( val>>8 ) & 0xFF ) ;
      if ( bit == -3 ) ;
      else if ( bit == -2 && globop != "" )
        out << "\t" << globop << " POSTDEC1,0" << endl ;
      else if ( bit >= 0 )
        out << "\t" << bitop << " POSTDEC1,"<< bit <<",0" << endl ;
      else
      {
        emitMovCstToW ( ( val>>8 ) & 0xFF ) ;
        out << "\t" << genop << " POSTDEC1,F,0" << endl  ;
      }


    }
    else //  value  is on the stack
    {
      out << "\tmovf POSTDEC0,W,0" << endl ;
      out << "\t" << genop << " PREINC1,F,0" << endl  ;
      out << "\tmovf POSTDEC0,W,0" << endl ;
      out << "\tmovf POSTDEC1,F,0 ; just for dec FSR1 " << endl ;
      out << "\t" << genop << " INDF1,F,0" << endl  ;
      stk -= 2 ;
    }
  }
  else if ( e->isGlobal() )  // global variable
  {
    gn = mkGlob ( e->name() ) ;
    if ( op.cstRHS() )
    {
      // low byte
      bit = bitZO ( val & 0xFF ) ;
      if ( bit == -3 ) ;
      else if ( bit == -2 && globop != "" )
      {
        if ( accBank ( e ) )
          out << "\t" << globop << " " << gn << ",0" << endl  ;
        else
        {
          emitMovCstToBSR ( gn ) ;
          out << "\t" << globop << " " << gn << ",1" << endl  ;
        }
      }
      else if ( bit >= 0 )
      {
        if ( accBank ( e ) )
          out << "\t" << bitop << " " << gn << "," << bit << ",0" << endl  ;
        else
        {
          emitMovCstToBSR ( gn ) ;
          out << "\t" << bitop << " " << gn << "," << bit << ",1" << endl  ;
        }
      }
      else
      {
        emitMovCstToW ( val & 0xFF ) ;
        if ( accBank ( e ) )
          out << "\t" << genop << " " << gn << ",F,0" << endl  ;
        else
        {
          emitMovCstToBSR ( gn ) ;
          out << "\t" << genop << " " << gn << ",F,1"  << endl ;
        }
      }

      // hi byte
      bit = bitZO ( ( val>>8 ) & 0xFF ) ;

      if ( bit == -3 ) ;
      else if ( bit == -2 && globop != "" )
      {
        if ( accBank ( e ) )
          out << "\t" << globop << " " << gn << "+1,0" << endl  ;
        else
        {
          emitMovCstToBSR ( gn+"+1" ) ;
          out << "\t" << globop << " " << gn << "+1,1" << endl  ;
        }
      }
      else if ( bit >= 0 )
      {
        if ( accBank ( e ) )
          out << "\t" << bitop << " " << gn << "+1," << bit << ",0" << endl  ;
        else
        {
          emitMovCstToBSR ( gn+"+1" ) ;
          out << "\t" << bitop << " " << gn << "+1," << bit << ",1" << endl  ;
        }
      }
      else
      {
        emitMovCstToW ( ( val>>8 ) & 0xFF ) ;
        if ( accBank ( e ) )
          out << "\t" << genop << " " << gn << "+1,F,0" << endl  ;
        else
        {
          emitMovCstToBSR ( gn+"+1" ) ;
          out << "\t" << genop << " " << gn << "+1,F,1"  << endl ;
        }
      }

    }
    else // constant in R0
    {
      // low byte
      out << "\tmovf R0,W,0" << endl ;
      if ( accBank ( e ) )
        out << "\t" << genop << " " << gn << ",F,0" << endl  ;
      else
        out << "\t" << genop << " " << gn << ",F,1"  << endl ;
      // hi byte
      if ( !accBank ( e ) ) emitMovCstToBSR ( gn+"+1" ) ;
      out << "\tmovf R0+1,W,0" << endl ;
      if ( accBank ( e ) )
        out << "\t" << genop << " " << gn << "+1,F,0" << endl  ;
      else
        out << "\t" << genop << " " << gn << "+1,F,1"  << endl ;
    }
  }
  else if ( e->isLocal() ) // local variable
  {
    if ( op.cstRHS() )  // constant stored in op record
    {
      // low byte
      bit = bitZO ( val & 0xFF ) ;
      off =  varOffset ( e )  ;
      if ( bit == -3 ) ;
      else if ( bit == -2 && globop != "" )
      {
        ind = emitStackOff ( off ) ;
        out << "\t" << globop << " " << ind <<",0" << endl ;
      }
      else if ( bit >= 0 )
      {
        ind = emitStackOff ( off ) ;
        out << "\t" << bitop << " " << ind <<","<< bit <<",0" << endl ;
      }
      else
      {
        // no optimization
        ind = emitStackOff ( off ) ;
        out << "\tmovff " << ind << ",PREINC0" << endl ;
        emitMovCstToW ( val& 0xFF ) ;
        out << "\t" << genop << " INDF0,F,0" <<  endl ;
        ind = emitStackOff ( off ) ;
        out << "\tmovff POSTDEC0,"<< ind <<  endl ;
      }
      // hi byte
      bit = bitZO ( ( val>>8 ) & 0xFF ) ;
      if ( bit == -3 ) ;
      else if ( bit == -2 && globop != "" )
      {
        ind = emitStackOff ( off+1 ) ;
        out << "\t" << globop << " " << ind << ",0" << endl ;
      }
      else if ( bit >= 0 )
      {
        ind = emitStackOff ( off+1 ) ;
        out << "\t" << bitop << " " << ind <<","<< bit <<",0" << endl ;
      }
      else
      {
        // no optimization
        ind = emitStackOff ( off+1 ) ;
        out << "\tmovff " << ind << ",PREINC0" << endl ;
        emitMovCstToW ( ( val>>8 ) & 0xFF ) ;
        out << "\t" << genop << " INDF0,F,0" <<  endl ;
        ind = emitStackOff ( off+1 ) ;
        out << "\tmovff POSTDEC0,"<< ind <<  endl ;
      }
    }
    else // constant is in R0
    {
      // low byte
      off =  varOffset ( e )  ;
      ind = emitStackOff ( off ) ;
      out << "\tmovf " << ind << ",W,0" << endl ;
      Wvalid = false ;
      out << "\t" << genop << " R0,F,0" <<  endl ;
      ind = emitStackOff ( off ) ;
      out << "\tmovff R0,"<< ind <<   endl ;
      // hi byte
      ind = emitStackOff ( off+1 ) ;
      out << "\tmovf " << ind << ",W,0" << endl ;
      Wvalid = false ;
      out << "\t" << genop << " R0+1,F,0" <<  endl ;
      ind = emitStackOff ( off+1 ) ;
      out << "\tmovff R0+1,"<< ind <<   endl ;
    }
  }
}
#endif

void CodeGen::emitMovPtrIndirectTo ( Centity e )
{
  int sz = e->sizeOf() , off ;
  string gn , ind, label1;

  if ( e->isGlobal() )
  {
    gn = mkGlob ( e->name() ) ;

    if ( sz == 1 )
      out <<  "\tmovff INDF1," << gn << endl ;
    else if ( sz == 2 )
    {
      out <<  "\tmovff POSTINC1," << gn << endl ;
      out <<  "\tmovff POSTDEC1," << gn << "+1" << endl ;
    }
    else
    {
      // FSR1 will be corrupted
      // loop is really short so I prefer to inline code
      setW ( sz ) ;
      gen ( "ILFSR2 "+gn ) ;
      lab ( label1=c18.uniqueLabel() ) ;
      gen ( "decf WREG,F,0" ) ;
      gen ( "movff PLUSW1,PLUSW2" ) ;
      gen ( "bnz "+label1 ) ;
    }
  }
  else if ( e->isLocal() )
  {
    off =  varOffset ( e )  ;
    if ( sz == 1 )
    {
      ind = emitStackOff ( off ) ;
      out <<  "\tmovff INDF1," << ind << endl ;
    }
    else if ( sz == 2 )
    {
      ind = emitStackOff ( off ) ;
      out <<  "\tmovff POSTINC1,"<< ind << endl ;
      ind = emitStackOff ( off+1 ) ;
      out <<  "\tmovff POSTDEC1," << ind  << endl ;
    }
    else
    {
      setW ( sz ) ;
      gen ( "movwf PRODL,0" ) ;
      setW ( off ) ;
      lab ( label1=c18.uniqueLabel() ) ;
      gen ( "movff POSTINC1,PLUSW0" ) ;
      gen ( "addlw 1" ) ;
      gen ( "decf PRODL,F,0" ) ;
      gen ( "bnz "+label1 ) ;
      W = off+sz ;
    }
  }
}
/** No descriptions */
int& CodeGen::firstSFR()
{
  return firstSFR_ ;
}


/*!
\fn CodeGen::gen(const string &s)
*/
void CodeGen::gen ( const string &s )
{
  out << "\t" << s << endl ;
}


/*!
\fn CodeGen::lab(const string& s)
*/
void CodeGen::lab ( const string& s )
{
  out << s << endl ;
}


/*!
\fn CodeGen::emitMovNToR(Centity e1, int sz, int val)
Move a variable (any size) or a constant to W (1 byte) or R0, R1, ...
*/
void CodeGen::emitMovNToR ( Centity e1, int nb, int val )
{
  int off ;
  string gn , ind;

  if ( e1 == 0 )
  {
    if ( nb == 1 )
      setW ( val & 0xFF ) ;
    else
    {
      int v =  val ;
      for ( int i = 0 ; i < nb ; ++i, v >>= 8 )
        emitMovCst8To ( v & 0xFF  , "R0+"+i2s ( i ) , true ) ;
    }

  }
  else if ( e1->isGlobal() )
  {
    gn = mkGlob ( e1->name() ) ;
    if ( nb == 1 )
    {
      if ( accBank ( e1 ) )
      {
        gen ( "movf "+gn+",W,0" ) ;
      }
      else
      {
        gen ( "movff "+gn+",WREG" ) ;
      }
      Wvalid = false ;
    }
    else if ( nb <= 4 )
    {
      for ( int i = 0 ; i < nb ; ++i )
        gen ( "movff "+gn+"+"+i2s ( i ) +",R0+"+i2s ( i ) ) ;
    }
    else
    {
      gen ( "ILFSR1 "+gn ) ;
      gen ( "ILFSR2 R0" ) ;
      setW ( nb ) ;
      callRTL ( "movSmallBlock" ) ;
      W = 0 ;
    }
  }
  else if ( e1->isFct() )
  {
    // size is implicit  :2 bytes
    gn = mkGlob ( e1->name() ) ;
    gen ( "movlw LOW " +gn ) ;
    gen ( "movwf R0,0" ) ;
    gen ( "movlw HIGH " + gn ) ;
    gen ( "movwf R0+1,0" ) ;
    Wvalid = false ;
  }
  else if ( e1->isLocal() )
  {
    off =   varOffset ( e1 ) ;
    if ( nb == 1 )
    {
      ind = emitStackOff ( off ) ;
      gen ( "movf "+ind+",W,0" ) ;
      Wvalid = false ;
    }
    else if ( nb <= 4 )
    {
      for ( int i = 0 ; i < nb ; ++i )
      {
        ind = emitStackOff ( off+i ) ;
        gen ( "movff "+ind+",R0+"+i2s ( i ) ) ;
      }
    }
    else
    {
      gen ( "lfsr 1,R0" ) ;
      setW ( nb ) ;
      gen ( "movwf PRODL,0" ) ;
      setW ( off ) ;
      callRTL ( "movSmallBlockFromStack" ) ;
      Wvalid = false ;
    }
  }
  else if ( e1->isConstant() )
  {
    int v = e1->value() ;
    if ( nb == 1 )
      setW ( v & 0xFF ) ;
    else
      for ( int i = 0 ; i < nb ; ++i, v >>= 8 )
        emitMovCst8To ( ( v ) & 0xFF  , "R0+"+i2s ( i )  , true ) ;
  }
}


/*!
    \fn CodeGen::emitP1toP2()
 */
void CodeGen::emitP1toP2()
{
  gen ( "movff FSR1L,FSR2L" );
  gen ( "movff FSR1H,FSR2H" ) ;
}


#define SWITCH_MINIMAL_TABLE_LEN  8
#define SWITCH_GAP_TO_SPLIT_TABLE 8
/*
    emit switch to label_nr for all cases
    string cases contains space separated values of all cases
 */
void CodeGen::emitSwitch ( string label, string cases )
{
  list<int> casesList;

  unsigned int p1=0, p=0;
  while ( p < cases.size() )
  {
    p=cases.find ( ' ',p1 );
    casesList.push_back ( atoi ( cases.substr ( p1, p-p1 ).c_str() ) );
    p1=p+1;
  }
  emitSwitch ( label, casesList );
}


void CodeGen::emitSwitch ( string label, list<int> &cases )
{
  int offset = 0;

  if ( cases.size() ==0 ) return; // no cases, no body, no test, no jump and W remains valid
  if ( cases.size() >=SWITCH_MINIMAL_TABLE_LEN )
  {
    emitCombinedSwitch ( label, cases );
    return;
  }

// emit switch with few values with the final jump optimized
  int theFirstCase=cases.front();
  cases.pop_front();
  if ( cases.size() !=0 )
  {
    cases.sort();
    if ( cases.back() ==CaseInstr::Default )
    {
      cases.pop_back(); // no jump to default
    }
    emitJumpSwitch ( &offset, label, cases );
  }
// the last test (for the first defined case) is inverted to save 1 jump
  int current=theFirstCase;
  if ( current!=CaseInstr::Default )
  {
    string defaultlabel=label+"_default";
    char diff=current-offset;
    if ( diff == 1 )
    {
      gen ( "decfsz WREG, F, 0" );
      gen ( "IBRA "+defaultlabel );
    }
    else if ( diff == -1 )
    {
      gen ( "incfsz WREG, F, 0" );
      gen ( "IBRA "+defaultlabel );
    }
    else
    {
      gen ( "addlw "+ i2s ( ( 256u-diff ) & 0xff ) );
      gen ( "IBNZ "+defaultlabel ) ;
    }
  }
  Wvalid = false ;
}


void CodeGen::emitJumpSwitch ( int *offset, string label, list<int> &cases )
{
  list<int>::iterator it;
  for ( it=cases.begin(); it!=cases.end(); ++it )
  {
    int current=*it;
    string mylabel=label+"_"+i2s ( current );
    int diff=current-*offset;
    if ( diff == 1 )
    {
      gen ( "dcfsnz WREG, F, 0" );
      gen ( "IBRA "+mylabel );
    }
    else
    {
      gen ( "addlw "+ i2s ( ( 256u-diff ) & 0xff ) );
      gen ( "IBZ "+mylabel ) ;
    }
    ( *offset ) +=diff;
  }
}

void CodeGen::emitTableSwitch ( string label, int tablenr, int *sc, int offset, int len, int Woffset, string nextlabel )
{
  string defaultlabel=label+"_default";

  if ( len==256 )
  {
    // no gap, all 256 cases are present
    // in this case no test is needed
  }
  else
  {
    if ( ( Woffset-offset ) & 0xff )
    {
      gen ( "addlw "+i2s ( ( Woffset-offset ) &0xff ) );
    }
    gen ( "addlw "+i2s ( 256-len ) );
    gen ( "IBC   "+nextlabel );
    gen ( "addlw "+i2s ( len ) );
  }
  if ( c18.romSize>65536 )
  {
    callRTL ( "tableJump" );
    out << label+"_table_"+i2s ( tablenr ) << endl;
  }
  else
  {
    callRTL ( "tableJump16" );
  }
  for ( int i=0; i<len; i++ )
  {
    int l=sc[ ( i+offset ) %256];
    string lbl;
    if ( l>=0 )
    {
      lbl=label+"_"+i2s ( l );
    }
    else
    {
      lbl=defaultlabel;
    }
    if ( c18.romSize>65536 )
      gen ( "dw    "+lbl+" - "+label+"_table_"+i2s ( tablenr ) );
    else
      gen ( "dw    "+lbl );
  }
}

int CodeGen::switchFindBlock ( int *table, int *offset )
{
  int len;
  int gapCnt=0;
  int i;
  int off=0;
  for ( i=255; i>=0 && gapCnt<SWITCH_GAP_TO_SPLIT_TABLE; i-- )
  {
    if ( table[i]==-1 )
    {
      gapCnt++;
    }
    else
    {
      off=i;
      gapCnt=0;
    }
  }
  if ( i==0 )
  {
    // no big gap found, assume 256 cases
    // fixme - search some little gap, please :-)
    *offset=0;
    len=256;
    return len;
  }
// offset=begin of the first block at end of table
  gapCnt=0;
  int maxBlockLen=-1;
  int maxBlockBegin=0;
  int lastBegin=-1;
  for ( i=0; i<256; i++ )
  {
    if ( table[ ( off+i ) %256]==-1 )
    {
      gapCnt++;
      if ( lastBegin>=0 && gapCnt>=SWITCH_GAP_TO_SPLIT_TABLE )
      {
        // end of block found
        int len=i-gapCnt-lastBegin+1;
        if ( len>maxBlockLen )
        {
          maxBlockLen=len;
          maxBlockBegin=lastBegin;
        }
        lastBegin=-1;
      }
    }
    else
    {
      if ( lastBegin<0 )
      {
        lastBegin=i;
      }
      gapCnt=0;
    }
  }
  if ( maxBlockLen<0 )
  {
    return 0; // no more cases
  }
  *offset= ( off+maxBlockBegin ) %256;
  len=maxBlockLen;
  return len;
}

// emit switch with large number of cases using tables and jumps
void CodeGen::emitCombinedSwitch ( string label, list<int> &cases )
{
  string defaultlabel=label+"_default";
  cases.sort();
  if ( cases.back() ==CaseInstr::Default )
  {
    cases.pop_back(); // remove the default case
  }
  list<int> c=cases;
  list<int>::iterator it;
  int sc[256];
  // memset(&sc, 0xff, sizeof(sc));
  // remove dependency on old-fashioned , low level C libs
  for ( unsigned  int kk = 0 ; kk < ( sizeof ( sc ) / sizeof ( sc[0] ) ) ; ++ kk )
    sc[kk] = ~0 ; // FF....FFF

  int maxgap=256-cases.back() +cases.front()-1;
  int gapIndex=cases.front();
  int prev=0;
  for ( it=cases.begin(); it!=cases.end(); ++it )
  {
    sc[ ( unsigned char ) *it]=*it;
    int gap=*it-prev-1;
    if ( gap>maxgap )
    {
      maxgap=gap;
      gapIndex=*it;
    }
    prev=*it;
  }
  int len, offset;
  len=switchFindBlock ( sc, &offset );
  int tablenr=1;
  int Woffset=0;
  while ( len>SWITCH_MINIMAL_TABLE_LEN )
  {
    int scc[256];
    int nextlen;
    int nextoffset;
    // memcpy(scc, sc, sizeof(scc));
    for ( unsigned  int kk = 0 ; kk < ( sizeof ( scc ) / sizeof ( scc[0] ) ) ; ++kk ) scc[kk] = sc[kk] ;

    for ( int i=0; i<len; i++ )
    {
      sc[ ( offset+i ) %256]=-1; // invalidate case
    }
    nextlen=switchFindBlock ( sc, &nextoffset );
    string nextlabel;
    if ( nextlen )
    {
      nextlabel=label+"_next_"+i2s ( tablenr );
    }
    else
    {
      nextlabel=defaultlabel;
    }
    emitTableSwitch ( label, tablenr++, scc, offset, len, Woffset, nextlabel );
    Woffset= ( offset+len ) %256;
    if ( nextlen )
    {
      out << nextlabel << endl ;
    }
    len=nextlen;
    offset=nextoffset;
  }
  if ( len )
  {
    list<int> cases;
    for ( int i=0; i<256; i++ )
    {
      if ( sc[i]>=0 )
      {
        cases.push_back ( i );
      }
    }
    emitJumpSwitch ( &Woffset, label, cases );
    gen ( "IBRA "+defaultlabel );
  }
}

void CodeGen::emitCleanStack ( int cnt )
{
  int target ;

  if ( stkStack.empty() )
    target = 0 ;
  else
  {
    target = stkStack.top() ; stkStack.pop() ;
  }


  for ( ; cnt > target ; --cnt )
  {
    --stk;
    gen ( "movf POSTDEC0,F,0 ; !! FORCE STACK CLEAN !!" ) ;
  }

  for ( ; cnt < target ; ++cnt )
  {
    ++stk;
    gen ( "movwf PREINC0,0 ; !! STACK BUG !!" ) ;
  }

}


// inline compares are faster but longer

//#define INLINE_SIMPLE_COMPARE

void CodeGen::emitCompareN ( Operation &op )
{
#ifdef INLINE_SIMPLE_COMPARE
  static const char *rname8[] =
  {
    "", "", "ULE8" , "", "", "UGT8",
    "", "", "LE8", "GE8", "LT8", "GT8",
    "", "", "LE8ZERO", "GT8ZERO",
  } ;
#else
  static const char *rname8[] =
  {
    "UEQ8", "UNE8", "ULE8" , "UGE8", "ULT8", "UGT8",
    "UEQ8", "UNE8", "LE8", "GE8", "LT8", "GT8",
    "", "", "LE8ZERO", "GT8ZERO",
  } ;
#endif
  static const char *rname16[] =
  {
    "UEQ16", "UNE16", "ULE16", "UGE16", "ULT16" , "UGT16",
    "UEQ16", "UNE16", "LE16", "GE16" , "LT16" , "GT16",
    "EQ16ZERO", "NE16ZERO", "LE16ZERO", "GT16ZERO",
  } ;
  static const char *rname32[] =
  {
    "UEQ32", "UNE32", "ULE32", "UGE32", "ULT32" , "UGT32",
    "UEQ32", "UNE32", "LE32", "GE32" , "LT32" , "GT32",
    "EQ32ZERO", "NE32ZERO", "LE32ZERO", "GT32ZERO",
  } ;

  if ( op._val < Operation::RTL )
  {
    if ( op._nbytes == 1 )
    {
      if ( rname8[op._val][0]!='\0' ) callRTL ( rname8[op._val] ) ;
    }
    else if ( op._nbytes == 2 )
    {
      callRTL ( rname16[op._val] ) ;
      --stk ;
    }
    else if ( op._nbytes == 4 )
    {
      callRTL ( rname32[op._val] ) ;
      stk -= 3 ;
    }
  }

#ifdef INLINE_SIMPLE_COMPARE
// 8 bit unsigned compares that are not resolved by RTL
  if ( op._nbytes==1 )
  {
    switch ( op._val )
    {
      case Operation::Ueq:
      case Operation::Eq:
        gen ( "xorwf INDF0,F,0" );
        gen ( "movlw 1" );
        gen ( "btfss STATUS,Z,0" );
        gen ( "movwf INDF0,0" );
        gen ( "btg INDF0,0,0" );
        break;

      case Operation::Une:
      case Operation::Ne:
        gen ( "xorwf INDF0,F,0" );
        gen ( "movlw 1" );
        gen ( "btfss STATUS,Z,0" );
        gen ( "movwf INDF0,0" );
        break;

      case Operation::Ult:
        gen ( "subwf INDF0,F,0" );
        gen ( "clrf INDF0,0" );
        gen ( "btfss STATUS,C,0" );
        gen ( "btg INDF0,0,0" );
        break;

      case Operation::Uge:
        gen ( "subwf INDF0,F,0" );
        gen ( "clrf INDF0,0" );
        gen ( "btfsc STATUS,C,0" );
        gen ( "btg INDF0,0,0" );
        break;

    }

  }
#endif

// compares with 0
// number in R or W for 8 bit
  string signReg= op._nbytes>1? "R0+"+i2s ( op._nbytes-1 ) : "WREG";
  switch ( op._val )
  {
    case Operation::True:
      gen ( "clrf PREINC0,0" );
      gen ( "incf INDF0,F,0" );
      stk++;
      break;

    case Operation::False:
      gen ( "clrf PREINC0,0" );
      stk++;
      break;

    case Operation::GeZero:
      gen ( "clrf PREINC0,0" );
      gen ( "btfss "+signReg+",7,0" );
      gen ( "incf INDF0,F,0" );
      stk++;
      break;

    case Operation::LtZero:
      gen ( "clrf PREINC0,0" );
      gen ( "btfsc "+signReg+",7,0" );
      gen ( "incf INDF0,F,0" );
      stk++;
      break;

// the following Operations are made also by call RTL that makes stk-=nbytes-1
    case Operation::EqZero:
      switch ( op._nbytes )
      {
        case 1:
          gen ( "tstfsz WREG,0" );
          gen ( "movlw 1" );
          gen ( "xorlw 1" );
          gen ( "movwf PREINC0,0" );
          break;
      }
      stk+=op._nbytes; //  we must correct the stk manipulation near call RTL
      break;

    case Operation::NeZero:
      switch ( op._nbytes )
      {
        case 1:
          gen ( "tstfsz WREG,0" );
          gen ( "movlw 1" );
          gen ( "movwf PREINC0,0" );
          break;
      }
      stk+=op._nbytes; //  we must correct the stk manipulation near call RTL
      break;

    case Operation::GtZero:
    case Operation::LeZero:
      stk+=op._nbytes; // the operation is done by RTL but we must correct the stk manipulation near call RTL
      break;
  }
}
/*
 Code for FP comparisons
*/
void CodeGen::emitCompareF ( Operation &op )
{
  switch ( op._val )
  {
    default: // to make the compiler happy
    case Operation::Eq:
      callRTL ( "eqFP" ) ; break ;
    case Operation::Ne:
      callRTL ( "neFP" ) ; break ;
    case Operation::Lt:
      callRTL ( "ltFP" ) ; break ;
    case Operation::Gt:
      callRTL ( "gtFP" ) ; break ;
    case Operation::Ge:
      callRTL ( "geFP" ) ; break ;
    case Operation::Le:
      callRTL ( "leFP" ) ; break ;
  }
  stk -= 3 ;
}



/*!
    \fn CodeGen::reset()
 */
void CodeGen::reset()
{
  stk = 0 ; Wvalid = false ;
  firstSFR_ = 0xF80 ;
  while ( !stkStack.empty() ) stkStack.pop() ;
}

/*!
    \fn CodeGen::emitPopBF()
    pop a 8 bit data to bit field
    if dopop, source is popped from stack, else it is kept on stack
    when !e, destination is supposed to be already pointed to by FSR1
 */
void CodeGen::emitStackToBF ( Centity& e, int  off,  int sz , bool dopop )
{
  string gn ,  target = "INDF1"  ;

  // 1) make FSR1 to point to destination
  if ( e ) // NULL Centity means that des addr is already in FSR1
  {
    if ( e->isGlobal() )
    {
      int addr = e->addr() ;
      bool bank0 = ( addr == -1 ) ? false :  accBank ( addr ) ;
      gn =  mkGlob ( e->name() , 0 ) ;
      if ( bank0 ) target = gn ;
      else gen ( "ILFSR1 "+gn ) ;
    }
    else if ( e->isLocal() )
    {
      setW ( -varOffset ( e ) ) ;
      callRTL ( "getLOCALNEGADDR" ) ;  // FSR1 points to destination
    }
  }
  // 2) move bits
  if ( sz == 1 ) // special case
  {
    gen ( "bcf "+target+","+utility::toString ( off ) +",0" ) ;
    if ( dopop ) gen ( "btfsc POSTDEC0,0,0" ) ;
    else gen ( "btfsc INDF0,0,0" ) ;
    gen ( "bsf "+target+","+utility::toString ( off ) +",0" ) ;
  }
  else if ( sz == 2 && off != 0 ) // only profitable when offset != 0
  {
    gen ( "bcf "+target+","+utility::toString ( off ) +",0" ) ;
    gen ( "btfsc INDF0,0,0" ) ;
    gen ( "bsf "+target+","+utility::toString ( off ) +",0" ) ;

    gen ( "bcf "+target+","+utility::toString ( off + 1 ) +",0" ) ;
    if ( dopop ) gen ( "btfsc POSTDEC0,1,0" ) ;
    else gen ( "btfsc INDF0,1,0" ) ;
    gen ( "bsf "+target+","+utility::toString ( off + 1 ) +",0" ) ;
  }
  else // general case
  {
    // clear destination bits
    setWX ( ~  BFMask ( sz,off ) ) ;
    gen ( "andwf "+target+",F,0" ) ;
    // mask and shift left  source
    setWX ( BFMask ( sz ) ) ;
    if ( dopop ) gen ( "andwf POSTDEC0,W,0" ) ; // mask and move to W
    else gen ( "andwf INDF0,W,0" ) ;
    Wvalid = false ;
    // shift left never needs more that 2 instructions
    switch ( off )
    {
      case 2:
        gen ( "rlncf WREG,F,0" ) ; // intentionally no break
      case 1:
        gen ( "rlncf WREG,F,0" ) ; break ;
      case 4:
        gen ( "swapf WREG,F,0" ) ; break ;
      case 3:
      case 5:
      case 6:
      case 7:
        gen ( "mullw "+utility::toString ( 1 << off ) ) ;
        gen ( "movf PRODL,W,0" ) ;
        break ;
    }
    // move bits
    gen ( "iorwf "+target+",F,0" ) ;
  }

  if ( dopop ) --stk  ;

}
/*
 Move constant value to BF
*/
void CodeGen::emitMovBF ( Centity& dest,  int value, int  off,  int sz )
{
  string gn, target = "INDF1";

  // 1) prepare access to target
  if ( dest->isGlobal() )
  {
    // global are accessed by their name in bank 0, else with FSR1
    gn = mkGlob ( dest->name(),0 ) ;
    int addr = dest->addr() ;
    // unlocated glob entity are never considered as located in bank 0
    bool bank0 = ( addr == -1 ) ? false :  accBank ( addr ) ;
    if ( bank0 ) // use FSR1
    {
      target =  gn  ;
    }
    else
      gen ( "ILFSR1 "+gn ) ;
  }
  else if ( dest->isLocal() )
  {
    if ( sz > 3 )
    {
      setW ( -varOffset ( dest ) ) ;
      callRTL ( "getLOCALNEGADDR" ) ;
    }
    else if ( varOffset ( dest ) )
    {
      // W not used in this case, so getLOCALNEGADDR may  be avoided
      target = "PLUSW0" ;
      setW ( varOffset ( dest ) ) ;
    }
    else
    {
      target = "INDF0" ;
    }
  }
  // 2) shift value to get the same aligment as BF
  value <<= off ;
  int mask ;
  // 3)  null  BF
// short BF
  if ( sz < 3 )
  {
    for ( int i = 0, j= off   ; i < sz ; ++i,++j )
    {
      if ( value & ( 1 << j ) )
        gen ( "bsf "+target+","+utility::toString ( j ) +",0" ) ;
      else
        gen ( "bcf "+target+","+utility::toString ( j ) +",0" ) ;
    }
  }
  else if ( value == 0 )
  {
    mask = ( ~BFMask ( sz,off ) ) & 0xFF  ;
    setWX ( mask ) ; // W = mask to reset dest bits
    gen ( "andwf "+target+",F,0" );
  }
  else if ( value == BFMask ( sz,off ) )
  {
    setWX ( value ) ; // W = mask to reset dest bits
    gen ( "iorwf "+target+",F,0" );
  }
  else // 4) other BF
  {
    mask = BFMask ( sz,off ) ;
    value &= mask ;
    // the following seems tricky, but allows to set the bits
    // without temporary state (gliches)
    setWX ( value ) ; // W = value to write in destination
    gen ( "xorwf "+target+",W,0" ) ; // compute bits to be changed
    gen ( "andlw 0x"+utility::toHexString ( mask ) ); // mask bits to be unchanged
    gen ( "xorwf "+target+",F,0" ) ; // do unique change
    Wvalid = false ;
  }
}
/*
 Direct move from one Bit  to another
 Note: the genenerator typically optimizes
 operations sequence PushN  +  UpackU + PopBF
 so none of the operands can be accessed via a pointer (FSR1)
*/
void CodeGen::emitMovBFtoBF ( Centity& src, Centity& dst )
{
  string srcnam, dstnam ;

  Ctype& srctype = src->thetype() ;
  Ctype& dsttype = dst->thetype() ;

  int srcsiz = srctype->bsize() ;
  int  srcoffset = srctype->boffset() ;
//  int dstsiz = dsttype->bsize() ;
  int  dstoffset = dsttype->boffset() ;

  //
  // 1) dest can be *FSR1 or global in page 0
  dstnam = "INDF1" ;
  if ( dst->isGlobal() )
  {
    if ( accBank ( dst->addr() ) )
      dstnam = mkGlob ( dst->name(),0 ) ;
    else
    {
      gen ( "ILFSR1 "+  mkGlob ( dst->name(),0 ) ) ;
    }
  }
  else if ( varOffset ( dst ) ) //TODO utiliser movaddrtoP
  {
    // isLocal
    setW ( -varOffset ( dst ) ) ;
    callRTL ( "getLOCALNEGADDR" ) ;
  }
  else // avoid to call getLOCALNEGADDR
  {
    gen ( "movff FSR0L,FSR1L" ) ;
    gen ( "movff FSR0H,FSR1H" ) ;
  }
  // 3) source can be either in page 0, accessed by FSR2 or in stack
  if ( src->isGlobal() )
  {
    if ( accBank ( src->addr() ) )
      srcnam = mkGlob ( src->name(),0 ) ;
    else
    {
      gen ( "ILFSR2 "+  mkGlob ( src->name(),0 ) ) ;
      srcnam = "INDF2" ;
    }
  }
  else if ( varOffset ( src ) ) // isLocal
  {
    setW ( varOffset ( src ) ) ; // CAUTION: do not destroy W !!
    srcnam = "PLUSW0" ;
  }
  else
  {
    srcnam = "INDF0" ;
  }
  // 3 code generation
  for ( int i = 0 ; i < srcsiz ; ++i )
  {
    gen ( "bcf "+dstnam+","+utility::toString ( dstoffset +i ) +",0" ) ;
    gen ( "btfsc "+srcnam+","+utility::toString ( srcoffset + i ) +",0" ) ;
    gen ( "bsf "+dstnam+","+utility::toString ( dstoffset + i ) +",0" ) ;
  }
}

/**
 Emit the code to increment a 8 bit data, or a bit-field
 target may be INDF0, PLUSW0, INDF1 or a global ID
 Note: W, BSR or FSR1 are already loaded, access can be either "1" or "0"
*/
void CodeGen::emitInc8 ( const string& target, const string& access, int bsize, int boffset )
{
  // Note: W, BSR or FSR1 are already loaded, access can be either "1" or "0"
  if ( bsize == 0 )
  {
    // normal incrementation
    gen ( "incf "+target+",F,"+access ) ;
  }
  else if ( bsize == 1 )
  {
    gen ( "btg "+target+","+utility::toString ( boffset ) +","+access ) ;
  }
  else if ( bsize == 2 )
  {
    gen ( "btg "+target+","+utility::toString ( boffset ) +","+access ) ;
    gen ( "btfss "+target+","+utility::toString ( boffset ) +","+access ) ;
    gen ( "btg "+target+","+utility::toString ( boffset+1 ) +","+access ) ;
  }
  else
  {
    // OK when target != PLUSW0
    if ( target != "PLUSW0" )
    {
      gen ( "movf "+target+",W,"+access ) ;
      gen ( "addlw 0x"+utility::toHexString ( 1<<boffset ) ) ;
      gen ( "xorwf "+target+",W,"+access ) ;
      gen ( "andlw 0x"+utility::toHexString ( BFMask ( bsize,boffset ) ) ) ;
      gen ( "xorwf "+target+",F,"+access ) ;
      Wvalid = 0 ;
    }
    else
    {
      gen ( "movwf PRODL,0" ) ; // save W
      gen ( "movf PLUSW0,W,0" ) ;
      gen ( "movwf PRODH,0" ) ; // save operand
      gen ( "addlw 0x"+utility::toHexString ( 1<<boffset ) ) ;
      gen ( "xorwf PRODH,W,0" ) ;
      gen ( "andlw 0x"+utility::toHexString ( BFMask ( bsize,boffset ) ) ) ;
      gen ( "xorwf PRODH,F,"+access ) ; // PRODH = result
      gen ( "movf PRODL,W,0" ) ; // restore W
      gen ( "movff PRODH,PLUSW0" ) ;
      // note: W is still valid
    }
  }
}
/**
 Emit the code to decrement a 8 bit data, or a bit-field
 target may be INDF0, PLUSW0, INDF1 or a global ID
 Note: W, BSR or FSR1 are already loaded, access can be either "1" or "0"
*/
void CodeGen::emitDec8 ( const string& target, const string& access, int bsize, int boffset )
{
  // Note: W, BSR or FSR1 are already loaded, access can be either "1" or "0"
  if ( bsize == 0 )
  {
    // normal incrementation
    gen ( "decf "+target+",F,"+access ) ;
  }
  else if ( bsize == 1 )
  {
    gen ( "btg "+target+","+utility::toString ( boffset ) +","+access ) ;
  }
  else if ( bsize == 2 )
  {
    gen ( "btg "+target+","+utility::toString ( boffset ) +","+access ) ;
    gen ( "btfsc "+target+","+utility::toString ( boffset ) +","+access ) ;
    gen ( "btg "+target+","+utility::toString ( boffset+1 ) +","+access ) ;
  }
  else
  {
    // OK when target != PLUSW0
    if ( target != "PLUSW0" )
    {
      gen ( "movf "+target+",W,"+access ) ;
      gen ( "addlw 0x"+utility::toHexString ( BFMask ( bsize,boffset ) ) ); // add -1
      gen ( "xorwf "+target+",W,"+access ) ;
      gen ( "andlw 0x"+utility::toHexString ( BFMask ( bsize,boffset ) ) ) ;
      gen ( "xorwf "+target+",F,"+access ) ;
      Wvalid = 0 ;
    }
    else
    {
      gen ( "movwf PRODL,0" ) ; // save W
      gen ( "movf PLUSW0,W,0" ) ;
      gen ( "movwf PRODH,0" ) ; // save operand
      gen ( "addlw 0x"+utility::toHexString ( BFMask ( bsize,boffset ) ) ) ;  // add -1
      gen ( "xorwf PRODH,W,0" ) ;
      gen ( "andlw 0x"+utility::toHexString ( BFMask ( bsize,boffset ) ) ) ;
      gen ( "xorwf PRODH,F,"+access ) ; // PRODH = result
      gen ( "movf PRODL,W,0" ) ; // restore W
      gen ( "movff PRODH,PLUSW0" ) ;
      // note: W is still valid
    }
  }
}

/**
 Return the mask corresponding to a bit field
 When boffset is ommitted, the mask is right aligned
*/
int CodeGen::BFMask ( int bsize, int boffset )
{
  return ( ( 1<<bsize )-1 ) << boffset ;
}
/**
 Convert  an UNSIGNED  bit field in W to unsigned int
*/
void CodeGen::emitUnpackUBFW ( int offset, int size )
{
  int off = offset ;
  /*
    int off = offset ;
    if ( off >= 4 )
    {
      gen ( "swapf WREG,F,0" ) ;
      off -= 4 ;
    }
    for ( ; off ; --off )
    {
      gen ( "rrncf WREG,F,0" ) ;
    }
  */
  if ( off <= 2 )
  {
    for ( ; off ; --off )
    {
      gen ( "rrncf WREG,F,0" ) ; // 1 or 2 ops
    }
  }
  else if ( off == 4 )
  {
    gen ( "swapf WREG,F,0" ) ; // 1 op
  }
  else
  {
    // implements R shift with L shift
    gen ( "mullw "+utility::toString ( 1 << ( 8-offset ) ) ) ; // 2 ops
    gen ( "movf PRODH,W,0" ) ;
  }
  // mask other bits
  gen ( "andlw 0x"+utility::toHexString ( BFMask ( size ) ) ) ;
  Wvalid = false ;
}
/**
 Convert  a SIGNED  bit field in W to  int
*/
void CodeGen::emitUnpackBFW ( int offset, int size )
{
  emitUnpackUBFW ( offset,size ) ;
  gen ( "btfsc WREG,"+utility::toString ( size-1 ) +",0" ) ; // negative BF ?
  gen ( "iorlw 0x"+utility::toHexString ( ~BFMask ( size ) & 0xFF ) ) ;     // set unused bits
  Wvalid = false ;
}
/*
 Convert  an UNSIGNED  bit field located a top of stack to unsigned int
*/
void CodeGen::emitUnpackUBF ( int offset, int size )
{
  // other sizes : shifts + mask
  // no more than 2 instructions for any shift
  switch ( offset )
  {
    case 0: break ;
    case 2:
      gen ( "rrncf INDF0,F,0" ) ; // no break ;
    case 1:
      gen ( "rrncf INDF0,F,0" ) ; break ;
    case 3:
      gen ( "swapf INDF0,F,0" ) ;
      gen ( "rlncf INDF0,F,0" ) ; break ;
    case 4:
      gen ( "swapf INDF0,F,0" ) ; break ;
    case 5:
      gen ( "swapf INDF0,F,0" ) ;
      gen ( "rrncf INDF0,F,0" ) ; break ;
    case 6:
      gen ( "rlncf INDF0,F,0" ) ;// no break ;
    case 7:
      gen ( "rlncf INDF0,F,0" ) ; break ;
  }

  // +2 instructions for masking  other bits
  setWX ( ( 1 << size ) -1 ) ;
  gen ( "andwf INDF0,F,0" ) ;

}

/*
 Convert  an SIGNED  bit field located a top of stack to unsigned int
*/
void CodeGen::emitUnpackBF ( int offset, int size )
{
  if ( size == 1 )
  {
    // special case of 1 bit BF
    gen ( "movf INDF0,W,0" ) ;
    gen ( "clrf INDF0,0" ) ;
    gen ( "btfsc WREG,"+utility::toString ( offset ) +",0" ) ;
    gen ( "setf INDF0,0" ) ;
    Wvalid = false ;
  }
  else
  {
    string label = c18.uniqueLabel() , labneg = label+"_neg" ;

    // no more than 2 instructions for any shift
    switch ( offset )
    {
      case 0: break ;
      case 2:
        gen ( "rrncf INDF0,F,0" ) ; // no break ;
      case 1:
        gen ( "rrncf INDF0,F,0" ) ; break ;
      case 3:
        gen ( "swapf INDF0,F,0" ) ;
        gen ( "rlncf INDF0,F,0" ) ; break ;
      case 4:
        gen ( "swapf INDF0,F,0" ) ; break ;
      case 5:
        gen ( "swapf INDF0,F,0" ) ;
        gen ( "rrncf INDF0,F,0" ) ; break ;
      case 6:
        gen ( "rlncf INDF0,F,0" ) ;
      case 7:
        gen ( "rlncf INDF0,F,0" ) ; break ;
    }

    // set other bits: depends on msb of BF
    gen ( "btfsc INDF0," +utility::toString ( size-1 ) +",0" ) ;
    gen ( "bra "+labneg ) ;
    // BF positive, so force MS bits to 0
    setWX ( ( 1 << size ) -1 ) ;
    gen ( "andwf INDF0,F,0" ) ;
    gen ( "bra "+label ) ;
    lab ( labneg ) ;
    // force MS bits to 1
    setWX ( ~ ( ( 1 << size ) -1 ) ) ;
    gen ( "iorwf INDF0,F,0" ) ;
    lab ( label ) ;
    // note: W is valid
  }
}

