#include <stdio.h>
#include "main.h"
#include <stdbool.h>
/**
 **cap_string- execute cap function
 **word_start- execute bool function
 *@str: points to a char string
 *@curr: points to the current position in the array
 *@prev:points to the prev location in the array
 *Return: in cap the string, in bool the result
 */
char *cap_string(char *str)
{
	/*Variables*/
	int size = 0, i = 0;
	/*While calculates the size of the array*/
	while (str[size])
		size++;
	/*for loop moves inside the array and veryfies*/
	for (i = 1; i < size; i++) /*off by one */
	{
		/*Bool function call inside the if*/
		if (word_start(str[i], str[i - 1]) == true)
		{
			/*Validate if the current is not alredy upper*/
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				continue;
			}
			else
			{
				str[i] -= 32; /*Change to upper*/
			} /*end if else*/
		} /*end outer if*/
	} /*end for*/
	return (str);
} /*end cap_string*/

bool word_start( char *curr, char *prev)
{
	static bool result;
	/*Check if the current char is the start of a word*/
	if (*curr != ' ' && *prev == ' ')
	{
		result = true;
	}
	else
	{
		result = false;
	}
	return (result); /*Return if true or flase*/
}
