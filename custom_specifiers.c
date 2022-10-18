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
	int a;
	char *str = va_arg(list, char *);

	if (str == NULL)
		return (_puts("(null)"));
	for (a = 0; str[a]; a++)
	{
		if (str[i] > 0  && (str[i] < 32 || str[i] >= 127))
		{
			string = convert(str[i], 16, 0);
			_puts("\\x");
			count = count + 2;
			if (!string[1])
				_putchar('0');
			count++;
			count += _puts(string);
		}
		else
		{
			_putchar(str[i]);
			count++;
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
	unsigned long int x = va_arg(list, unsigned long int);
	int count;

	string = convert(x, 16, 0);
	count = _puts("0x");
	count =_puts(string);
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
	char *str = va_arg(l, char *);

	for (j = 0; str[j]; j++)
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
	return (_strlen(str));
}

