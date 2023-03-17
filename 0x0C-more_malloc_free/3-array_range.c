#include <stdlib.h>
/**
 * *_calloc - eates an array of chars, and initializes it with
 * a specific char
 * @size: size of the array based in int types
 * @nmemb: char that initializes am array
 * Return: NULL if size = 0 otherwise pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(arr + i) = 0;
	return (arr);
}
