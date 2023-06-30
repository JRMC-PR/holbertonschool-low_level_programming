#include <stdio.h>
#include "main.h"
/**
 *_strcmp- Executes function
 *@s1: points to a char
 *@s2: points to a char
 *Return: -1, 0, 1, respectveliy
 */
int _strcmp(char *s1, char *s2)
{
	/*Variables*/
	int size1 = 0, size2 = 0;

	/*first array*/
	while (s1[size1])
		size1++;
	/*second array*/
	while (s2[size2])
		size2++;
	/*compare sizes and print arrays*/
	if (size1 == size2)
		return (0);
	else if (size1 > size2)
		return (-1);
	else
		return (1);
} /*end function scope*/
