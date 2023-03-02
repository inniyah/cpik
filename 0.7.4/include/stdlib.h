/*
;   Copyright (C) 2011, Alain Gibaud   alain.gibaud@free.fr
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

*/
#ifndef STDLIB_H
#define STDLIB_H

#undef NULL
#define NULL 0L
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1


int _assert(long line,char *s) ;
void exit(int i) ;

int isspace(char c);
int isdigit(char c);

char 	*ftoa (float x, char * str, int prec, int format);
float 	strtof(const char *str, char **endptr);
float 	atof(const char *str) ;
int 	atoi(const char *str) ;
long 	atol(const char *str) ;
long long  atoll(const char *str) ;
#endif

