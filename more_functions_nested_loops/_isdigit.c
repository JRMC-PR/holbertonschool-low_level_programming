#include <stdio.h>
#include "main.h"
/**
 *_isdigit- executed the function
 *Return: 1 if true 0 if not
 *@c: holds an int
 *
 */
int _isdigit(int c)
{
	if ( c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
