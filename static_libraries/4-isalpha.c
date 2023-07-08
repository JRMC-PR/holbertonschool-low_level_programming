#include <stdio.h>
#include <ctype.h>
#include "main.h"
void print_alphabet_x10(void);
/**
 *_isalpha- Execute function
 *Return: 1 if apha 0 if other
 *@c: holds an int
 */
int _isalpha(int c)
{
	c = isalpha(c);
	if (c != 0)
		return (1);
	else
		return (0);
}
