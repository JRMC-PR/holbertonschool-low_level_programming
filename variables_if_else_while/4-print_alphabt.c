#include <stdio.h>
/**
 *main- Execute
 *Return: 0 if success
 *
 *
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a != 'q' && a != 'e')
		putchar(a);

	}

	putchar('\n');

	return (0);
}


