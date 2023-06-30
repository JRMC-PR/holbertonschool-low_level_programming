#include <stdio.h>
#include "main.h"
/**
 **cap_string- execute cap function
 **word_start- execute bool function
 *@str: points to a char string
 *Return: in cap the string, in bool the result
 */
char *cap_string(char *str)
{
	/*Variables*/
	int i = 0, j;
	char Separator[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?','"', '(', ')', '{', '}'};
	/*loops for moving along the data in the arrays*/
	for (;str[i] != '\0'; i++)
	{
		/*check if */
		if ( i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		for (j = 0; j < 13 ; j++)
		{
			if (str[i] == Separator[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			} /*end if else*/
		}
	} /*end for*/
	return (str);
} /*end cap_string*/
