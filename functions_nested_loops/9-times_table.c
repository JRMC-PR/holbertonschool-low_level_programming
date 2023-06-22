#include <stdio.h>
#include "main.h"
/**
 *times_table- execute function
 *
 *
 */
void times_table(void)
{
	int r, c, F, L;

	for (r = 0 ; r < 10 ; r++)
	{
		for (c = 0 ; c < 10 ; c++)
		{
			if ((r * c) < 10)
			{
				_putchar((r * c) + '0');
			}
			else
			{
				F = (r * c) / 10;
				L = (r * c) % 10;
				_putchar(F + '0');
				_putchar(L + '0');

			}
			if (c < 9)
			{
				_putchar(44);
				_putchar(' ');
			}

			if ((r * c) < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
