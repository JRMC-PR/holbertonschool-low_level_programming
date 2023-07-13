#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 **malloc_checked- allocated memmory using malloc
 *@b: holds an int
 *Return: the pointer to the new malloc
 */
void *malloc_checked(unsigned int b)
{
	/*variablesa*/
	char *p;
	/*allocate memory*/
	p = malloc(b);
	/*check if allocation failed*/
	/*if success return *p*/
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	else
	{
		return (p);
	}
}
