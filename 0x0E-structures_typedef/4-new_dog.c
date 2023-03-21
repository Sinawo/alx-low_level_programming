#include "dog.h"
#include "_store_string.c"
#include <stdlib.h>
/**
 * new_dog - create a new dog struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: dog_t structure(starting address of the created dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *newDog;
	char *newName, *newOwner;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newName = _strdup(name);
	newOwner = _strdup(owner);
	if (newOwner == NULL || newName == NULL)
	{
		free(newName);
		free(newOwner);
		free(newDog);
		return (NULL);
	}
	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;
	return (newDog);
}
