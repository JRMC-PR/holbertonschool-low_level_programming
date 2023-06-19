#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main-Execute
 *Return: 0 is success
 *
 *
 *
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit= n % 10;

	if ( last_digit > 5)
	pritnf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if ( last_digit == 0)
	pritnf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (last_digit < 6 && last_digit != 0 )
	pritnf("Last digit of %d is %d and is less ", n, last-digit);

	return (0);
}
