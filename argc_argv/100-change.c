#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main- Calculates the least amout of cents needed for change
 *@argc: hold the amount of vectors in argv[]
 *@argv: an array of pinters that are pointing to char's
 *Return: 0 (Success), 1 (Error);
 */
int cent_count(int money);

int main(int argc, char *argv[])
{
	/*Variables*/
	int i = 0, total_sum = 0;
	/*verify input*/
	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	} /*end if */
	/*verify input value*/
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	} /*end oif */
	printf("%d\n", cent_count(atoi(argv[1])));
	/*divide add 25 untill value surpaces the amout of cents
	 * then move to the next coin to do the same*/
} /*end main function*/
/**
 *cent_count- counts the cents
 *@cmoney: holds the total amout we need to  change
 */
int cent_count(int money)
{
	/*variables*/
	int change = 0, sum = 0, i = 0;
	int cents[5] = {25, 10, 5, 2, 1};
	/*calculate the change*/
	while (sum != money)
	{
		/*sum the cent value to the total */
		sum += cents[i];
		change++;
		/*check lif the sum is > */
		if (sum > money)
		{
			/*revert to prev ammount*/
			sum -= cents[i];
			change--;
			i++; /* next position in cents*/
		}		 /*end if*/
	}			 /*end while*/
	return (change);
} /*end helper function*/
