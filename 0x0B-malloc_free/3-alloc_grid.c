#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **r;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);

	r = (int **) malloc(sizeof(int *) * height);

	if (r == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		r[x] = (int *) malloc(sizeof(int) * width);
		if (r[x] == NULL)
		{
			free(r);
			for (y = 0; y <= x; y++)
				free(r[y]);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			r[x][y] = 0;
		}
	}
	return (r);
}
