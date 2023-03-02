#ifndef TIMER0_H
#define TIMER0_H
#include <macros.h>
void reload_timer0() ;
void timer0_init() ;
void timer0_ISR() ;
UINT16 get_clock(UINT8 clocknum) ;
UINT16 get_clockm(UINT8 clocknum) ;
void start_clock(UINT8 clocknum) ;
void restart_clock(UINT8 clocknum) ;
void stop_clock(UINT8 clocknum) ;
void clear_clock(UINT8 clocknum) ;
UINT8 timer0_flags() ;
#define T0_1S_FLAG 	2
#define T0_0_1S_FLAG 	1
#endif
