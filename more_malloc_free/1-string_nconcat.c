#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 **string_nconcat- concat 2 * into a new malloc
 *@s1: points to a stirng
 *@s2: points to a string
 *@n: holds an unsigned int value
 *Return: the pointer to the new memmory allocation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*Variables*/
	char *concat;
	/*validate s1 & s2 content*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compare n to s2*/
	if (n >= sizeof(s2))
	{
		/*allocate acoordingly*/
		concat = malloc(sizeof(s1) + sizeof(s2) + 1);
	}
	else
	{
		/*allocate memmory*/
		concat = malloc(sizeof(s1) + n + 1);
	} /*end if else*/
	/*Validate allocation*/
	if (concat == NULL)
		return (NULL);
	/*concat data*/
	memcpy(concat,s1,sizeof(s1));
	memcpy(concat + sizeof(s1),s2,n);
	/*add nullbyte*/
	concat[sizeof(concat) + 1] = '\0';
	return (concat);
} /*end function*/
