#include <stdio.h>
#include "main.h"
/**
 *main- executes function
 *@argc: element count for array
 *@argv: a pointer array
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	/*variables*/
	int i = 0;
	/*move tough the pointer array for printing*/
	for (i = 0; i < argc; i++)
	{
		/*print whats stored in i position of array*/
		printf("%s\n", argv[i]);
	} /*end for*/
	return (0);
} /*end function*/
