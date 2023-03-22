#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - finds index of int
 * @size: size of an array
 * @array: array has element of int
 * @cmp: function pointer
 * Return: the index of the first element for which
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}

	}
	return ((i >= size) ? (-1) : (i));
}
