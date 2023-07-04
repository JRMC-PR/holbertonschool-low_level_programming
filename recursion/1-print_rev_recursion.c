#include <stdio.h>
#include "main.h"
/**
 *_print_rev_recursion- executes function
 *@s: points to a string
 *Return: exit function
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	} /*end if else*/
} /*end function*/
