#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 **_strdup- returns a pointer to a string copy
 *@str: points to a char
 *Return: null or pointer
 */

char *_strdup(char *str)
{
	/*Variables*/
	char *cpyStr, *first;
	/*Chek if str = NULL*/
	if (str == NULL)
		return (NULL);
	first = &str[0];
	/*allocate memory*/
	cpyStr = malloc(strlen(first) + 1);
	/*if malloc failed = NULL */
	if (cpyStr == NULL)
		return (NULL);
	/*duplicate str*/
	memcpy(cpyStr, str, strlen(first));
	/*Verify again for content*/
	if (cpyStr == NULL)
		return (NULL);
	else
		return (cpyStr);
} /*end fucntion*/
