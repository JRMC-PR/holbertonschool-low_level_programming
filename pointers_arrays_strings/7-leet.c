#include <stdio.h>
#include "main.h"
/**
 **leet- function name
 *@str: points to a string
 *Return: str pointer
 */
char *leet(char *str)
{
	/*Variables*/
	int i = 0, j  = 0, half;
	char checkers[10] = { 'A', 'a', 'E', 'e', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};
	/*Loops will handle the movement of the array*/
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == checkers[j])
			{
				half = j / 2;
				str[i] = num[half];
			} /*end if*/
		} /*end inner for*/
	} /*end outer for*/
	/*add null at the end*/
	str[i + 1] = '\0';
	return (str);
} /*end function*/
