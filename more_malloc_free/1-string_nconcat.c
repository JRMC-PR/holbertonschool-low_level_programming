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
	unsigned int s1L, s2L,  i, j;
	char *concat;
	/*validate s1 & s2 content*/
	if (s1 == NULL)
		s1L = 0;
	else
		s1L = strlen(s1);
	if (s2 == NULL)
		s2L = 0;
	else
		s2L = strlen(s2);
	/*compare n to s2*/
	if (n >= s2L)
	{
		n = s2L;
	}
		/*allocate acoordingly*/
	concat = malloc((s1L + n + 1) * sizeof(char));
	/*Validate allocation*/
	if (concat == NULL)
	{
		return (NULL);
	}
	/*concat data*/
	for (i = 0; i < s1L; i++)
		concat[i] = s1[i];
	for (j = 0; j < n ; j++)
		concat[s1L + j] = s2[j];
	/*add nullbyte*/
	concat[s1L + j] = '\0';
	return (concat);
} /*end function*/
