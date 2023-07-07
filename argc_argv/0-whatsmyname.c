#include <stdio.h>
#include "main.h"
/**
 *main- main function
 *@argc: argument count for terminal input
 *@argv: pointer to string pointer array
 *Return: o if succesfull
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argc - 1);
	return (0);
} /*end main fucntion*/
