#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid provided
 * @grid: the 2 dimentional grid provided
 * @height: number of columns of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
