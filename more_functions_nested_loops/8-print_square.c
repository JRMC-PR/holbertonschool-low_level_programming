#include <stdio.h>
#include "main.h"
/**
 *print_square- Execute function
 *@size: holds the size of the square
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			} /*end nested for*/
			_putchar('\n');
		} /*end outer for*/
	} /*end if else*/
} /*end function*/
