#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - pointer to 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to a array of 2 integer
*/

int **alloc_grid(int width, int height)
{
	int index;
	int *grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * (width * height));

	if (!grid)
		return (NULL);

	index = 0;
	while (index < width * height)
	{
		grid[index] = 0;
		putchar(grid[index] + '0');
		index++;
	}
	return (0);
}
