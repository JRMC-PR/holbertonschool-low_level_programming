#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *free_dog- frees allocated struct in memory
 *@d: points to the dog struct
 */
void free_dog(dog_t *d)
{
	/*free allocated meory*/
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
} /*end function*/

