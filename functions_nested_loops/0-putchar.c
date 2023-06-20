#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *main- Execute the code in between {}
 *Return: 0 if succesful
 *
 *
 */

/*Function signature*/

int main(void)
{

	int i, lnt;
	char string[] = "_putchar";

	lnt = sizeof(string);

	for (i = 0; i < lnt-1 ; i++)
		_putchar(string[i]);

	_putchar('\n');


	return (0);
}

