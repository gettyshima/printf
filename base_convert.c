#include "main.h"

/**
  *convert - converts number to base
  *@num: the number
  *@base: the base
  *@choice: decide if it is upper or lowercase for hex
  *
  *Return: the converted string
  */

char *convert(unsigned long int num, int base, int choice)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (choice) ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}

/**
  *count_digit - counts digit
  *@n: the digit
  *Return: the number of digits
  */

int count_digit(int n)
{
	unsigned int d = 0, c;

	if (n < 0)
		c = n * -1;
	else
		c = n;
	do {
		c /= 10;
		++d;
	} while (c != 0);
	return (d);
}
