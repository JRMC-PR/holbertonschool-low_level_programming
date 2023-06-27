#include <stdio.h>
#include "main.h"
/**
 *puts2- Executes function
 *@str:
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if (str[i] == '\0')
			continue;
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}
