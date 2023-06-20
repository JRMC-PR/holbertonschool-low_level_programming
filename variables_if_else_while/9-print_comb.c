#include <stdio.h>
/**
 *main- execute
 *Return: 0 if successful
 *
 *
 */
int main(void)
{
	int i, b;

	/*ASCII value for ","*/
	b = 44;
	/*The for will print numbers 0-9 folloed by a coman and s space*/
	for (i = 48; i <= 57 ; i++)
	{
		putchar(i);

		if (i != 57)
			putchar(b);

		putchar(' ');
		putchar('\n');
	}

	return (0);
}
