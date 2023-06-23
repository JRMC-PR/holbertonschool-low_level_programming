#include <stdio.h>
#include "main.h"
/*
 *more_numbers- Execute function
 *
 *
 */
void more_numbers(void)
{
	int i, j, last_dig, first_dig;

	for (j = 0; j < 11; j++)
	{
		for (i = 0; i < 15; i++)
		{
			last_dig = (i % 10);
			first_dig = (i / 10);

			if (!last_dig)
			{
				_putchar(first_dig + '0');
			}
			_putchar(last_dig + '0');
		}

		_putchar('\n');
	}
}
