#include "main.h"

/**
 * print_i- prints integers
 * @list: variable argument list
 * Return: number of integers printed
 */
int print_i(va_list list)
{
	unsigned int m;
	int i = 0, k = 0, n = 0, count = 0;

	n = va_arg(list, int);
	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
			count += 1;
		}
		m = n;
		for (k = 0; (m / 10) > 0; k++)
			m /= 10;
		m = n;
		while (k != 0)
		{
			for (i = 0; i < k; i++)
				m /= 10;
			m %= 10;
			_putchar(m + '0');
			count++;
			k--;
			m = n;
		}
		_putchar(m % 10 + '0');
		count++;
	}
	else
	{
		return (-1);
	}
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
	if (s == NULL)
		s = "(null)";
	count = _puts(s);
	return (count);
}


