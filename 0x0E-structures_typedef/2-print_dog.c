#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - prints dog struct elements
 * @d: pointer to he dog struct in mem
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
		printf("(nil)");
}
