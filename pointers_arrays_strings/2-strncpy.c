#include <stdio.h>
#include "main.h"
/**
 **_strncpy- Execute function
 *@dest: Points to a cahr
 *@src: Points to a cahr
 *@n: recives an int
 *Return: a pointer to an array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size = 0 , j = 0;

	while(dest[size])
	{
		size++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	for(; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
