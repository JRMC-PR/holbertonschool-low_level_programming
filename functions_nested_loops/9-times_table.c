#include <stdio.h>
#include "main.h"
/**
 *times_table- execute function
 *
 *
 */
void times_table(void)
{
	int r, c;

	for (r = 0 ; r < 10 ; r++)
	{
		for (c = 0 ; c < 10 ; c++)
		{
			if ((r * c) >= 10)
			{
				_putchar((r * c) / 10 + '0');
				_putchar((r * c) % 10 + '0');
				_putchar(44);
				_putchar(' ');
			}else 
			{
				_putchar((r * c) + '0');
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
			}

			_putchar('\n');
			
			
		}
	}
}
