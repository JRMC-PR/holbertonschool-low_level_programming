#include <stdio.h>
#include "main.h"
/**
 *main- main function
 *@argc: argument count for terminal input
 *@argv: pointer to string pointer array
 *Return: o if succesfull
 */
int main(int argc, char * argv[])
{
	/*variables*/
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("My name is: %s\n", argv[0]);
	}
	return (0);
} /*end main fucntion*/
