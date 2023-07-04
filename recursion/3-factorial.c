#include <stdio.h>
#include "main.h"
/**
 *factorial- execute fucntion
 *@n: holds an int
 *Return: factorial
 */
int factorial(int n)
{
	if ( n == 0 || n == 1 )
	{
		return (1);
	}
	else if ( n < 0)
	{
		/*if nukmber is negative*/
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	} /*end if else if*/

} /*end function*/
