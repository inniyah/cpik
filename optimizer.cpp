
/***************************************************************************
                          flatten.cpp  -  description
                             -------------------
    begin                : mer f�v 9 2005
    copyright            : (C) 2005 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/


#include "flatten.h"
#include "position.h"
#include "symtab.h"
#include "compiler.h"
#include "operation.h"
#include "cexpr.h"

#include <assert.h>

#include <iostream>
using namespace std ;



/*
  Call different peehole optimization routines until
  no optimization is found
*/
void Flatten::optimize()
{
  int res  ;
  do
  {
    res = 0 ;
    res += optimize2();
    res += optimize3();
    res += optimize4();
    eraseDeleted();
  }
  while ( res ) ;
}

/*
  dead code eliminator methods
*/

bool Flatten::seekToOperation ( list<Operation>::iterator &i, Operation::Code code, string label )
{
  list<Operation>::iterator i1, max=_ops.end();
  do
  {
    if ( ( *i )._code == code &&
         ( *i )._str1 == label
       )
    {
      return true;
    }
  }
  while ( nextO ( i1=i,i,max ) );
  return false;
}

void Flatten::deleteBlock ( list<Operation>::iterator from, list<Operation>::iterator to )
{
  list<Operation>::iterator i1, i=from, i2, max=_ops.end();
  do
  {
    ( *i )._code = Operation::Deleted;
  }
  while ( i!=to && nextO ( i1=i,i,max ) );
}

void Flatten::eraseDeleted ( void )
{
  list<Operation>::iterator i, i1;

  for ( i = _ops.begin(); i != _ops.end(); )
  {
    if ( ( *i )._code == Operation::Deleted )
    {
      i1=i;
      ++i;
      ops().erase ( i1 );
    }
    else
    {
      ++i;
    }
  }
}

/*
  peephole optimizer

TODO : regarder le code genere par *(p+cst), et optimiser ..

*/
int Flatten::optimize2()
{
  int no = 0  ;
  int bfsize, bfoffset ;

  list<Operation>::iterator i, i1, max = _ops.end() , t ;

  for ( i = _ops.begin(); nextO ( i,i1,max )  ; max = _ops.end() )
  {
    if ( ( *i ).is ( Operation::PushN,2 )  && ( *i1 ).is ( Operation::PopP ) )
    {
      // replace current op by a direct move to P
      ( *i )._code = Operation::MovToP  ;
      i = i1 ; ++i ;  ++no ;
      ops().erase ( i1 ) ;
    }
    else if ( ( ( *i )._code == Operation::PushN && ( *i1 )._code == Operation::PopN ) &&
              ( ( *i )._nbytes == ( *i1 )._nbytes ) )
    {
      // replace current op by a direct move from arg1 to arg2
      ( *i )._code = Operation::MovN  ;
      ( *i )._e2 = ( *i1 )._e1  ;
      i = i1 ; ++i ; ++no ;
      ops().erase ( i1 ) ;
    }
    /*
    ; PutComment STR = [ x.b = 3 ;]
    ; PushN int 3@3 SZ = 1
    ; PopBF int::2:3 x.0@2 K = 2 SZ = 3
    */
    else if ( ( *i ).is ( Operation::PushN, 1 ) && ( *i )._e1 && ( *i )._e1->isConstant()
              && ( *i1 ).is ( Operation::PopBF ) )
    {
      // replace current op by a direct move from arg1 to arg2
      ( *i )._code = Operation::MovBF  ;
      ( *i )._e2 = ( *i1 )._e1  ;
      // set e1 as constant
      ( *i )._e1->storage() = entity::Constant ;
      // value is already OK, now copy size and offset of BF
      ( *i1 ).isBF ( bfsize,bfoffset ) ;
      ( *i ).setBF ( bfsize,bfoffset ) ;

      i = i1 ; ++i ; ++no ;
      ops().erase ( i1 ) ;
    }
    /*
    */

    else if ( ( *i ).is ( Operation::PushN,2 ) && ( *i1 ).is ( Operation::IndirectN ) )
    {
      // replace push var with move var to PTR
      ( *i )._code = Operation::MovToP  ;
      // replace indirection thru TOS by indirection thru PTR
      ( *i1 )._code = Operation::PushPtrIndirectN  ; // size is already OK
      i = i1 ; ++i ; ++no ;
    }
    else if ( ( *i ).is ( Operation::PushPtrIndirectN )  && ( *i1 ).is ( Operation::PopNR )  &&
              ( ( *i )._nbytes == ( *i1 )._nbytes ) )
    {
      ( *i )._code = Operation::PtrIndirectNtoR  ; // size already OK
      i = i1 ; ++i ;  ++no ;
      ops().erase ( i1 ) ;
    }
    else if ( ( *i ).is ( Operation::PopNR ) && ( *i1 ).is ( Operation::PushNR ) &&
              ( ( *i )._nbytes == ( *i1 )._nbytes ) )
    {
      t = i1 ; ++t  ;
      ops().erase ( i ) ;
      ops().erase ( i1 ) ;
      i = t ; ++no ;
    }
    else if ( ( *i )._code == Operation::PushAddr && ( *i1 )._code == Operation::PopP )
    {
      ( *i )._code = Operation::MovAddrToP  ;
      i = i1 ; ++i ; ++no ;
      ops().erase ( i1 ) ;
    }
    else if ( ( *i ).is ( Operation::IndirectN ) && ( *i1 ).is ( Operation::PopNR ) &&
              ( ( *i )._nbytes == ( *i1 )._nbytes ) )
    {
      ( *i )._code = Operation::IndirectPopNR  ;
      i = i1 ; ++i ; ++no ;
      ops().erase ( i1 ) ;
    }
    else if ( ( *i ).is ( Operation::IndirectN,1 ) && ( *i1 ).is ( Operation::Pop8RL ) )
    {
      ( *i )._code = Operation::IndirectPop8RL  ;
      i = i1 ; ++i ; ++no ;
      ops().erase ( i1 ) ;
    }
    else if ( ( *i ).is ( Operation::PushN ) && ( *i1 ).is ( Operation::PopNR ) &&
              ( ( *i )._nbytes == ( *i1 )._nbytes ) )
    {
      ( *i )._code = Operation::MovNtoR  ;
      i = i1 ; ++i ; ++no ;
      ops().erase ( i1 ) ;
    }
    else if ( ( *i )._code == Operation::GotoLabel && ( *i1 )._code == Operation::PutLabel &&
              ( ( *i )._str1 == ( *i1 )._str1 ) )
    {
      ops().erase ( i ) ;
      i = i1 ; ++i ; ++no ;
    }
    else if ( ( *i )._code == Operation::GotoLabel && ( *i1 )._code == Operation::ExitFunction &&
              ( ( *i )._str1 == ( *i1 )._str1 ) )
    {
      ops().erase ( i ) ;
      i = i1 ; ++i ; ++no ;
    }
    else if ( ( *i )._code == Operation::Return0 && ( *i1 )._code == Operation::ExitFunction &&
              ( ( *i )._str1 == ( *i1 )._str1 ) )
    {
      ops().erase ( i ) ;
      i = i1 ; ++i ; ++no ;
    }
    // partially zap stack cleaning if following by a push (nested fct call)
    // special case of 8 bit param
    else if ( ( *i )._code == Operation::CallFunction &&
              ( *i1 )._code == Operation::Push8RL &&
              ( ( *i )._val   >= 1 ) )
    {
      ( *i )._val-- ;
      ( *i1 )._code =  Operation::Mov8RLtoTos ;
      ++i ; ++no ;
    }
    // general case
    else if ( ( *i )._code == Operation::CallFunction && ( *i1 ).is ( Operation::PushNR ) )
    {
      int nb = ( *i1 )._nbytes ;
      if ( nb != 1 && ( *i )._val >= nb )
      {
        ( *i )._val -= nb ;
        ( *i1 )._code = Operation::MovNRtoTos ; // _nbytes already OK
        ++no ;
      }
      i = i1 ;
    }

    else if ( ( *i ).is ( Operation::PushNR )  && ( *i1 ).is ( Operation::PopNR )
              && ( ( *i )._nbytes == ( *i1 )._nbytes ) )
    {
      t = i1 ; ++t ;
      ops().erase ( i ) ; ops().erase ( i1 ) ; // remove all
      i = t ; ++no ;
    }
    else if ( ( *i ).is ( Operation::PushNR ) && ( *i1 ).is ( Operation::PopN ) &&
              ( ( *i )._nbytes == ( *i1 )._nbytes ) )
    {
      ( *i1 )._code =  Operation::MovRtoN ;
      ops().erase ( i ) ;
      i = i1 ; ++no ;
    }
    else if ( ( *i ).isGoto() && ( *i1 ).isGoto() )
    {
      ops().erase ( i1 ) ; // just remove second branch
      ++no ;
    }
    else if ( ( *i ).is ( Operation::PushNR,2 ) && ( *i1 )._code == Operation::Cast16_8 )
    {
      ( *i )._code =   Operation::Push8RL ;
      ops().erase ( i1 ) ;
      ++no ;
    }
    else if ( ( *i )._code == Operation::Push8RL && ( *i1 ).is ( Operation::PopN,1 ) )
    {
      ( *i )._code =   Operation::MovRLto8 ;
      ( *i )._e1 = ( *i1 )._e1 ;
      ops().erase ( i1 ) ;
      ++no ;
    }
    else if ( ( *i )._code == Operation::MovNtoR && ( *i1 )._code == Operation::MovNtoR &&
              ( ( *i )._nbytes == ( *i1 )._nbytes ) )
    {
      ops().erase ( i ) ;
      i = i1 ;
      ++no ;
    }
    else if ( ( *i )._code == Operation::Mov8toRL && ( *i1 )._code == Operation::Mov8toRL )
    {
      ops().erase ( i ) ;
      i = i1 ;
      ++no ;
    }
    else if ( ( *i )._code == Operation::PushAddr && ( *i )._e1->isGlobal() &&
              ( *i1 ).is ( Operation::PopN,2 )  && ( *i1 )._e1->isGlobal() )
    {
      ( *i )._e2 = ( *i1 )._e1 ;
      ( *i )._code = Operation::MovGlobAddrToGlob16 ;
      ops().erase ( i1 ) ;
      ++no ;
    }

    else if ( ( *i ).is ( Operation::PushN ) && ( *i1 )._code == Operation::PopTestN  && ( ( *i )._nbytes == ( *i1 )._nbytes ) )
    {
      ( *i )._code = Operation::TestN ;
      ops().erase ( i1 ) ;
      ++no ;
    }
    else if ( ( *i ).is ( Operation::PushN ) && ( *i1 )._code == Operation::CastN_N && ( ( *i1 )._val > ( *i1 )._nbytes ) )
    {
      ( *i )._code = Operation::PushN ;
      ( *i )._nbytes = ( *i1 )._nbytes ;
      ops().erase ( i1 ) ;
      ++no ;
    }
    else if ( ( *i ).is ( Operation::PushN ) && ( *i1 )._code == Operation::CastN_NU && ( ( *i1 )._val > ( *i1 )._nbytes ) )
    {
      ( *i )._code = Operation::PushN ;
      ( *i )._nbytes = ( *i1 )._nbytes ;
      ops().erase ( i1 ) ;
      ++no ;
    }
    else if ( ( *i1 )._code == Operation::MovN && ( ( *i1 )._e1 == ( *i1 )._e2 ) )
    {
      ops().erase ( i1 ) ;
      ++no ;
    }
    else if ( ( *i ).is ( Operation::PushPtrIndirectN ) && ( *i1 ).is ( Operation::PopN ) &&
              ( ( *i )._nbytes == ( *i1 )._nbytes ) )
    {
      ( *i )._code = Operation::MovPtrIndirectNto ;
      ( *i )._e1 = ( *i1 )._e1;
      ops().erase ( i1 ) ;
      ++no ;
    }

    else if ( ( ( *i )._code == Operation::MovConst16toR )  && ( ( *i )._val == 1 )   &&
              ( *i1 ).is ( Operation::AddN,2 ) )
    {
      ( *i1 )._code = Operation::Inc16TOS ;
      ops().erase ( i ) ;
      i = i1 ;
      ++no ;
    }

    else if ( ( ( *i )._code == Operation::MovConst16toR )  && ( ( *i )._val == 1 )   &&
              ( *i1 ).is ( Operation::SubN,2 ) )
    {
      ( *i1 )._code = Operation::Dec16TOS ;
      ops().erase ( i ) ;
      i = i1 ;
      ++no ;
    }
    else if ( ( *i ).is ( Operation::MovNtoR,2 )   && ( ( *i )._e1 )
              && ( ( ( *i )._e1 )->isConstant() ) && ( ( ( *i )._e1 )->value() == 1 )  &&
              ( *i1 ).is ( Operation::AddN,2 ) )
    {
      ( *i1 )._code = Operation::Inc16TOS ;
      ops().erase ( i ) ;
      i = i1 ;
      ++no ;
    }
    else if ( ( *i ).is ( Operation::MovNtoR,2 )   && ( ( *i )._e1 )
              && ( ( ( *i )._e1 )->isConstant() ) &&
              ( ( ( *i )._e1 )->value() == 1 ) &&
              ( *i1 ).is ( Operation::SubN, 2 )
            )
    {
      ( *i1 )._code = Operation::Dec16TOS ;
      ops().erase ( i ) ;
      i = i1 ;
      ++no ;
    }

    else if ( ( ( *i ).is ( Operation::PushPtrIndirectN,2 ) )   &&
              ( ( *i1 )._code == Operation::Cast16_8 ) )
    {
      ( *i )._nbytes = 1 ; // make troncature during push
      ops().erase ( i1 ) ;
      ++no ;
    }

    else if ( ( ( *i ).is ( Operation::PushN,1 ) )   &&
              ( ( *i1 )._code == Operation::Pop8RL ) )
    {
      ( *i )._code = Operation::Mov8toRL ;
      ops().erase ( i1 ) ;
      ++no ;
    }

    else if ( ( ( *i ).is ( Operation::MovToP ) )   &&
              ( ( *i1 )._code == Operation::AddCst16Ptr ) )
    {
      ( *i )._val += ( *i1 )._val ;
      ops().erase ( i1 ) ;
      ++no ;
    }

    else if ( ( ( *i ).is ( Operation::PushP ) )   &&
              ( ( *i1 ).is ( Operation::PopN,2 ) )
            )
    {
      ( *i )._val = ( *i )._nbytes = 0  ;
      ( *i )._code = Operation::MovPTo2 ;
      ( *i )._e1 = ( *i1 )._e1 ;
      ops().erase ( i1 ) ;
      ++no ;
    }

    else if ( ( ( *i ).is ( Operation::AddCst8TOS16 ) )   &&
              ( ( *i1 ).is ( Operation::Inc16TOS ) )
            )
    {
      ++ ( *i )._val   ;
      ops().erase ( i1 ) ;
      ++no ;
    }
    else if ( ( ( *i ).is ( Operation::AddCst8TOS16 ) )   &&
              ( ( *i1 ).is ( Operation::AddCst8TOS16 ) )
            )
    {
      ( *i )._val += ( *i1 )._val  ;
      ops().erase ( i1 ) ;
      ++no ;
    }

    else if ( ( ( *i ).is ( Operation::MovConst16toR ) )   &&
              ( ( *i1 ).is ( Operation::AddN,2 ) )
            )
    {
      ( *i )._val   ;
      ( *i )._code = Operation::AddCst16TOS16 ;
      ops().erase ( i1 ) ;
      ++no ;
    }

    else if ( ( ( *i ).is ( Operation::AddCst8TOS16 ) )   &&
              ( ( *i1 ).is ( Operation::AddCst16TOS16 ) )
            )
    {
      ( *i )._val += ( *i1 )._val  ;
      ( *i )._code = Operation::AddCst16TOS16 ;
      ops().erase ( i1 ) ;
      ++no ;
    }

    else if ( ( ( *i ).is ( Operation::AddCst16TOS16 ) )   &&
              ( ( *i1 ).is ( Operation::AddCst16TOS16 ) )
            )
    {
      ( *i )._val += ( *i1 )._val  ;
      ops().erase ( i1 ) ;
      ++no ;
    }

    else if ( ( ( *i ).is ( Operation::AddCst16TOS16 ) )   &&
              ( ( *i1 ).is ( Operation::AddCst8TOS16 ) )
            )
    {
      ( *i )._val += ( *i1 )._val  ;
      ops().erase ( i1 ) ;
      ++no ;
    }
    /*
    ; MovAddrToP struct calibration calDATA[4]  K = 12
    ; AddCst8Ptr K = 2
    */
    else if ( ( ( *i ).is ( Operation::MovAddrToP ) )   &&
              ( ( *i1 ).is ( Operation::AddCst16Ptr ) )
            )
    {
      ( *i )._val += ( *i1 )._val  ;
      ops().erase ( i1 ) ;
      ++no ;
    }


    /*
    ; IndirectN SZ = 2
    ; PopN to  unsigned long l@0 SZ = 2
    */
    else if ( ( *i ).is ( Operation::IndirectN )    &&
              ( ( *i1 ).is ( Operation::PopN ) )
            )
    {
      ( *i )._code = Operation::PopP ;
      ( *i1 )._code = Operation::MovPtrIndirectNto ; // _nbytes & _e1 are OK
      ++no ;
    }
    /*
    ; PushAddr int ti[3][2] K = 2
    ; Inc16TOS
    */
    else if ( ( *i ).is ( Operation::PushAddr )    &&
              ( ( *i1 ).is ( Operation::Inc16TOS ) )
            )
    {
      ++ ( *i )._val ;
      ops().erase ( i1 ) ;
      ++no ;
    }
    /*
    ; PushAddr long ti[3][2] K = 4
    ; AddCst16TOS16 K = 2
    */
    else if ( ( *i ).is ( Operation::PushAddr )    &&
              ( ( *i1 ).is ( Operation::AddCst16TOS16 ) )
            )
    {
      ( *i )._val += ( *i1 )._val  ;
      ops().erase ( i1 ) ;
      ++no ;
    }
    /*
    ; PushAddr long tl[2]
    ; PopNR SZ = 2
    */

    else if ( ( *i ).is ( Operation::PushAddr )    &&
              ( ( *i1 ).is ( Operation::PopNR,2 ) )
            )
    {
      ( *i )._code = Operation::MovAddrtoR;
      ops().erase ( i1 ) ;
      ++no ;
    }
    /*
    ; IndirectPopNR SZ = 4
    ; PushNR SZ = 4
    */
    else if ( ( *i ).is ( Operation::IndirectPopNR )    &&
              ( ( *i1 ).is ( Operation::PushNR ) && ( *i )._nbytes == ( *i1 )._nbytes )
            )
    {
      ( *i )._code = Operation::IndirectN;
      ops().erase ( i1 ) ;
      ++no ;
    }
    /*
    ; PushPtrIndirectN SZ = 1
    ; Pop8R
    */
    else if ( ( *i ).is ( Operation::PushPtrIndirectN,1 ) &&
              ( *i1 ).is ( Operation::Pop8R )
            )
    {
      ( *i )._code = Operation::PtrIndirectNtoR;
      ops().erase ( i1 ) ;
      ++no ;
    }
    /*
      ; Mov8RLtoR or MovNtoR or something else
      ; DiscardR
    */
    else if ( ( *i1 ).is ( Operation::DiscardR ) )
    {
      switch ( ( *i )._code )
      {
        case Operation::Mov8RLtoR:
        case Operation::MovNtoR:
          deleteBlock ( i,i1 );
          ++no;
          break;

        default:
          ++i;
      }
    }
    else
      i = i1 ;
  }
  return no ;
}
/*
  3 level peephole optimizer
  TODO : push8+cast8_16+pop16R -> mov8toRL+extension de signe sur RH
*/
int Flatten::optimize3()
{
  int no = 0 , cst ;
  int bfsize1, bfoffset1, bfsize2,bfoffset2 ;

  list<Operation>::iterator i, i1, i2 , max = _ops.end() , t ;
  for ( i = _ops.begin(); nextO ( i,i1,max ) && nextO ( i1,i2 ,max )  ;  max = _ops.end() )
  {
    if ( ( *i ).is ( Operation::PushN,1 ) && ( *i1 )._code == Operation::Cast8_16 &&
         ( *i2 ).is ( Operation::PopNR,2 ) )
    {
      // perform direct move+cast
      ( *i )._code = Operation::Mov8toRL  ;
      ( *i1 )._code = Operation::ExtendRL  ;
      ( *i1 )._val = 1 ; // signed extension
      ops().erase ( i2 ) ;
      ++no ;
    }

    else if ( ( *i ).is ( Operation::PushN,1 ) && ( *i1 )._code == Operation::Cast8_16U &&
              ( *i2 ).is ( Operation::PopNR,2 ) )
    {
      // perform direct move+cast
      ( *i )._code = Operation::Mov8toRL  ;
      ( *i1 )._code = Operation::ExtendRL  ;
      ( *i1 )._val = 0 ; // unsigned extension
      ops().erase ( i2 ) ;
      ++no ;
    }
    /*
    ; PushN unsigned int::4:4 x.0@0 SZ = 1
    ; UpackU SZ = 1 [.4:4]
    ; PopTestN SZ = 1
    */
    else if ( ( *i ).is ( Operation::PushN,1 ) && ( ( *i1 ).is ( Operation::UpackU,1 ) || ( *i1 ).is ( Operation::Upack,1 ) )   &&
              ( *i2 ).is ( Operation::PopTestN ) )
    {
      // bit bield can be tested without unpacking it
      ( *i )._code = Operation::TestN ;
      ( *i )._e1->isBF ( bfsize1,bfoffset1 ) ;
      ( *i ).setBF ( bfsize1,bfoffset1 ) ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;
      ++no ;
    }
    else if ( ( *i ).is ( Operation::PushNR,2 ) && ( *i1 )._code == Operation::MovToP &&
              ( *i2 ).is ( Operation::PopNR,2 ) )
    {
      // MovToP does not alter R0, so there is no need to
      // save and restore R0L/R0H
      ops().erase ( i ) ;
      i = i1 ;
      ops().erase ( i2 ) ;
      ++no ;
    }
    else if ( ( ( *i1 )._code == Operation::PushP ) && ( ( *i2 )._code == Operation::PopP ) )
    {
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;
      ++no ;
    }
    // mov8 or move16 doesn't use index register - so no need to save them
    else if ( ( ( *i )._code == Operation::PushP ) && ( ( *i2 )._code == Operation::PopP ) &&
              ( ( *i1 ).is ( Operation::MovNtoR,1 ) || ( *i1 )._code == Operation::MovConst8toR ) )
    {
      t = i2 ; ++t ;
      ops().erase ( i ) ;
      ops().erase ( i2 ) ;
      i = t ;
      ++no  ;
    }
    // idem
    else if ( ( ( *i )._code == Operation::PushP ) && ( ( *i2 )._code == Operation::PopP ) &&
              ( ( *i1 ).is ( Operation::MovNtoR,2 ) || ( *i1 )._code == Operation::MovConst16toR ) )
    {
      t = i2 ; ++t ;
      ops().erase ( i ) ;
      ops().erase ( i2 ) ;
      i = t ;
      ++no  ;
    }
    // typical code with several constant array indexes  (constant folding of array offsets)
    else if ( ( ( *i )._code == Operation::PushAddr ) &&
              ( ( *i1 )._code == Operation::MovConst16toR ) &&
              ( *i2 ).is ( Operation::AddN,2 ) )
    {
      t = i2 ; ++t ;
      ( *i )._val += ( *i1 )._val ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;
      i = t ;
      ++no  ;
    }
    else if ( ( *i ).is ( Operation::PushN,2 ) && ( ( *i1 )._code == Operation::AddCst8TOS16 ) &&
              ( *i2 ).is ( Operation::IndirectN ) )
    {
      int sz = ( *i2 )._nbytes ;
      int offset = ( *i1 )._val ;
      t = i2 ; ++t ;
      ( *i )._code = Operation::MovToP ; ( *i )._val = offset ; ( *i )._nbytes = 0 ; // _e1  is OK
      ( *i1 )._code = Operation::PushPtrIndirectN ; ( *i1 )._nbytes = sz ; ( *i1 )._val = 0 ;
      ops().erase ( i2 ) ;
      i = t ;
      ++no  ;
    }

    else if ( ( *i ).is ( Operation::PushPtrIndirectN,2 ) && ( ( *i1 )._code == Operation::AddCst8TOS16 ) &&
              ( *i2 ).is ( Operation::PopP ) )
    {
      t = i2 ; ++t ;
      ( *i )._code = Operation::MovPtrIndirectToPtr ; ( *i )._val = 0 ; ( *i )._nbytes = 0 ; //
      ( *i1 )._code = Operation::AddCst16Ptr ;
      ops().erase ( i2 ) ;
      i = t ;
      ++no  ;
    }

    else if ( ( *i ).is ( Operation::PushN,2 ) &&
              ( ( *i1 )._code == Operation::AddCst8TOS16 ) &&
              ( *i2 ).is ( Operation::PopP )
            )
    {
      t = i2 ; ++t ;
      ( *i )._code = Operation::MovToP ; ( *i )._val = ( *i1 )._val  ; ( *i )._nbytes = 0 ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;
      i = t ;
      ++no  ;
    }
    else if ( ( *i ).is ( Operation::PushP ) &&
              ( ( *i1 )._code == Operation::AddCst8TOS16 ) &&
              ( *i2 ).is ( Operation::PopP )
            )
    {
      t = i2 ; ++t ;
      ( *i )._code = Operation::AddCst16Ptr ; ( *i )._val = ( *i1 )._val  ; ( *i )._nbytes = 0 ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;
      i = t ;
      ++no  ;
    }

    /*
    ; PushN long 2450@2450 SZ = 2     suppressed
    ; MovToP long *pl SZ = 2          idem
    ; PopPtrIndirectN SZ = 2          MovCstNTOPtrIndirect
    */

    else if ( ( *i ).is ( Operation::PushN ) && ( *i ).hasConstant ( cst ) &&
              ( ( *i1 )._code == Operation::MovToP ) &&
              ( *i2 ).is ( Operation::PopPtrIndirectN ) &&
              ( ( *i )._nbytes == ( *i2 )._nbytes ) &&
              ( ( *i )._nbytes <= 4 )
            )
    {
      t = i2 ; ++t ;
      int sz = ( *i2 )._nbytes ;

      ops().erase ( i ) ;
      ( *i2 )._code =  Operation::MovCstNTOPtrIndirect ;
      ( *i2 )._nbytes = sz ;
      ( *i2 )._val = cst ;
      i = t ;
      ++no  ;
    }
    /*
    ; PushN struct simple6*ps6  SZ = 2
    ; AddCst16TOS16 K = 4
    ; IndirectN SZ = 1
    ==>
    ; MovToP struct simple6*ps6  K = 4
    ; PushPtrIndirectN SZ = 1

    */
    else if ( ( *i ).is ( Operation::PushN ) && ( *i )._nbytes == 2 &&
              ( ( *i1 )._code == Operation::AddCst16TOS16 ) &&
              ( *i2 ).is ( Operation::IndirectN )
            )
    {
      t = i2 ; ++t ;
      ( *i )._code = Operation::MovToP ;
      ( *i )._nbytes = 0 ;
      ( *i )._val = ( *i1 )._val ;
      ( *i1 )._code= Operation::PushPtrIndirectN ;
      ( *i1 )._nbytes = ( *i2 )._nbytes ;


      ops().erase ( i2 ) ;
      i = t ;

      ++no  ;
    }

    /*
    ; PushAOffset struct calibration calDATA[4]  K = 12
    ; IndirectN SZ = 2
    ; PopN to  unsigned long l@0 SZ = 2
    */
    else if ( ( *i ).is ( Operation::PushAddr ) &&
              ( *i1 ).is ( Operation::IndirectN ) &&
              ( *i2 ).is ( Operation::PopN )
            )
    {

      ( *i )._code = Operation::MovAddrToP  ; ( *i )._nbytes = 0 ;
      ( *i2 )._code = Operation::MovPtrIndirectNto ;
      ops().erase ( i1 ) ;
      ++no ;
    }

    /*
    ; PushAOffset struct calibration calDATA[4]  K = 8
    ; AddCst8TOS16 K = 2
    ; PopP SZ = 2
    */
    else if ( ( *i ).is ( Operation::PushAddr )  &&
              ( *i1 ).is ( Operation::AddCst8TOS16 ) &&
              ( *i2 ).is ( Operation::PopP )
            )
    {

      ( *i )._code = Operation::MovAddrToP  ; ( *i )._nbytes = 0 ;
      ( *i )._val += ( *i1 )._val ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;
      ++no ;
    }
    /*
    ; PushN int 33@33 SZ = 1
    ; MovAddrToP int ti[3][2] K = 3
    ; PopPtrIndirectN SZ = 1
    */
    else if ( ( *i ).is ( Operation::PushN )  && ( *i ).hasConstant ( cst ) &&
              ( *i1 ).is ( Operation::MovAddrToP ) &&
              ( *i2 ).is ( Operation::PopPtrIndirectN ) && ( ( *i )._nbytes == ( *i2 )._nbytes )
            )
    {
      ( *i2 )._code = Operation::MovCstNTOPtrIndirect ;
      ( *i2 )._nbytes = ( *i )._nbytes; ( *i2 )._val =  cst ;
      t = i++ ;
      ops().erase ( t ) ;

      ++no ;
    }
    /*
    ; PushN unsigned int blink_delay SZ = 1
    ; BAnd8 K = 4
    ; PopTest8
    */
    else if ( ( *i ).is ( Operation::PushN,1 )  && ! ( *i ).hasConstant ( cst )  &&
              ( *i1 ).is ( Operation::BAndN,1 ) && ( *i1 ).hasConstant ( cst ) &&
              ( *i2 ).is ( Operation::PopTestN,1 )
            )
    {
      ( *i )._code = Operation::IBAndTest8 ;
      ( *i )._val = cst ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;

      ++no ;
    }
    /*
    ; PushN unsigned int blink_delay SZ = 1
    ; BOr8 K = 4
    ; PopTest8
    */
    else if ( ( *i ).is ( Operation::PushN,1 )  && ! ( *i ).hasConstant ( cst )  &&
              ( *i1 ).is ( Operation::BOrN,1 ) && ( *i1 ).hasConstant ( cst ) &&
              ( *i2 ).is ( Operation::PopTestN,1 )
            )
    {
      ( *i )._code = Operation::IBIorTest8 ;
      ( *i )._val = cst ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;

      ++no ;
    }
    /*
    ; PushN unsigned int blink_delay SZ = 1
    ; BXor8 K = 4
    ; PopTest8
    */
    else if ( ( *i ).is ( Operation::PushN,1 )  && ! ( *i ).hasConstant ( cst )  &&
              ( *i1 ).is ( Operation::BXorN,1 ) && ( *i1 ).hasConstant ( cst ) &&
              ( *i2 ).is ( Operation::PopTestN,1 )
            )
    {
      ( *i )._code = Operation::IBXorTest8 ;
      ( *i )._val = cst ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;

      ++no ;
    }
    /*
    ; PushPtrIndirectN SZ = 1
    ; BAnd8 K = 8
    ; PopTest8
    */
    else if ( ( *i ).is ( Operation::PushPtrIndirectN,1 )  &&
              ( *i1 ).is ( Operation::BAndN,1 ) && ( *i1 ).hasConstant ( cst ) &&
              ( *i2 ).is ( Operation::PopTestN,1 )
            )
    {
      ( *i )._code = Operation::IBAndTest8 ;
      ( *i )._e1 = 0 ; ( *i )._val = cst ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;

      ++no ;
    }
    /*
    ; PushPtrIndirectN SZ = 1
    ; BOr8 K = 8
    ; PopTest8
    */
    else if ( ( *i ).is ( Operation::PushPtrIndirectN,1 )  &&
              ( *i1 ).is ( Operation::BOrN,1 ) && ( *i1 ).hasConstant ( cst ) &&
              ( *i2 ).is ( Operation::PopTestN,1 )
            )
    {
      ( *i )._code = Operation::IBIorTest8 ;
      ( *i )._e1 = 0 ; ( *i )._val = cst ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;

      ++no ;
    }
    /*
    ; PushPtrIndirectN SZ = 1
    ; BXor8 K = 8
    ; PopTest8
    */
    else if ( ( *i ).is ( Operation::PushPtrIndirectN,1 )  &&
              ( *i1 ).is ( Operation::BXorN,1 ) && ( *i1 ).hasConstant ( cst ) &&
              ( *i2 ).is ( Operation::PopTestN,1 )
            )
    {
      ( *i )._code = Operation::IBXorTest8 ;
      ( *i )._e1 = 0 ; ( *i )._val = cst ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;

      ++no ;
    }

    /*
    ; PushN unsigned int i@0 SZ = 1
    ; Cast8_16U K = 1 SZ = 2
    ; PopNR SZ = 2
    */
    else if ( ( *i ).is ( Operation::PushN,1 )  &&
              ( *i1 ).is ( Operation::Cast8_16U ) &&
              ( *i2 ).is ( Operation::PopNR,2 )
            )
    {
      ( *i )._code = Operation::Mov8toRL ;
      ( *i1 )._code = Operation::ExtendRL ; ( *i1 )._val = 0 ; // unsigned
      ops().erase ( i2 ) ;
      ++no ;
    }
    /*
    ; PushN unsigned int i@0 SZ = 1
    ; CastN_NU K = 1 SZ = 2
    ; PopNR SZ = 2
    */
    else if ( ( *i ).is ( Operation::PushN,1 )  &&
              ( *i1 ).is ( Operation::CastN_NU,2 )  && ( *i1 )._val == 1 &&
              ( *i2 ).is ( Operation::PopNR,2 )
            )
    {
      ( *i )._code = Operation::Mov8toRL ;
      ( *i1 )._code = Operation::ExtendRL ; ( *i1 )._val = 0 ; // unsigned
      ops().erase ( i2 ) ;
      ++no ;
    }
    /*
    ; PushN unsigned int i@0 SZ = 1
    ; CastN_N K = 1 SZ = 2
    ; PopNR SZ = 2
    */
    else if ( ( *i ).is ( Operation::PushN,1 )  &&
              ( *i1 ).is ( Operation::CastN_N,2 )  && ( *i1 )._val == 1 &&
              ( *i2 ).is ( Operation::PopNR,2 )
            )
    {
      ( *i )._code = Operation::Mov8toRL ;
      ( *i1 )._code = Operation::ExtendRL ; ( *i1 )._val = 1 ; // signed
      ops().erase ( i2 ) ;
      ++no ;
    }
    /*
    ; TestN 0@0
    ; CleanStack
    ; GotoLabelIf

    elimination of test and dead code of if (0) of if (!0)
    */
    else if ( ( *i ).is ( Operation::TestN ) && ( *i ).hasConstant ( cst ) &&
              ( *i1 ).is ( Operation::CleanStack ) &&
              ( *i2 ).is ( Operation::GotoLabelIf ) &&
              ( ( *i2 )._str1.find ( "_else" ) != string::npos || ( *i2 )._str1.find ( "_endif" ) != string::npos )
            )
    {
      string label= ( *i2 )._str1;
      string baseLabel=label.substr ( 0,label.rfind ( '_' ) );
      int val= ( *i2 )._val;

      if ( ( !val && !cst ) || ( val && cst ) )
      {
// then branch is dead
// kill all from here (including the test) to else or endif
        list<Operation>::iterator l;
        if ( seekToOperation ( l=i, Operation::PutLabel, label ) )
        {
          deleteOp ( i );
          deleteBlock ( i2,l ); // deletes test, goto and then block, leave only the CleanStack
          if ( seekToOperation ( l, Operation::PutLabel,baseLabel+"_endif" ) )
          {
            deleteOp ( l ); // delete the label_endif too
          }
          ++no;
        }
        else
        {
          // should never occure - no label found, no change
          i = i1;
        }
      }
      else
      {
// else branch is dead

// delete test and goto else
        deleteOp ( i );
        deleteOp ( i2 );

// delete all from else to endif (if exist)
        list<Operation>::iterator f,t;
        if ( label.find ( "_else" ) != string::npos &&
             seekToOperation ( f=i, Operation::GotoLabel, baseLabel+"_endif" ) &&
             seekToOperation ( t=f, Operation::PutLabel, baseLabel+"_endif" )
           )
        {
          deleteBlock ( f,t );
        }
// delete the label_endif
        else if ( seekToOperation ( t=i, Operation::PutLabel, baseLabel+"_endif" ) )
        {
          deleteOp ( t );
        }
        ++no;
      }
    }

    /*
    ; TestN 0@0
    ; CleanStack
    ; GotoLabelIf K = 1 STR = [L18_xxx_loop]

    elimination of test and goto in do {} while(0)
    */
    else if ( ( *i ).is ( Operation::TestN ) && ( *i ).hasConstant ( cst ) && cst == 0 &&
              ( *i1 ).is ( Operation::CleanStack ) &&
              ( *i2 ).is ( Operation::GotoLabelIf ) && ( *i2 )._val == 1 &&
              ( *i2 )._str1.find ( "_loop" ) != string::npos
            )
    {
      deleteOp ( i );
      deleteOp ( i2 );
      ++no;
    }
    /*
    ; TestN K = 1 SZ = 1
    ; CleanStack
    ; GotoLabelIf STR = [L18_xxx_exit]

    elimination of test and goto in while(1) {}
    */
    else if ( ( *i ).is ( Operation::TestN ) && ( *i ).hasConstant ( cst ) && cst != 0 &&
              ( *i1 ).is ( Operation::CleanStack ) &&
              ( *i2 ).is ( Operation::GotoLabelIf ) && ( *i2 )._val == 0 &&
              ( *i2 )._str1.find ( "_exit" ) != string::npos
            )
    {
      deleteOp ( i );
      deleteOp ( i2 );
      ++no;
    }
    /*
    ; TestN K = 0 SZ = 1
    ; CleanStack
    ; GotoLabelIf STR = [L18_xxx_exit]

    elimination of test and body of while(0) {}
    */
    else if ( ( *i ).is ( Operation::TestN ) && ( *i ).hasConstant ( cst ) && cst == 0 &&
              ( *i1 ).is ( Operation::CleanStack ) &&
              ( *i2 ).is ( Operation::GotoLabelIf ) && ( *i2 )._val == 0 &&
              ( *i2 )._str1.find ( "_exit" ) != string::npos &&
              seekToOperation ( t=i2, Operation::PutLabel, ( *i2 )._str1 )
            )
    {
      deleteOp ( i );
      deleteBlock ( i2,t );
      ++no;
    }
    /*
    ; Mov8toRL
    ; CleanStack
    ; Mov8RLtoR

    ; -> Mov8toR int a@0 SZ = 1
    */
    else if ( ( *i ).is ( Operation::Mov8toRL ) &&
              ( *i1 ).is ( Operation::CleanStack ) &&
              ( *i2 ).is ( Operation::Mov8RLtoR )
            )
    {
      ( *i )._code = Operation::Mov8toR ;
      deleteOp ( i2 );
      ++no;
    }
    /*
    ; Pop8RL
    ; CleanStack
    ; Mov8RLtoR

    ; -> Pop8R int a@0 SZ = 1
    */
    else if ( ( *i ).is ( Operation::Pop8RL ) &&
              ( *i1 ).is ( Operation::CleanStack ) &&
              ( *i2 ).is ( Operation::Mov8RLtoR )
            )
    {
      ( *i )._code = Operation::Pop8R ;
      deleteOp ( i2 );
      ++no;
    }
    /*
    ; PushN unsigned int::5:1 x.0@2 SZ = 1
    ; UpackU K = 5 SZ = 1
    ; PopBF unsigned int::5:1 x.1@3 K = 5 SZ = 1
      replaced with a MovBFtoBF Only if BF have same size, and no access thru Ptr
    */
    else if ( ( *i ).is ( Operation::PushN ) && (( *i1 ).is ( Operation::UpackU ) || ( *i1 ).is ( Operation::Upack ))&&
              ( *i1 ).isBF ( bfsize1,bfoffset1 ) &&
              ( *i2 ).is ( Operation::PopBF )  && ( *i2 ).isBF ( bfsize2, bfoffset2 ) &&
              ( bfsize2 == bfsize1 ) && ( bfsize2  <= 3 )  && ( *i )._e1  && ( *i2 )._e1
            )
    {
      ( *i )._code = Operation::MovBFtoBF  ;
      ( *i )._e2 = ( *i2 )._e1 ;  // size/offset are encoded in _e1 and _e2 types
      // encode destination size/offset, so destination may be *Ptr in the future
      ( *i ).setBF ( bfsize2, bfoffset2 ) ;
      ops().erase ( i1 ) ; ops().erase ( i2 ) ;
    }
    else
      i = i1 ;
  }
  return no ;
}
/** No descriptions */

int Flatten::optimize4()
{
  int no = 0 ;
  list<Operation>::iterator i, i1, i2 , i3 , max = _ops.end() , t ;
  int cst ;
  for ( i = _ops.begin(); nextO ( i,i1,max ) && nextO ( i1,i2 ,max ) &&  nextO ( i2,i3 ,max )  ;  max = _ops.end() )
  {
    if ( ( *i ).is ( Operation::PushN,2 ) &&   // array or ptr dereferencement
         ( *i1 )._code == Operation::MovConst16toR &&
         ( *i2 ).is ( Operation::AddN,2 ) &&
         ( *i3 )._code == Operation::PopP &&
         ( *i )._e1->isVariable()
       )
    {
      // perform direct move to PTR and addition
      ( *i )._code = Operation::MovToP  ;
      ( *i )._val = ( *i1 )._val ;
      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;
      ops().erase ( i3 ) ;
      ++no ;
    }

    else if ( ( *i ).is ( Operation::PushPtrIndirectN,2 ) &&
              ( *i1 ).is ( Operation::AddCst8TOS16 ) &&
              ( *i2 ).is ( Operation::IndirectN, 2 ) &&
              ( *i3 ).is ( Operation::PopN )
            )
    {

      ( *i )._code = Operation::MovPtrIndirectToPtr  ;
      ( *i )._val = 0 ; ( *i )._nbytes = 0 ;
      ( *i1 )._code = Operation::AddCst16Ptr ; // _val already OK
      ( *i3 )._code = Operation::MovPtrIndirectNto ;
      ops().erase ( i2 ) ;
      ++no ;
    }

    else if ( ( *i ).is ( Operation::PushAddr ) &&
              ( *i1 ).is ( Operation::AddCst8TOS16 ) &&
              ( *i2 ).is ( Operation::IndirectN ) &&
              ( *i3 ).is ( Operation::PopN )
            )
    {

      ( *i )._code = Operation::MovAddrToP  ;
      ( *i1 )._code = Operation::AddCst16Ptr ; // _val already OK
      ( *i3 )._code = Operation::MovPtrIndirectNto ;
      ops().erase ( i2 ) ;
      ++no ;
    }
    /*
    ; LNot8
    ; PopTest8
    ; CleanStack
    ; GotoLabelIf STR = [L18_blink2_ess_23]
    ==>  suppress logical not and invert test
    */
    else if ( ( *i ).is ( Operation::LNotN ) &&
              ( *i1 ).is ( Operation::PopTestN ) && ( ( *i )._nbytes == ( *i1 )._nbytes ) &&
              ( *i2 ).is ( Operation::CleanStack ) &&
              ( *i3 ).is ( Operation::GotoLabelIf )
            )
    {
      t = i1 ;
      ( *i3 )._val = ! ( *i3 )._val  ;
      ops().erase ( i ) ;
      i = t ;
      ++no ;
    }
    /*
    ; PushN int k@0
    ; MovNtoR int 0@0
    ; Compare K = Eq or Ueq ( == )
    ; PopTest8

    if( i == 0 ) --> if(!i) will be optimized as ifnot(i)

    */
    else if ( ( *i ).is ( Operation::PushN )  &&
              ( *i1 ).is ( Operation::MovNtoR ) && ( *i1 ).hasConstant ( cst ) && ( cst == 0 ) &&
              ( *i2 ).is ( Operation::CompareN ) && ( ( *i2 )._val == Operation::Eq || ( *i2 )._val == Operation::Ueq ) &&
              ( *i3 ).is ( Operation::PopTestN, 1 ) &&
              ( *i )._nbytes== ( *i1 )._nbytes && ( *i1 )._nbytes== ( *i2 )._nbytes
            )
    {
      ( *i1 ) ._code  = Operation::TestN ;
      ( *i1 )._e1 = ( *i )._e1 ;

      ( *i )._code = Operation::LNotN ;
      ( *i )._e1 = 0 ;
      ( *i )._val = 0 ;

      ops().erase ( i2 ) ;
      ops().erase ( i3 ) ;

      ++no ;
    }
    /*
    ; PushN int 0@0
    ; MovNtoR int k@0
    ; Compare K = Eq or Ueq  ( == )
    ; PopTest8

    if( 0 == i ) --> if(!i) will be optimized as ifnot(i)

    */
    else if ( ( *i ).is ( Operation::PushN ) && ( *i ).hasConstant ( cst ) && ( cst == 0 ) &&
              ( *i1 ).is ( Operation::MovNtoR )  &&
              ( *i2 ).is ( Operation::CompareN ) && ( ( *i2 )._val == Operation::Eq || ( *i2 )._val == Operation::Ueq ) &&
              ( *i3 ).is ( Operation::PopTestN, 1 ) &&
              ( *i )._nbytes== ( *i1 )._nbytes && ( *i1 )._nbytes== ( *i2 )._nbytes
            )
    {
      ( *i1 ) ._code  = Operation::TestN ;

      ( *i )._code = Operation::LNotN ;
      ( *i )._e1 = 0 ;
      ( *i )._val = 0 ;

      ops().erase ( i2 ) ;
      ops().erase ( i3 ) ;

      ++no ;
    }
    /*
    ; LNot8
    ; Test8 int k@0 SZ = 1
    ; CleanStack
    ; GotoLabelIf STR = [L18_blink2_ess_25]
     ==> remove logical not, and invert test
    */
    else if ( ( *i ).is ( Operation::LNotN )  &&
              ( *i1 ).is ( Operation::TestN ) && ! ( *i1 ).hasConstant ( cst )
              && ( ( *i )._nbytes == ( *i1 )._nbytes ) &&
              ( *i2 ).is ( Operation::CleanStack ) &&
              ( *i3 ).is ( Operation::GotoLabelIf )
            )
    {
      t = i ;
      i = i1 ;
      ops().erase ( t ) ;
      ( *i3 )._val = ! ( *i3 )._val ;
      ++no ;
    }
    /*
    ; PushN int k@0
    ; MovNtoR int 0@0
    ; Compare K = Ne or Une  (!= )
    ; PopTest8

    if( i != 0 ) --> if(i)

    */
    else if ( ( *i ).is ( Operation::PushN )  &&
              ( *i1 ).is ( Operation::MovNtoR ) && ( *i1 ).hasConstant ( cst ) && ( cst == 0 ) &&
              ( *i2 ).is ( Operation::CompareN ) && ( ( *i2 )._val == Operation::Ne || ( *i2 )._val == Operation::Une ) &&
              ( *i3 ).is ( Operation::PopTestN,1 ) &&
              ( *i )._nbytes== ( *i1 )._nbytes && ( *i1 )._nbytes== ( *i2 )._nbytes
            )
    {
      ( *i ) ._code  = Operation::TestN ;

      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;
      ops().erase ( i3 ) ;

      ++no ;
    }
    /*
    ; PushN int 0@0
    ; MovNtoR int k@0
    ; Compare K = Ne or Une  (!= )
    ; PopTest8

    if( 0 != i ) --> if(i)

    */
    else if ( ( *i ).is ( Operation::PushN ) && ( *i ).hasConstant ( cst ) && ( cst == 0 ) &&
              ( *i1 ).is ( Operation::MovNtoR )  &&
              ( *i2 ).is ( Operation::CompareN ) && ( ( *i2 )._val == Operation::Ne || ( *i2 )._val == Operation::Une ) &&
              ( *i3 ).is ( Operation::PopTestN,1 ) &&
              ( *i )._nbytes== ( *i1 )._nbytes && ( *i1 )._nbytes== ( *i2 )._nbytes
            )
    {
      ( *i ) ._code  = Operation::TestN ;
      ( *i ) ._e1 = ( *i1 ) ._e1;

      ops().erase ( i1 ) ;
      ops().erase ( i2 ) ;
      ops().erase ( i3 ) ;

      ++no ;
    }


    else
      i = i1 ;
  }
  return no ;
}



/*
  is called with the only test expression flattened
  optimize the expression

return:
  AlwaysTrue or AlwaysFalse if the result of test is constant
  Raw or Negate when the result is not constant. In this case the result remains on stack (1 byte)
*/
enum Flatten::TestResult Flatten::optimizeTest()
{
  return Raw;
// fixme - does not works with if ( a || b ) and similar!!!

  optimize();

  list<Operation>::iterator i, i1, i2 , i3, i4 , max = _ops.end() , t ;
  int cst ;
  for ( i = _ops.begin(); i!=_ops.end() ;  ++i )
  {
    nextO ( i,i1,max );
    nextO ( i1,i2 ,max );
    nextO ( i2,i3 ,max );
    nextO ( i3,i4 ,max );

    /* ; PushN int 1@1 SZ = 1
      ; MovTosToN unsigned char u@0 SZ = 1
      ; PopTestN SZ = 1
      ; CleanStack (?)

      if (var=constant)
    */



    if ( ( *i ).is ( Operation::PushN ) && ( *i ).hasConstant ( cst )
         && ( *i1 ).is ( Operation::MovTosToN )
         && ( *i2 ).is ( Operation::PopTestN )
       )
    {
      // we must compile the assigment but not the test
      ( *i1 )._code = Operation::PopN;
      deleteOp ( i2 ); // erase PopTestN
      if ( ( *i3 ).is ( Operation::CleanStack ) ) deleteOp ( i3 );
      eraseDeleted();
      return cst ? AlwaysTrue : AlwaysFalse ;
    }
    /* ; PushN int 1@1 SZ = 1
      ; MovTosToN unsigned char u@0 SZ = 1
      ; LNotN SZ = 1
      ; PopTestN SZ = 1
      ; CleanStack (?)

      if (!(var=constant))
    */
    else

#if 0

      if ( ( *i ).is ( Operation::PushN ) && ( *i ).hasConstant ( cst )
           && ( *i1 ).is ( Operation::MovTosToN )
           && ( *i2 ).is ( Operation::LNotN )
           && ( *i3 ).is ( Operation::PopTestN )
         )
      {
        // we must compile the assigment but not the test
        ( *i1 )._code = Operation::PopN;
        deleteBlock ( i2, i3 ); // erase LNotN and PopTestN
//     if ((*i4).is ( Operation::CleanStack) ) deleteOp(i4);
        eraseDeleted();
        return cst ? AlwaysFalse : AlwaysTrue ;
      }

    /*
     ; TestN K = 1 SZ = 1
     ; CleanStack

     if (constant)
    */
      else
#endif

        if ( ( *i ).is ( Operation::TestN ) && ( *i ).hasConstant ( cst ) )
        {
          deleteOp ( i ); // no test is needed
//     if ((*i1).is ( Operation::CleanStack) ) deleteOp(i1);
          eraseDeleted();
          return cst ? AlwaysTrue : AlwaysFalse ;
        }
    /*
     ; LNotN SZ = 1
     ; PopTestN SZ = 1
     if (! expr) -> ifnot (expr)
    */
#if 0
        else if ( ( *i ).is ( Operation::LNotN )
                  && ( *i1 ).is ( Operation::PopTestN )
                )
        {
          deleteOp ( i );
          eraseDeleted();
          return Negate ;
        }
#endif
    /*
    ; CompareN True or CompareN False
    ; PopTestN SZ = 1

    if (unsigned < 0) and similar
    */
#if 0
        else if ( ( *i ).is ( Operation::CompareN )
                  && ( ( *i )._val==Operation::True || ( *i )._val==Operation::False )
                  && ( *i1 ).is ( Operation::PopTestN )
                )
        {
          enum Flatten::TestResult res;
          res= ( ( *i )._val==Operation::True ) ? AlwaysTrue : AlwaysFalse;
          ( *i ) =Operation ( Operation::DiscardR );
          deleteOp ( i1 );
          eraseDeleted();
          return res ;
        }
#endif
  }

  return Raw;
}

