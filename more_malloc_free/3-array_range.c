#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **array_range- creates an array of ints
 *@min: holds an int
 *@max: holds an int
 *Return:a pointer to the array
 */
int *array_range(int min, int max)
{
	/*Variables*/
	int i, j;
	int *pArray;
	/*Verify max > min*/
	if (min > max)
		return (NULL);
	/*allocation*/
	pArray = (int *)malloc(max * sizeof(int));
	if (pArray == NULL)
	{
		free(pArray);
		return (NULL);
	}
	/*fill array*/
	for (i = min, j = 0; i <= max; i++, j++)
	{
		pArray[j] = i;
	} /*end for*/
	return (pArray);
} /*end fucntion*/
