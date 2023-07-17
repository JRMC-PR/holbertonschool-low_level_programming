#include "dog.h"
#include <stdio.h>
/**
 *print_dog - prints all of a struct attribrutes
 *@d: points to a struct of a dog
 */
void print_dog(struct dog *d)
{
	/*check if pointer not null*/
	if (d != NULL)
	{
		/*check if the atts of the struct are not empty*/
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age <= 0)
			printf("(nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)");
		else
			printf("Owner: %s\n", d->owner);
	} /*end if*/
} /*end function*/
