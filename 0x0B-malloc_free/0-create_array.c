#include <stdlib.h>
/**
 * create_array - eates an array of chars, and initializes it with
 * a specific char
 * @size: size of the array based in int types
 * @c: char that initializes am array
 * Return: NULL if size = 0 otherwise pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}
