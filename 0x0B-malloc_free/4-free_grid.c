#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 * previously created by alloc_grid function
 * @grid: two dimesional grid
 * @height: height dimension of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
