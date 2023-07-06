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
	/*check if is a number*/
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
		}
		/*sum the digits*/
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else /*if not # print error*/
		{
			printf("Error\n");
			return (1);
		} /*end if else*/
	} /*end for*/
	/*if no # is found print 0*/
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			printf("%d\n", sum);
		} /*end if else*/
	return (0);
} /*End main function*/
