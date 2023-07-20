#include "3-calc.h"
#include <string.h>
#include <stdio.h>
/**
 **get_op_func- get the correct function to be executed
 *@s: points to a char
 *Return: NULL or function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	/*Variables*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	/*give value to i for counting*/
	i = 0;
	/*Move accross the ops struc*/
	while (i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		} /*end if*/
		i++;
	} /*end while*/
	return (NULL);
} /*end function*/

