#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
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
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
} /*end function*/
