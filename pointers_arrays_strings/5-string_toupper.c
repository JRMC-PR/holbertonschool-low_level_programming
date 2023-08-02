#include <stdio.h>
#include "main.h"
/**
 **string_toupper- executes function
 *@a: points to an cahr
 *Return: 0
 *
 */
char *string_toupper(char *a)
{
	/*Variables*/
	int size = 0, i = 0;
	/**/
	while (a[size])
		size++;
	for (i = 0; i < size ; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
	return (a);
}
