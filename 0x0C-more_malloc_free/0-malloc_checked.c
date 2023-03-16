#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - checks malloc
 * @b: integer to check?
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{

	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
