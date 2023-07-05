#include <stdio.h>
#include "main.h"
/**
 *is_prime_number- Excutes function
 *@n: holds an int value
 *Return: true of false
 */
int is_prime_number(int n)
{
	/*Variables*/
	int div = 2;
	/*Base case*/
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	return (is_div_by(n, div + 1));
} /*End function*/

/**
 *is_div_by - executes helper function
 *@n:holds an int
 *@div: holds an int
 *Return: recursion or result
 */
int is_div_by(int n, int div)
{
	if (n % div == 0)
	{
	return (0);
	}
	else if (div * div > n)
	{
	return (1);
	}
	return (is_div_by(n, div + 1));
} /*end helper function*/


