#include <stdio.h>
#inlcude <unistd.h>
/**
 *main- Execute the code in between {}
 *Return: 0 if succesful
 *
 *
 */

/*Function signature*/
int _putchar(char c);

int main(void)
{
	char string[] = "_putchar";

	_putchar(string);

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

