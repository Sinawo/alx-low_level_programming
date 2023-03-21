#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * init_dog - initialise variables of dog struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: pointer to he dog struct in mem
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
