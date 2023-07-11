#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 **str_concat- Concatenates 2 strings using malloc
 *@s1: points to a char location in memory
 *@s2: points to a char location in memory
 *Return: Null on failure or the concat pointer
 */
char *str_concat(char *s1, char *s2)
{
	/*Variables*/
	int i = 0, j = 0;
	char *pS;
	/*verify s2 for content*/
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	/*allocate new memory*/
	pS = malloc((strlen(s1) + strlen(s2) + 1));
	if (pS == NULL)
		return (NULL);
	/*concatenate the strings*/
	for (i = 0;  s1[i] != '\0'; i++)
		pS[i] = s1[i];
	for (j = 0;  s2[j] != '\0'; j++)
		pS[i++] = s2[j];
	pS[strlen(pS) + 1] = '\0';
	return (pS);
} /*end function*/
