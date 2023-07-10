#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **create_array- create an array of chars
 *@size: holds an int
 *@c: holds a char
 *Return: Null or 0
 */
char *create_array(unsigned int size, char c)
{
	/*Variables*/
	unsigned int i;
	char *mang;
/*if no size return NULL*/
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		/*allocate the space in memmory*/
		mang = malloc(size * sizeof(*mang));
		i = 0;
		while (i < size)
		{
			mang[i] = c;
			i++;
		} /*end while*/
	} /*end if else*/
	return (mang);
} /*end function*/
