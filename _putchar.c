#include "main.h"
#include <unistd.h>
/**
 * _putchar- prints a character to stdout
 * @c: char to be printed
 * Return: returns the number of bytes printed
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
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
	register int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

