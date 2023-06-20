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

	for (i = 48; i <= 57 ; i++)
	{
		putchar(i);

		if (i != 57)
			putchar(b);

		putchar(' ');
	}

	return (0);
}
