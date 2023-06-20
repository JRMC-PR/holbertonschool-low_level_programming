#include <stdio.h>
/**
 *
 *
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
		putchar(b'\t');
	}

	return (0);
}
