#include "main.h"

/**
  *_printf - prints standard output
  *@format: the character string
  *
  *Return: the number of characters printed
  */

int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, i;
	int (*ptr)(va_list);

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			if (format[i] == '%')
			{
				count += _putchar('%');
				continue;
			}
			ptr = match(format[i]);
			if (ptr == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
			else
				count += ptr(list);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(list);
	return (count);
}
