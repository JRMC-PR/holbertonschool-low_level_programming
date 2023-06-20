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

	b = 44;

	for (i = 48; i < 58 ; i++)
	{
		putchar(i);
		putchar(b);
		putchar(' ');
	}
		putchar('\b');
	return (0);
}
