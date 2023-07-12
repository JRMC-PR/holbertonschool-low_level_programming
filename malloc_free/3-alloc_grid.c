#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 ***alloc_grid- Returns a pointer to a 2D array
 *@width: holds an int value
 *@height: holds an int value
 *Return: Null or the pointer to malloc 
 */
int **alloc_grid(int width, int height)
{
	/*Variables*/
	int i = 0;
	int **grid;
	/*Validae the correct arguments Return NULL if incorrect */
	if (width <= 0 || height <= 0)
		return (NULL);
	/*allocatin memory for each row(height)*/
	grid = malloc(height * sizeof(int *));
	/*Validate de memory allocation*/
	if (grid == NULL)
		free(grid);
		return (NULL);
	/*allocate space for the colums(width)*/
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int *));
		/*verify allocation*/
		if (grid[i] == NULL)
			free(grid);
			return (NULL);
	} /*end for*/
	return (grid);
} /*end function*/
