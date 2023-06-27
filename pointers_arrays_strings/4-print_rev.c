#include <stdio.h>
#include "main.h"
/**
 *print_rev- Execute function
 *@s: recives a char
 *
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i])
	{
		i++;
	}
	for (j = i; j >= 0; --j)
	{
		if (s[j] != '\0')
		{
			_putchar(s[j]);
		}
		else
		{
			continue;

		}
	}
	_putchar('\n');
}
