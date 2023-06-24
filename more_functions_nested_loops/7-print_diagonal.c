#include <stdio.h>
#include "main.h"
/**
 *print_diagonal- execute function
 *@n: recives and int
 *
 */
void print_diagonal(int n)
{
	int i,j;

	for (i = 1; i < n; i++)
	{
		if ( n == 0)
			_putchar('\n');

		for (j=1; j <=n; j++)
		{
			if (j == i)
				_putchar('\\');
			else if (j < i)
				_putchar(' ');
		}
		_putchar('\n');

	}

}
