#include "main.h"
#include <unistd.h>
/**
 * _putchar- prints a character to stdout
 * @c: char to be printed
 * Return: returns the number of bytes printed
 */
int _putchar(char c)
{
	static char buffer[1024];
	static int i = 0;

	if (i < 1024)
	{
		buffer[i] = c;
		i++;
	}
	return (write(1, &buffer, i);
}
/**
 * _strlen- to know the length of a string
 * @s: string to know
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _puts- to print a string to stdout
 * @s: string to print
 * Return: returns the number of bytes printed
 */
int _puts(char *s)
{
	return (write(1, s, _strlen(s)));
}

