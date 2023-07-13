#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 **string_nconcta- concat 2 * into a new malloc
 *@s1: points to a stirng
 *@s2: points to a string
 *@n: holds an unsigned int value
 *Return: the pointer to the new memmory allocation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*Variables*/
	unsigned int i, j;
	char *concat;
	/*validate s1 & s2 content*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compare n to s2*/
	if (n >= sizeof(s2))
	{
		/*allocate acoordigly*/
		concat = malloc(sizeof(s1) + sizeof(s2) + 1);
	}
	else
	{
		/*allocate memmory*/
		concat = malloc(sizeof(s1) + sizeof(n) + 1);
	} /*end if else*/
	/*Validate allocation*/
	if (concat == NULL)
		return (NULL);
	/*concat data*/
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
		concat[i++] = s2[j];
	/*add nullbyte*/
	concat[sizeof(concat) + 1] = '\0';
	return (concat);
} /*end function*/
