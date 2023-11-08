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
	int  wid, hei, index;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (hei = 0; hei < height; hei++)
	{
		grid[hei] = (int *)malloc(sizeof(int) * width);
		if (grid[hei] == NULL)
		{
			/**
			 * Free previously allocated memory in rows before returning NULL the array
			*/
			for (index = 0; index < hei; index++)
				free(grid[index]);
			free(grid);
			return (NULL);
		}
	}

	for (hei = 0; hei < height; hei++)
	{
		for (wid = 0; wid < width; wid++)
		{
			grid[hei][wid]	= 0;
		}
	}
	return (grid);
}
