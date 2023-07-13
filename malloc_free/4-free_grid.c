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
	int i = 0;
	/*free allocated memory*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	} /*end for*/
	free(grid);
} /*end function*/
