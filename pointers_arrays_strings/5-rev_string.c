#include <stdio.h>
#include "main.h"
/**
 *rev_string- Execute function
 *@s: holds a char
 *
 */
void rev_string(char *s)
{
	/*Variables*/
	int i = 0, j;
	char t;

	while (s[i] != '\0')
	{
		i++;
	} /*end while*/
	for (j = 0; j < i-- ; j++)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	} /*end for*/
} /*End function*/
