#include <stdio.h>
#include "main.h"
/**
 **_memcpy- Executes function
 *@dest: points to a char
 *@src: points to a char
 *@n: holds an int
 *Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*Variables*/
	unsigned int i = 0;
	/*Loops to move inside arrays*/
	for (i = 0; i < n; i++)
	{
		/*swap values*/
		dest[i] = src[i];
	} /*end for*/
	return (dest);
} /*end function*/
