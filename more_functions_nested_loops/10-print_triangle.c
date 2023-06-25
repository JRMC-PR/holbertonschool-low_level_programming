#include <stdio.h>
#include "main.h"
/**
 *print_triangle- execute the function
 *@size: honls an int
 *
 */
void print_triangle(int size)
{
	int i, k;

	for (i = 1; i < size + 1; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		k = 0;
		while(k <= size -i)
		{
			_putchar(' ');
			k++;
		}
		_putchar(35);
		_putchar('\n');
	}/*end for*/
} /*end function*/
