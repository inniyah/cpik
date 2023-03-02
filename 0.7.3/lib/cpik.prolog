;
; standard prolog code for cpik C compiler 
; CPIK version : 0.7.3
; 16/7/2012 bra changed to goto at address 0
;
; by Alain Gibaud
; alain.gibaud@free.fr
; http://pikdev.free.fr
;
;   Copyright (C) 2011-2013, Alain Gibaud   alain.gibaud@free.fr
;
;   This file is part of the CPIK library
;   ------------------------------------------------------- 
;   This library is free software; you can redistribute it and/or modify it
;   under the terms of the GNU General Public License as published by the
;   Free Software Foundation; either version 2.1, or (at your option) any
;   later version.
 
;   This library is distributed in the hope that it will be useful,
;   but WITHOUT ANY WARRANTY; without even the implied warranty of
;   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;   GNU General Public License for more details.
 
;  You should have received a copy of the GNU General Public License 
;   along with this library; see the file COPYING. If not, write to the
;   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
;   MA 02110-1301, USA.
 
;   As a special exception, if you link this library with other files,
;   some of which are compiled with CPIK, to produce an executable,
;   this library does not by itself cause the resulting executable to
;   be covered by the GNU General Public License. This exception does
;   not however invalidate any other reasons why the executable file
;   might be covered by the GNU General Public License.


	LIST r=dec, x=ON, mm=ON

; current interrupt mask status
IT_MASK             equ 0x0
C18_errno           equ 0x1

; Scratchpad zone 
; --------------- 
; - subroutine return values
; - second argument for dyadic operators
; - temporaries for some RTL routines 
; - integer and floating-point arithmetic

; SCRATCH_SIZE : number of bytes reserved for scratchpad
; ie: size of the larger structure used by the program
;           TODO: make SCRATCH_SIZE determination automatic
; SCRATCH_SIZE can be extended up to 128

SCRATCH_SIZE EQU 40

; GP register R0
R0	equ 2
R0L	equ R0
R0H	equ (R0+1)
; 
; GP register R1
R1	equ (R0+2)
R1L	equ (R0+2)
R1H	equ (R0+3)
;
; GP register R2
R2	equ (R0+4)
;
; GP register R3
R3	equ (R0+6)
;
; GP register R4
R4	equ (R0+8)
;
; GP register R5
R5	equ (R0+10)
;

;
; Pseudo register mapping for FP code
; FP code use F1, F2, F3 : 32 bit register and 5 bytes for signs and exponents
;
F1 		equ R2		; mapped to R2/R3 pair
F2 		equ R0  	; mapped to R0/R1 pair
F3 		equ R4 		; mapped to R4/R5 pair
; 5 bytes used for FP calculation follow R5
F1_EXP 		equ R0+12	
F2_EXP 		equ R0+13
F1_SIGN 	equ R0+14
F2_SIGN 	equ R0+15
; 4 bytes used for FP division
FMASK   	equ R0+16
END_CPIK_DATA	equ R0+20
;
; first RAM address available
; for program global data
;
	CBLOCK R0+SCRATCH_SIZE
	ENDC


;
; Macros for FP code
; ------------------
;
;  Branch o "target" if "reg1" < "reg2"
;  (32 bit signed comparison) 
; Note: W corrupted
; computes the signed result reg1-reg2
; OK when no overflow, else wrong
BLT32 macro reg1,reg2,target
  movf reg2+0,W,0 ; reg1<reg2 => (reg1-reg2)<0
  subwf reg1+0,W,0
  movf reg2+1,W,0
  subwfb reg1+1,W,0
  movf reg2+2,W,0
  subwfb reg1+2,W,0
  movf reg2+3,W,0
  subwfb reg1+3,W,0
  btfsc WREG,7,0 ; test sign bit
  bra target 
  endm
;
;  Skip next instruction if "reg1" < "reg2"
;  (compute 32 bit signed result)
;  Only works when no overflow 
;  (so it is OK for 23 bit mantissa)
; Note: W corrupted
;
SLT32 macro reg1,reg2
  movf reg2+0,W,0 ; reg1<reg2 <=> (reg1-reg2)<0
  subwf reg1+0,W,0
  movf reg2+1,W,0
  subwfb reg1+1,W,0
  movf reg2+2,W,0
  subwfb reg1+2,W,0
  movf reg2+3,W,0
  subwfb reg1+3,W,0
  btfss WREG,7,0 ; test sign bit
  endm
;
;  Branch to "target" if "reg" != 0
;
BNZ32 macro reg,target
  movf reg+0,W,0
  iorwf reg+1,W,0
  iorwf reg+2,W,0
  iorwf reg+3,W,0
  bnz target
  endm
;
;  Branch to "target" if "reg" != 0.0
;  detection of FP negative zero
;  (***  -0 == 0x80000000 ****)
BNZF32 macro reg,target
  movf reg+0,W,0
  iorwf reg+1,W,0
  iorwf reg+2,W,0
  bnz target
  iorwf reg+3,W,0
  andlw 0x7F ;  mask bit 7
  bnz target
  endm
;
;  Branch to "target" if "reg" == 0
;
BZ32 macro reg,target
  movf reg+0,W,0
  iorwf reg+1,W,0
  iorwf reg+2,W,0
  iorwf reg+3,W,0
  bz target
  endm
;
; clear "dst"
;
CLR32 macro dst
  clrf dst+0,0
  clrf dst+1,0
  clrf dst+2,0
  clrf dst+3,0
  endm
;
; Load "dst" from "src"
;
LOAD32 macro dst,src
  movff src+0,dst+0
  movff src+1,dst+1
  movff src+2,dst+2
  movff src+3,dst+3
  endm
;
; Extract the exponent from "src" 
; and store it in "dst" byte
;
LOADEXP macro dst,src
  movff src+3,dst
  bcf STATUS,0,0
  rlcf dst,F,0 ; discard sign bit and clears b0
  btfsc src+2,7,0 ; copy src b23 to b0
  bsf  dst,0,0
  endm
;
;  "reg" = -"reg"
;
NEG32 macro reg
  bsf STATUS,0,0 ; set C = /Borrow
  clrf WREG,0
  subfwb reg+0,F,0
  subfwb reg+1,F,0
  subfwb reg+2,F,0
  subfwb reg+3,F,0
  endm

;
; branch to "label" if !(aa > bb+25)
; aa and bb are 8 bit, unsigned 
;  PRODL corrupted
;
NOT_AsupBp25 macro aa,bb,label
 movf bb,W,0 ; W=bb
 cpfsgt aa,0 ; computes unsigned aa-bb 
 bra label ; aa <= bb, cond cannot be satisfied
 ; here aa > bb
 subwf aa,W,0 ; W=aa-bb (result always positive)
 movwf PRODL,0
 movlw 25
 cpfsgt PRODL,0
 bra label ; (aa-bb) <= 25
; (aa-bb) > 25
 endm

; 
; branch to "label" if !(aa > bb)
; aa and bb are unsigned 8bit
;
NOT_AsupB macro aa,bb,label
 movf bb,W,0 ; W=bb
 cpfsgt aa,0 ; 
 bra label ; aa <= bb
 ; here, aa > bb
 endm
; 
; shift "reg" one bit right 
; (W not destoyed)
; ***this a signed shift !! ****
SHIFTR32 macro reg
  bcf STATUS,0,0 ; copy b7 to carry
  btfsc reg+3,7,0
  bsf STATUS,0,0 ; done
  rrcf reg+3,F,0
  rrcf reg+2,F,0
  rrcf reg+1,F,0
  rrcf reg+0,F,0
  endm
; 
; shift "reg" one bit right 
; (W not destoyed)
; ***this is an UNsigned shift !! ****
SHIFTR32U macro reg
  bcf STATUS,0,0 ; copy b7 to carry
  rrcf reg+3,F,0
  rrcf reg+2,F,0
  rrcf reg+1,F,0
  rrcf reg+0,F,0
  endm
; 
; shift "reg" one bit left
; (W not destroyed)
SHIFTL32 macro reg
  bcf STATUS,0,0 ; clear carry
  rlcf reg+0,F,0
  rlcf reg+1,F,0
  rlcf reg+2,F,0
  rlcf reg+3,F,0
  endm
;
; add constant "K" to "reg"
;
ADD_K_32 macro reg,K
  movlw K
  addwf reg+0,F,0
  movlw 0
  addwfc reg+1,F,0
  addwfc reg+2,F,0
  addwfc reg+3,F,0
  endm
;
; -------------- end of FP macros ---------------
;



;
; Various macro for jumps/call optimisation
;

ICALL_FAR macro target
 call target,0
 ENDM

ICALL_MID macro target
 call target,0
 ENDM

ICALL_NEAR macro target
 rcall target
 ENDM


IBRA_FAR macro target
 goto target
 ENDM

IBRA_MID macro target
 goto target
 ENDM

IBRA_NEAR macro target
 bra target
 ENDM


; variable is used to compile correctly IBZ_FAR $+offset 
IBZ_FAR macro target
 variable jump_target = target
 bnz $+6
 goto jump_target
 ENDM

IBZ_MID macro target
 variable jump_target = target
 bnz $+4
 bra jump_target
 ENDM

IBZ_NEAR macro target
 bz target
 ENDM


IBNZ_FAR macro target
 variable jump_target = target
 bz $+6
 goto jump_target
 ENDM

IBNZ_MID macro target
 variable jump_target = target
 bz $+4
 bra jump_target
 ENDM

IBNZ_NEAR macro target
 bnz target
 ENDM



IBC_FAR macro target
 variable jump_target = target
 bnc $+6
 goto jump_target
 ENDM

IBC_MID macro target
 variable jump_target = target
 bnc $+4
 bra jump_target
 ENDM

IBC_NEAR macro target
 bc target
 ENDM


IBNC_FAR macro target
 variable jump_target = target
 bc $+6
 goto jump_target
 ENDM

IBNC_MID macro target
 variable jump_target = target
 bc $+4
 bra jump_target
 ENDM

IBNC_NEAR macro target
 bnc target
 ENDM


#ifdef JUMP_OPTIMIZING
  #define IBRA IBRA_NEAR
  #define IBZ  IBZ_NEAR
  #define IBNZ IBNZ_NEAR
  #define IBC  IBC_NEAR
  #define IBNC IBNC_NEAR
  #define ICALL ICALL_NEAR
#else
  #define IBRA IBRA_FAR
  #define IBZ  IBZ_FAR
  #define IBNZ IBNZ_FAR
  #define IBC  IBC_FAR
  #define IBNC IBNC_FAR
  #define ICALL ICALL_FAR
#endif


; ----------------------------------------------------------------
; Today, there is no PIC18 device with more than 4096 bytes of RAM
; so it is safe to load FSRs with lfsr instruction.
; Change the following macros if this is not the case anymore.
; A.G 2008-11-18
ILFSR0 macro target
  lfsr 0,target
 ENDM

ILFSR1 macro target
  lfsr 1,target
 ENDM

ILFSR2 macro target
  lfsr 2,target
 ENDM


;
; ------------------------------------------------------
; normal code start point
; Bootloaders may need a goto (instead of bra)
; as a first instruction. 
 org 0x0
reset_vector
 goto cstart
 
; ------------------------------------------------------
; high priority vector
 org 0x8
hi_pri_vector
 IBRA C18_hi_pri_ISR
 
; ------------------------------------------------------
; low priority vector
 org 0x18
lo_pri_vector
 IBRA C18_lo_pri_ISR
 
; === END of cpik.prolog ============================
; cstart will begin here

