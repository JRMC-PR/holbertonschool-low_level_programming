#include <stdio.h>
#include "main.h"
/**
 *_pow_recursion- execute function
 *@x: holds an int
 *@y:holds an int
 *Return: 0, -1  or recursive function
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if ( y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	} /*end if else*/
} /*end fucntion*/

