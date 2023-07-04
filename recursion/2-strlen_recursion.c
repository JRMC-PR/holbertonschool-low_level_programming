#include <stdio.h>
#include "main.h"
/**
 *int_strlen_recursion- Executes function
 *@s: points to a char
 *Return
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1 ));
} /*end function*/
