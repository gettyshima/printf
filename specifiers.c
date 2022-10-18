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
