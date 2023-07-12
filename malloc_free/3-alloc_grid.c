#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 ***alloc_grid- Returns a pointer to a 2D array
 *@width holds an int value
 *@height: holds an int value
 */
int **alloc_grid(int width, int height)
{
	/*Variables*/
	int i = 0;
	int **grid;
	/*Validae the correct arguments
	 * Return NULL if incorrect */
	if (width <=0 || height <=0)
		return (NULL);
	/*allocatin memory for each row(height)*/
	grid = (int**)malloc(height * sizeof(int));
	/*Validate de memory allocation*/
	if (grid == NULL)
		return (NULL);
	/*allocate space for the colums(width)*/
	for (i = 0; i < height; i++)
	{
		grid[i] = (int*)malloc(width * sizeof(int));
		/*verify allocation*/
		if (grid[i] == NULL)
			return (NULL);
	} /*end for*/
	return (grid);
} /*end function*/
