#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *jack_bauer- Execute function
 *
 */
void jack_bauer(void)
{
	int h, m, F, L, Fm, Lm;
	 for (h = 0 ; h < 24 : h++)
	 {
		 for (m = 0 ; m < 60 ; m++)
		 {
			 F = h / 10;
			 L = h % 10;
			 Fm = m / 10;
			 Lm = m % 10;

			_putcahr(F + '0');
			_putcahr(L + '0');
			_putcahr(58);
			_putcahr(Fm + '0');
			_putcahr(lm + '0');
		 }
		 _putchar('\n');
	 }
}
