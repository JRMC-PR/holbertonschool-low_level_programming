#include <stdio.h>
#include "main.h"
/**
 **_strcat- Executes funtion
 *@dest: Points to a char
 *@src: Points to a char
 *Return: returns dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int size = 0, j;

	while (size < src[size])
	{
		size++;
	}
	for (j = 0; size < size - 1 && src[j] != '\0'; j++)
	dest[size + 1] = src[size];

	dest[size + 1] = '\0';
	return (dest);
}

