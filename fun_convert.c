#include "main.h"

/**
  *printX - prints upper hexadecimal
  *@list: the arg
  *Return: the number of string
  */

int printX(va_list list)
{
	int count = 0;
	char *str;
	unsigned int x = va_arg(list, unsigned int);

	str = convert(x, 16, 0);
	count = _puts(str);
	return (count);
}

/**
  *printx - print lower hex
  *@list: the arg
  *Return: the number of string
  */

int printx(va_list list)
{
	int count = 0;
	char *str;
	unsigned int x = va_arg(list, unsigned int);

	str = convert(x, 16, 1);
	count = _puts(str);
	return (count);
}

/**
  *printo - prints oct
  *@list: the arg
  *Return: the lenght of the string
  */

int printo(va_list list)
{
	int count = 0;
	char *str;
	unsigned int x = va_arg(list, unsigned int);

	str = convert(x, 8, 0);
	count = _puts(str);
	return (count);
}

/**
  *printu - prints unsigned int
  *@list: the arg
  *Return: the number of int
  */

int printu(va_list list)
{
	int count = 0;
	unsigned int x = va_arg(list, unsigned int);

	print_unsign(x);
	count = count_digit(x);
	return (count);
}
