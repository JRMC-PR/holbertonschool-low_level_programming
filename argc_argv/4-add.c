#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 *main- adds positive numbers
 *@argc: holds element count
 *@argv: points to an array of pointers to strings
 *Return: 0, 1depending on the case
 */
int main(int argc, char *argv[])
{
	/*Variables*/
	int i = 0, j = 0, sum = 0;
	char *number;
	/*check if argc has > 1*/
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	/*Move on the arrays of vectors*/
	for (i = 1; i < argc; i++)
	{
		/*scan the thing pointed to by argv[i]*/
		number = argv[i];
		for (j = 0; number[j] != '\0'; j++)
		{
			if (!isdigit(number[j]))
			{
				printf("Error\n");
				return (1);
			}
		} /*end inner for*/
		/*sum the digits*/
		sum += atoi(argv[i]);
	} /*end outer for*/
	/*print the sum*/
	printf("%d\n", sum);
	return (0);
} /*End main function*/
