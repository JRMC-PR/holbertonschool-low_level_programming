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
	unsigned int s1L, i, j;
	char *concat;
	/*validate s1 & s2 content*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Get sizes fro s1 & s2*/
	s1L = strlen(s1);
	/*compare n to s2*/
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
		/*allocate acoordingly*/
		concat = malloc(s1L + n + 1);
	/*Validate allocation*/
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	/*concat data*/
	for (i = 0; i < s1L; i++)
		concat[i] = s1[i];
	for (j = 0; j < n ; j++)
		concat[i++] = s2[j];
	/*add nullbyte*/
	concat[strlen(concat) + 1] = '\0';
	return (concat);
} /*end function*/
