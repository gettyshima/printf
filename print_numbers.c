#include "main.h"

/**
  *print_unsign - prints unsigned int
  *@n: the number
  *Return: nothing
  */

void print_unsign(unsigned int n)
{
	if (n / 10)
		print_unsign(n / 10);
	_putchar(n % 10 + '0');
}

/**
  *print_long - prints long unsigned
  *@n: the number
  *Return: nothing
  */

void print_long(unsigned long int n)
{
	if (n / 10)
		print_long(n / 10);
	_putchar(n % 10 + '0');
}

/**
 *print_su - prints long unsigned
 *@n: the number
 *Return: nothing
 */

void print_su(unsigned short int n)
{
	if (n / 10)
		print_short(n / 10);
	_putchar(n % 10);
}

/**
  *print_id - prints integer or digits
  *@n: the number
  *Return: nothing
  */

void print_id(int n)
{
	if (n / 10)
		putchar(n / 10);
	_putchar(n % 10);
}

