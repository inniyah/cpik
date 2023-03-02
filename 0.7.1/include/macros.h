#ifndef MACRO_H
#define MACRO_H
/* CPIK V0.5.1 */

/* portability : DO NOT USE these macros - consider to use typdefs from types.h */
#define UINT8				unsigned int
#define INT8				int
#define UINT16				unsigned long
#define INT16				long

/* bit manipulation */
// set bit
#define BIT_1(reg, bit) ((reg) |= (1<< (bit))) 
// reset bit
#define BIT_0(reg, bit) ((reg) &= ~(1<< (bit))) 
// 0 is bit not set, != 0 if set
#define BIT_TST(reg,bit) ((reg) & (1<< (bit))) 
// generates a mask for bit b
#define BIT_MASK(b) (1<<(b))
// invert bit bit
#define BIT_TOGGLE(reg, bit) ((reg) ^= (1<< (bit))) 
// treg.tbit = sreg.sbit
#define BIT_COPY(treg, tbit, sreg, sbit) \
	if( BIT_TST(sreg,sbit) ) BIT_1(treg,tbit) ; else  BIT_0(treg,tbit) ;
// treg.tbit = ~sreg.sbit
#define BIT_NCOPY(treg, tbit, sreg, sbit) \
	if( BIT_TST(sreg,sbit) ) BIT_0(treg,tbit) ; else  BIT_1(treg,tbit) ;
// treg.tbit = flag
#define BIT_WRITE(treg, tbit, flag) \
        do { if( flag ) BIT_1(treg,tbit) ; else  BIT_0(treg,tbit) ; } while(0)


/* misc */
#define NOP __asm__("\tnop")
#define CLEAR_WATCHDOG __asm__("\tclrwdt")

#endif
