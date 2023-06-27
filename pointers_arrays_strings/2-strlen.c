#include <stdio.h>
#include "main.h"
/**
 *_strlen- Execute function
 *@s: holds a char
 *Return: the size of the array
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	   ;
	return (i);
}
