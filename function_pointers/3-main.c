#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main- test the other function we created and return the result
 *@argc: holds argument count
 *@argv: an array of pointers
 *Return: the operation
 */
int main(int argc, char *argv[])
{
	/*Variables*/
	int n1, n2;
	int (*result)(int, int);
	/*Verify argc size*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	} /*end if*/
	/*turn chars into ints*/
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	/*Verify if the operator mathces*/
	if (get_op_func(argv[2])  == NULL)
	{
		printf("Error\n");
		exit(99);
	} /*end if*/
	/*Verify divitio between 0*/
	if ((atoi(argv[2]) == atoi("/") || atoi(argv[2]) == atoi("%")) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	} /*End if*/
	result = get_op_func(argv[2]);
	return (printf("%d\n", result(n1, n2)));
} /*end function*/
