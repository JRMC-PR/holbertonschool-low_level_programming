#include <stdio.h>
#include "main.h"
/**
 *reverse_array- executes fucntion
 *@a: points to an int array
 *@n: hols an int (size)
 */
void reverse_array(int *a, int n)
{
	/*Variables*/
	int f = 0, temp;
	/*Reverse loop*/
	for (; f < n-- ; f++)
	{
		/*switcht positions*/
		temp = a[n];
		a[n] = a[f];
		a[f] = temp;
	} /*end for*/
} /*end reverse_array*/
