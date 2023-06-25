#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i < size + 1; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		k = 0;
		while(k <= size -i)
		{
			_putcha(' ');
			k++;
		}
		_putchar(35);
		_putchar('\n');
	}
} /*end function*/
