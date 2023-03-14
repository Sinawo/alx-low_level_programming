#include <stdlib.h>
#include <stdio.h>


/**
 * free_grid - frees a 2 dimensional gri
 * @grid: 2D array
 * @height: array size(height)
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || height <= 0)
		return;
	for (y = 0; y < height; y++)
		free(grid[y]);
	free(grid);
}
