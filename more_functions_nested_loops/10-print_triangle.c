#include <stdio.h>
#include "main.h"
/**
 *print_triangle- execute the function
 *@size: honls an int
 */
void print_triangle(int size)
{
	/*Declarations*/
	int i, k;
	/*Check if size if less than 0*/
	if (size <= 0)
	{
		_putchar('\n');
	}
	else /*create the triangle */
	{
		for (i = 1; i <= size ; i++)
		{
			k = 0;
			while (k < size - i)
			{
				_putchar(' ');
				k++;
			}
			while (k != size)
			{
				_putchar(35);
				k++;
			} /*fill the rest of the line with #*/
			_putchar('\n');
		} /*end outter for*/
	} /*end if else*/
} /*end function*/
