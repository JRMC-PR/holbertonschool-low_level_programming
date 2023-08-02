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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < size + 1; i++)
		{
			k = 0;
			while(k <= size -i)
			{
				_putchar(' ');
				k++;
			}
			while(
			_putchar(35);
			_putchar('\n');
		}
	}/*end if else*/
} /*end function*/
