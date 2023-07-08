#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_islower-  Execute code
 *Return: 1 lower 0 if upper
 *@c: recives an int
 */
int _islower(int c)
{
	c = islower(c);
	if (c != 0)
		return (1);		/*indicates lower*/
	else
		return (0);		/*indicates upper*/
}
