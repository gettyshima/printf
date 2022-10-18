#include "main.h"

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
	s = convert(b, 2, 0);
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
	count = _putchar(c);
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


