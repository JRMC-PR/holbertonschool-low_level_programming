#include <stdio.h>
#include "main.h"
/**
 *_sqrt_recursion- Execute function
 *@n: hold an int
 *Return: return 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	} /*end if else */
	return (_sqrt_helper(0, n));
} /*end function*/

/**
 *_sqrt_helper- executes helper function
 *@sq: holds an int
 *@n: holds an int
 *Return: recursive or result
 */
int _sqrt_helper(int sq, int n)
{
	if (sq * sq < n)
	{
		return (_sqrt_helper(sq + 1, n));
	}
	else if (sq * sq > n)
	{
		return (-1);
	}
	return (sq);
} /*end helper function*/





