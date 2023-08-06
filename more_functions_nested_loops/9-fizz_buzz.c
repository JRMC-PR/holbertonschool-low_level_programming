#include "main.h"
#include <stdio.h>
/**
 *main - fizz buzz excercise
 *Return: if success
 */
int main(void)
{
	/*Declarations*/
	int i = 1;
	/*start a loop for counting to 100*/
	while (i <= 100)
	{
		/*check for fizz buzz*/
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i < 10)
			printf("%d ", i);
		else
			printf("%d%d ", i / 10, i % 10);
		i++;
	} /*end 1->100 while*/
	printf("\n");
	return (0);
} /*end void*/
