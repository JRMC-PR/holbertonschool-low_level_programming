#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *print_sign- evaluate the function
 *@n: stores number value to bess passed
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		printf("%d", n);
	}
	else
	{
		return (1);
		putchar(45);
	}
}
