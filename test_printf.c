#include "main.h"
#include <stdlib.h>
/**
 * match- to match the characters with the right function
 * @c: character that determines the function to use
 * @va_list: variable list name
 * Return: no return type
 */
int (*match(char c))(va_list)
{
	specifiers arr[] = {
		{'c', print_c},
		{'s', print_s},
		{'S', printS},
		{'p', printp},
		{'r', printr},
		{'R', printR},
		{'X', print_X},
		{'x', print_x},
		{'o', print_o},
		{'u', print_u},
		{'b', print_b},
		{'d', print_d},
		{'i', print_i},
	};
	int i;

	for (i = 0; i < 13; i++)
	{
		if (c == arr[i].c)
		{
			arr[i].ptr;
		}
	}
	return (arr[i].ptr);
}


