#include <stdio.h>
#include "main.h"
/**
 *puts_half- execute function
 *@str: pointer argument
 *
 */
void puts_half(char *str)
{
	int size = 0, i = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	if (size % 2 == 0)
	{
		for (i = size / 2; i <= size; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (size - 1) / 2; i <= size - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
} /*end function*/

