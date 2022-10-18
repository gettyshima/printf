#ifndef MAIN_H
#define MAIN_H

/*header files*/
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/*prototypes*/
char *convert(unsigned long int, int, int);
int count_digit(int);
int printx(va_list);
int printX(va_list);
int printo(va_list);
int printu(va_list);
int printR(va_list);
int printr(va_list);
int printp(va_list);
int printS(va_list);
int printl(va_list);
int printh(va_list);
void print_unsign(unsigned int);
void print_long(unsigned long int);
void print_su(unsigned short int);
void print_id(int);

#endif
