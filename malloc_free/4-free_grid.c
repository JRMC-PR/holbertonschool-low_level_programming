#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *free_grid- free allocated memory
 *@grid: pointer to a pointer
 *@height: holds an int
 */
void free_grid(int **grid, int height)
{
	/*variables*/
	int i = 0, j = 0;
	/*free allocated memory*/
	for (i = 0; i < height; i++)
	{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			} /*end inner for*/
			free(grid);
	} /*end for*/
} /*end function*/
