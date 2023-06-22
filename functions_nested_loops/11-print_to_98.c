#include <stdio.h>
#include "main.h"
/**
 *print_to_98- execute function
 *@n: holds an int
 *
 */
void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n ; i < 99 ; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);

		}
		putchar('\n');
	}
	else
	{
			for (i = n ; i > 97 ; i--)
			{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
			}
			putchar('\n');
	}
}
