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
