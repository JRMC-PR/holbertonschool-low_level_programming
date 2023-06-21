#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *jack_bauer- Execute function
 *
 */
void jack_bauer(void)
{
	int h, m, F, L;


	for (h = 0 ; h < 24 ; h++)
	{

		F =  h / 10;
		L = h % 10;

		for (m = 0 ; m < 60 ; m++)
		{
			if (h < 10)
			{
				_putchar(48);
				_putchar(abs(h) + '0');
				_putchar(58);
				_putchar(48);
				if ( m < 10 )
				{
					_putchar(48);
					_putchar(abs(m) + '0');
				}
				else
				{
					F = m / 10;
					L = m % 10;
				_putchar(F + '0');
				_putchar(L + '0');
				}
			}
			else
			{
				_putchar(F +'0');
				_putchar(L + '0');
				_putchar(58);

			}
		}
	}
}
