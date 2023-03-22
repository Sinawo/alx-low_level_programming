#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - exec array
 * @size: size of an array
 * @array: array has element of int
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	 unsigned long int i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}

	}
}
