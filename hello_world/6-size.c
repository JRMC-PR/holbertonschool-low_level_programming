#include <stdio.h>
/**
 *main- EntryPoint
 *variables
 *printf statements
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int r;
	long long int w;
	float o;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(r));
	printf("Size of a long long int: %d byte(s)\n", sizeof(w));
	printf("Size of a float: %d byte(s)\n", sizeof(o));

	return (0);
}
