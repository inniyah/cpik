
#ifndef __STRING_H
#define __STRING_H


#include <sys/types.h>
size_t strlen(char *s);
char *strcat(char *dests, char *src);
char *strcpy(char *dests, char *src);
char strcmp(char *s1, char *s2);
char strcasecmp(char *s1, char *s2);
char strncasecmp(char *s1, char *s2, size_t n);
char strncmp(char *s1, char *s2, size_t n);

void *memcpy(void *dest, void *src, size_t num);
void *memmove(void *dest, void *src, size_t num);
/* non standard */
void xmemshift(void *vec, uint8_t offset, int8_t shift, uint8_t blklen, uint8_t size);  
#endif