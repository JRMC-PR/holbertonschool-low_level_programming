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
	/*Variables*/
	int i = 0;
	/*loop handles comparisons*/
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	} /*end for*/
	return (NULL);
} /*end function*/
