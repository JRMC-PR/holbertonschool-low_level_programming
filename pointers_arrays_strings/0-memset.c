#include <stdio.h>
#include "main.h"
/**
 **_memset- Execure function
 *@s:points to a string
 *@b: holds a char
 *@n: holds an int
 *Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/*Variables*/
	unsigned int i = 0;
	/*loops move acording to n size*/
	for (i = 0; i < n ; i++)
	{
		/*swaps value*/
		s[i] = b;
	} /*end for*/
	return (s);
} /*end function*/
