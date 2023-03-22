#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dog from mem (cleans mem after dog is created
 * @d: dog structure
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}

}
