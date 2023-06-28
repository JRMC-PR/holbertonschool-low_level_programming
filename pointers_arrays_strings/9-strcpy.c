#include <stdio.h>
#include "main.h"
/**
 **_strcpy- Executes function
 *@dest: points to a char location
 *@src: points to a char location
 *Return: return the destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;
	while (src[i])
	{
		i++;
	} /*end while*/
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	} /*end for*/
	return (dest);
}
