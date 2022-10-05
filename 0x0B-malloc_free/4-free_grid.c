#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid previously created by
 * alloc_grid function.
 * @grid: 2-D grid.
 * @height: height of grid
 *
 * Return: Null.
 */
void free_grid(int **grid, int height)
{
	int w;

	for (w = 0; w < height; w++)
		free(grid[w]);

	free(grid);
}
