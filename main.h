#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct structure
{
	const char c;
	int (*ptr)(va_list);
} specifiers;

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
void print_su(unsigned short n);
void print_id(int n);
int print_X(va_list list);
int print_x(va_list list);
int print_o(va_list list);
int print_u(va_list list);
int print_d(va_list list);
int print_i(va_list list);
int print_b(va_list list);
int print_s(va_list list);
int print_c(va_list list);
int _printf(const char *format, ...);
int (*match(const char c))(va_list);


#endif
