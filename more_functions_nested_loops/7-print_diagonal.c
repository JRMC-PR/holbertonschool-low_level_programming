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
	int i,j,k;

	for (i = 1; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		for (j = 0 ;j < i; j++)
		{
			_putchar('\\');
			_putchar('\n');
			k = 0;
			if (j >= 1)
			{
				while(k < i)
				{
					_putchar(' ');
				}/*end while*/
			}/*end if*/
		}/*end nested for*/
	}/*end outer for*/
}/*end function*/
