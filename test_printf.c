#include "main.h"
int (*match(const char c))(va_list)
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
		{NULL, NULL},
	};
	int i;

	for (i = 0; i < 13; i++)
	{
		if (c == arr[i].c)
		{
			return (arr[i].ptr);
		}
	}
	return (NULL);
}


