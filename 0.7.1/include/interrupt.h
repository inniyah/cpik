#ifndef INTERRUPT_H
#define INTERRUPT_H
/* CPIK V0.5 */

#define MASK_HI_PRI_IT \
{\
 	__asm__("\tbcf INTCON,7,0") ; \
	__asm__("\tbcf IT_MASK,7,0") ; \
}

#define MASK_LO_PRI_IT \
{\
 	__asm__("\tbcf INTCON,6,0") ; \
	__asm__("\tbcf IT_MASK,6,0") ; \
}

#define UNMASK_HI_PRI_IT \
{\
 	__asm__("\tbsf IT_MASK,7,0") ; \
	__asm__("\tbsf INTCON,7,0") ; \
}

#define UNMASK_LO_PRI_IT \
{\
 	__asm__("\tbsf IT_MASK,6,0") ; \
	__asm__("\tbsf INTCON,6,0") ; \
}


#define DISABLE_IT \
{\
 	__asm__("\tmovlw B'00111111'") ; \
	__asm__("\tandwf INTCON,F,0") ; \
}

#define ENABLE_IT \
{\
 	__asm__("\tmovf IT_MASK,W,0") ; \
	__asm__("\tiorwf INTCON,F,0") ; \
}

#define SAVE_REGS \
{\
   __asm__("\tmovff R0,PREINC0") ;\
   __asm__("\tmovff R0+1,PREINC0") ;\
   __asm__("\tmovff R1,PREINC0") ;\
   __asm__("\tmovff R1+1,PREINC0") ;\
   __asm__("\tmovff R2,PREINC0") ;\
   __asm__("\tmovff R2+1,PREINC0") ;\
   __asm__("\tmovff R3,PREINC0") ;\
   __asm__("\tmovff R3+1,PREINC0") ;\
   __asm__("\tmovff PRODL,PREINC0") ;\
   __asm__("\tmovff PRODH,PREINC0") ;\
}

#define RESTORE_REGS \
{\
   __asm__("\tmovff POSTDEC0,PRODH") ;\
   __asm__("\tmovff POSTDEC0,PRODL") ;\
   __asm__("\tmovff POSTDEC0,R3+1") ;\
   __asm__("\tmovff POSTDEC0,R3") ;\
   __asm__("\tmovff POSTDEC0,R2+1") ;\
   __asm__("\tmovff POSTDEC0,R2") ;\
   __asm__("\tmovff POSTDEC0,R1+1") ;\
   __asm__("\tmovff POSTDEC0,R1") ;\
   __asm__("\tmovff POSTDEC0,R0+1") ;\
   __asm__("\tmovff POSTDEC0,R0") ;\
}

#endif
