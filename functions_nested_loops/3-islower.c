#include <stdio.h>
#include "main.h"
/**
 *int _islower(int c);
 *
 *
 */
int _islower(int c)
{
	c = islower(c);
	if ( c == 2)
		return (1);
	else
		return (0);
}
