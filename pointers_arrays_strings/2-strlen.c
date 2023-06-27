#include <stdio.h>
#include "main.h"
/**
 *_strlen- Execute function
 *@s: holds a char
 *Return: 0 if success
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	   ;
	return (i);	
}
