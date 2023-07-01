#include <stdio.h>
#include "main.h"
/**
 **_strchr- Executes function
 *@s: points to a char
 *@c: holds a char value
 *Return: pointer to string or null depending on the if
 */
char *_strchr(char *s, char c)
{
do
{
	/*evaluates the valueof s  at a certain position*/
	if (*s == c)
	{
		return (s);
	}
}while (*s++);
 return (NULL);
} /*end function*/
