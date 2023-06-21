#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit- run the function
 *Return: the value of the last digit
 *@n: an int number
 */
int print_last_digit(int n)
{
	n = n % 10;

	_putchar(n + '0');

	return (abs(n));
}
