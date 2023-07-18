#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 *int_index- returns a pointer to the index
 *@array: points to a char array
 *@size: holds an int value
 *@cmp: points to a function
 *Return: index or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/*Variables*/
	int i;
	/*check size*/
	if (size <= 0)
		return (-1);
	/*Verify pointer content*/
	if (array != NULL && cmp != NULL)
	{
		/*Verify array content*/
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		} /*end for*/
	} /*end if*/
	return (0);
} /*end function*/
