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
	char string[] = " _putchar" ;

	lnt = strlen(string);
	
	for (i = 0; i < lnt ; i++)
		_putchar(string[i]);


	return (0);
}

/*Functions Sections*/
int _putchar(char c)
{

	return (write(1, &c, 1));
}

