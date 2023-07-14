#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **_calloc- allocates space in memmory for a 2D array
 *@nmemb:olas an unInt
 *@size;holds an unInt
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*Variables*/
	unsigned int *p;
	unsigned int i;
	/*Veryfi content*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*allocate memory*/
	p = malloc(nmemb * sizeof(size));
	/*Verify allocation*/
	if (p == NULL)
	{
		free(p);
		return (NULL);
	} /*end verification*/
	/*set memory to 0*/
	memset(p, 0, nmemb * sizeof(size));
	return (p);
} /*end fucntion*/
