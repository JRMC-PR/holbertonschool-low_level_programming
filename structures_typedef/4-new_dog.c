#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 **new_dog- create a new dog struct
 *@name: points to a char
 *@age: holds a float
 *@owner: points to a char
 *Return: struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*pointer to struct*/
	dog_t *new_dog;
	/*allocate*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	} /*end if*/
	new_dog->name = malloc(strlen(name) * sizeof(name));
	if (new_dog->name != NULL)
		new_dog->name = strdup(name);
	else
	{
		free(new_dog);
		return (NULL);
	}
	/*end if else for name*/
	new_dog->age = age;
	new_dog->owner = malloc(strlen(owner) * sizeof(owner));
	if (new_dog->owner != NULL)
		new_dog->owner = strdup(owner);
	else
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	} /*end if else for owner*/
	return (new_dog);
} /*end function*/
