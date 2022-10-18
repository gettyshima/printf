#include "main.h"

/**
  *print_X - prints upper hexadecimal
  *@list: the arg
  *Return: the number of string
  */

int print_X(va_list list)
{
	int count = 0;
	char *str;
	unsigned int x = va_arg(list, unsigned int);

	str = convert(x, 16, 0);
	count = _puts(str);
	return (count);
}

/**
  *print_x - print lower hex
  *@list: the arg
  *Return: the number of string
  */

int print_x(va_list list)
{
	int count = 0;
	char *str;
	unsigned int x = va_arg(list, unsigned int);

	str = convert(x, 16, 1);
	count = _puts(str);
	return (count);
}

/**
  *print_o - prints oct
  *@list: the arg
  *Return: the lenght of the string
  */

int print_o(va_list list)
{
	int count = 0;
	char *str;
	unsigned int x = va_arg(list, unsigned int);

	str = convert(x, 8, 0);
	count = _puts(str);
	return (count);
}

/**
  *print_u - prints unsigned int
  *@list: the arg
  *Return: the number of int
  */

int print_u(va_list list)
{
	int count = 0;
	unsigned int x = va_arg(list, unsigned int);

	print_unsign(x);
	count = count_digit(x);
	return (count);
}
/**
 * print_d- prints decimal
 * @list: variable argument list
 * Return: returns number of decimals printed
 */
int print_d(va_list list)
{
	int count = 0;
	int d;

	d = va_arg(list, int);
	print_id(d);
	count = count_digit(d);
	return (count);
}
/**
 * print_i- prints integers
 * @list: variable argument list
 * Return: number of integers printed
 */
int print_i(va_list list)
{
	int count = 0;
	int i;

	i = va_arg(list, int);
	print_id(i);
	count = count_digit(i);
	return (count);
}
/**
 * print_b- prints binary format
 * @list:variable argument list
 * Return: the number of integers printed
 */

int print_b(va_list list)
{
	int count = 0;
	unsigned int b;
	char *s;

	b = va_arg(list, unsigned int);
	s = convert(x, 2, 0);
	_puts(s);
	count = _puts(s);
	return (count);
}
/**
 * print_c- prints a character
 * @list: variable argument list
 * Return: the number of characters printed
 */
int print_c(va_list list)
{
	int count = 0;
	char c;

	c = (char)va_arg(list, int);
	_putchar(c);
	count = _puchar(c);
	return (count);
}
/**
 * print_s- prints strings
 * @list: variable argument list
 * Return: number of characters in the string printed
 */
int print_s(va_list list)
{
	int count = 0;
	char *s;

	s = va_arg(list, char *);
	_puts(s);
	count = _puts(s);
	return (count);
}


