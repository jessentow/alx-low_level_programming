#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2-dimensional grid of integers.
 * @width: The width input of the grid.
 * @height: The height input of the grid.
 *
 * Return: A pointer to the 2D dimension or array of integers.
 *         Returns NULL on failure or if width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **qrs;
	int a, b;

	if (width <= 0 || height <= 0)
	return (NULL);

	qrs = malloc(sizeof(int *) * height);

	if (qrs == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
	qrs[a] = malloc(sizeof(int) * width);

	if (qrs[a] == NULL)
	{
	for (; a >= 0; a--)
	free(qrs[a]);

	free(qrs);
	return (NULL);
	}
	}

	for (a = 0; a < height; a++)
	{
	for (b = 0; b < width; b++)
	qrs[a][b] = 0;
	}
	return (qrs);
}
