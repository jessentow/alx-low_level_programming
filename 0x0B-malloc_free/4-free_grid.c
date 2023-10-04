#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free memory allocated for a 2d grid
 * @grid: The pointer to the 2d grid to be freed.
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
	free(grid[a]);
	}
	free(grid);
}
