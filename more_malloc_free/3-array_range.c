#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: min value included
 * @max: max value included
 *
 * Return: pointer to new array of integers
*/

int *array_range(int min, int max)
{
	int index;
	int *array = NULL;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	index = 0;
	while (min <= max)
	{
		array[index] = min;
		min++;
		index++;
	}
	return (array);
}
