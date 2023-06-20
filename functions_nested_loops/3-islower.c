#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *int _islower(int c)-  Execute code 
 *Return: 1 lower 0 if upper
 *@c
 */
int _islower(int c)
{
	c = islower(c);
	if (c != 0)
		/*Indicates lower case*/
		return (1);
	else
		/*Indicates upper case*/
		return (0);
}
