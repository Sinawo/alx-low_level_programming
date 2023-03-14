#include <stdlib.h>
#include <stdio.h>

#include "_strlen.c"
/**
 * alloc_grid - creates a 2D array
 * @width: 1st array size(width)
 * @height: 2nd array size(height)
 * Return:  pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		arr[y] = (int *)malloc(width * sizeof(int));
		if (arr[y] == NULL)
			return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return (arr);
}
