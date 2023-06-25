#include <stdio.h>
#include "main.h"
/**
 *print_diagonal- execute function
 *@n: recives and int
 *
 */
void print_diagonal(int n)
{
	int i,j,k = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n ; j++)
		{
			if (n == 0)
			{
				_putchar('\n');
			}
			else
			{
				if (j == 1)
				{
					_putchar('\\');
				}
				else
				{
					while (k < j)
					{
						_putchar(' ');
						k++;
					}
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
		_putchar('\n');
	}
}
