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
	int j,k;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
		for (j = 1 ;j < n; j++)
		{
			_putchar('\\');
			_putchar('\n');
			k = 0;
			while(k < j)
			{
				_putchar(' ');
				k++;
			}/*end nested  while*/
		}/*end  for*/
		}/*end if else*/
}/*end function*/
