#include <stdio.h>
#include "main.h"
/**
 *more_numbers - Execute function
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		} /*end inner for*/
		_putchar('\n');
	} /*end outter for*/
} /*end function*/
