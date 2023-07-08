#include <stdio.h>
#include "main.h"
/**
 **_strpbrk- execute function
 *@s: points to a char
 *@accept: points to a char
 *Return: pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	/*Variables*/
	int i = 0, j = 0, count = 0;
	/*Loops for moving inside the strings*/
	for (i = 0; *s; i++, s++)
	{
		for (j = 0; accept[j]; j++)
		{
			/*Verify equiality*/
			if (*s == accept[j])
			{
				count++;
				return (s);
			}
		} /*end inner for*/
	} /*end outer for*/
	if (count == 0)
		return (0);
return (0);
} /*end function*/
