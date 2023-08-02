#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main- Calculates the least amout of cents needed for change
 *@argc: hold the amount of vectors in argv[]
 *@argv: an array of pinters that are pointing to char's
 *Return: 0 (Success), 1 (Error);
 */
int main(int argc, char *argv[])
{
	/*Variables*/
	int i = 0,cents = 0, total_sum = 0;
	/*verify how much data is stored*/
	if (agrc != 1)
	{
		printf("ERROR\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	
	/*divide add 25 untill value surpaces the amout of cents
	 * then move to the next coin to do the same*/
} /*end main function*/
/**
 *cent_count- counts the cents
 *@cent: holds the total amout we need to  change
 *@change: holds an int
 */
int cent_count(int cent, int change)
{

	while (cent < changes)
	{
		
	}
	return (0);
} /*end helper function*/


