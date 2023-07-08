#include <stdio.h>
#include "main.h"
/**
 *_strspn- execute function
 *@s: points to a string
 *@accept: points to a string
 *Return: count result
 */
unsigned int _strspn(char *s, char *accept)
{
	/*Variables*/
	unsigned int count = 0;
	/*search for simillarities in the strings*/
	do {
		do {
			if (*accept == *s)
			{
				count++;
			} /*end if*/
		} while (*s++);
	} while (*accept++);
	return (count);
} /*end function*/


