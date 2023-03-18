#include <stdlib.h>
/**
 * array_range - creates and array of integers
 * @min: size of the array based in int types
 * @max: char that initializes am array
 * Return: NULL if size = 0 otherwise pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size = max - min;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * size + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <  max; i++, min++)
		*(arr + i) = min;
	arr[min] = max;	
	return (arr);
}
