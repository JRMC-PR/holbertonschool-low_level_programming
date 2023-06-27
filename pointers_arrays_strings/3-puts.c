#include <stdio.h>
#include "main.h"
/**
 *_puts- Executes function
 *@str: hol a string
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i] + '0');
	}
}
