#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialise variables of dog struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: pointer to he dog struct in mem
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
