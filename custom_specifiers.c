#include "main.h"

/**
  *printS - prints strings non-printable charactr hex
  *@list: the arg
  *Return: the lenght
  */

int printS(va_list list)
{
	unsigned int i;
	char *string;
	char *str = va_arg(list, char *);
	int count = 0;

	if (str == NULL)
		return (_puts("(null)"));
	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0  && (str[i] < 32 || str[i] >= 127))
		{
			string = convert(str[i], 16, 0);
			_puts("\\x");
			count = count + 2;
			if (!string[1])
				return (_putchar('0'));
			count += _puts(string);
		}
		else
		{
			count += _putchar(str[i]);
		}
	}
	return (count);
}

/**
  *printp - prints address
  *@list: the arg
  *Return: the lenght
  */

int printp(va_list list)
{
	int count = 0;
	char *string;
	unsigned long int x = va_arg(list, unsigned long int);

	string = convert(x, 16, 1);
	if (string == NULL)
		return (_puts("(nil)"));
	count += _puts("0x");
	count += _puts(string);
	return (count);
}

/**
  *printr - prints string in reverse
  *@list: the arg
  *Return: the lenght
  */

int printr(va_list list)
{
	int j;
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";
	for (j = _strlen(str) - 1; j >= 0; j--)
		_putchar(str[j]);
	return (_strlen(str));
}

/**
  *printR - prints a string using rot13
  *@list: the arg
  *Return: the length
  */

int printR(va_list list)
{
	int i, j;
	char rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(list, char *);

	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot[i])
					_putchar(ROT[i]);
			}
		}
	}
	return (_strlen(s));
}
