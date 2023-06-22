#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */
void print_to_98(int n)
{
	int i;
	if (n < 98)
	{
		for (i = n ; i < 99 ; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);

		}
	}
	else 
	{
			for (i = n ; i > 99 ; i--)
			{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
			}
	}
}
