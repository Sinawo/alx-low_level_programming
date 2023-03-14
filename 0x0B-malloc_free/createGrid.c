#include <stdlib.h>
#include <stdio.h>

#include "_strlen.c"
/**
 * alloc_grid - creates a 2D array
 * @width: 1st array size(width)
 * @height: 2nd array size(height)
 * Return:  pointer to a 2D array
 */
int **alloc_grid(int totalColumns, int totalRows)
{

	int **ptr2arr;
	int row, column;

	if (totalColumns <= 0 || totalRows <= 0)
		return (NULL);
	ptr2arr = (int **)malloc(totalRows * sizeof(int *));
	if (ptr2arr == NULL)
		return (NULL);
	/* creates 1D array */
	for (row = 0; row < totalRows; row++)
	{
		ptr2arr[row] = (int *)malloc(totalColumns * sizeof(int));
		/*Allocate memory for inner array ^*/
		if (ptr2arr[row] == NULL)
			return (NULL);
		for (column = 0; column < totalColumns; column++)
			ptr2arr[row][column] = 0;
	}
	return (ptr2arr);
}
