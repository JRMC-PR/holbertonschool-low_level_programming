#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	las_digit= n % 10;

	if ( n > 5)
	pritnf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if ( n == 0)
	pritnf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (n < 6 && n != 0 )
	pritnf("Last digit of %d is %d and is less ", n, last-digit);

	return (0);
}
