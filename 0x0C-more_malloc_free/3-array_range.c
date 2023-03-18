#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates and array of integers
 * @min: minimum rage to print
 * @max: max int to print
 * Return: NULL if min > max or malloc fails otherwise pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size = 0;

	for (i = min; i <= max; i++)
		size++;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++, min++)
		*(arr + i) = min;
	return (arr);
}
