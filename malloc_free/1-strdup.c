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
	int i =  sizeof(str);
	char *cpyStr;
	/*Chek if str = NULL*/
	if (str == NULL)
		return (NULL);
	/*allocate memory*/
	cpyStr = malloc(i * sizeof(str));
	/*if memcopy = NULL */
	if (cpyStr == NULL)
		return (NULL);
	/*Copy the string*/
	 memcpy(cpyStr, str, i * sizeof(str));
	return (cpyStr);
} /*end fucntion*/
