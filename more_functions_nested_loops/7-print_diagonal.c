#include <stdio.h>
#include "main.h"
/**
 *print_diagonal- execute function
 *@n: recives and int
 *
 */
void print_diagonal(int n)
{
	/*Variables*/
	int j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j < n + 1; j++)
		{
			_putchar('\\');
			_putchar('\n');
			k = 0;
			if (j != n)
			{
				while (k < j)
				{
					_putchar(' ');
					k++;
				} /*end nested  while*/
			}/*en if */
		} /*end  for*/
	} /*end if else*/
} /*end function*/
