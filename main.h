#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
int _putchar(char c);
int _strlen(char *s);
int _puts(char *s);
char *convert(unsigned long int num, int base, int choice);
int count_digit(int n);
int printS(va_list list);
int printp(va_list list);
int printr(va_list list);
int printR(va_list list);
void print_unsign(unsigned int n);
void print_long(unsigned long int n);
void print_su(unsigned long int n);
void print_id(int n);
int print_X(va_list list);
int print_x(va_list list);
int print_o(va_list list);
int print_u(va_list list);
int print_d(va_list list);
int print_i(va_list list);


#endif
