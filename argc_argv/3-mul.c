#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main- eecutes main function
 *@argc: holds element count
 *@atrgv: point to a pointer string
 *Return: 0 if successfull
 */
int main(int argc, char *argv[])
{
	/*Variables*/
	int i = 0, result = 1;
	/*Check if there is more ths 2 arguments*/
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for ( i = 1; i < argc; i++)
		{
			result *= strtol(argv[i], NULL, 10);
		}
		printf("%d\n", result);
	}
	return (0);
} /*end function main*/

