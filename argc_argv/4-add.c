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
	int i = 0, sum = 0, digit_count = 0;
	/*check if is a number*/
	for (i = 1; i < argc; i++)
	{
		/*sum the digits*/
		if (isdigit(*argv[i]))
		{
			sum += strtol(argv[i], NULL, 10);
			digit_count++;
		}
		else /*if not # print error*/
		{
			printf("Error\n");
			return (1);
		} /*end if else*/
	} /*end for*/
	/*if no # is found print 0*/
		if (digit_count == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", sum);
		} /*end if else*/
	return (0);
} /*End main function*/
