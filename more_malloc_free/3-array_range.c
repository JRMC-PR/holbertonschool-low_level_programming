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
	pArray = malloc((max - min) * sizeof(int) + 1);
	if (pArray == NULL)
	{
		free(pArray);
		return (NULL);
	}
	/*fill array*/
	i = min;
	j = 0;
	while (i <= max)
	{
		pArray[j] = i;
		i++;
		j++;
	} /*end while*/
	return (pArray);
} /*end fucntion*/
