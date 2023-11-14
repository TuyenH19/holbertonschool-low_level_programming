#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that search for an integer
 * @array: array provide
 * @size: number of element in array
 * @cmp: pointer to the function needed
 *
 * Return: the index of the first element that cmp false
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		while (i < size)
		{
			if ((cmp(array[i])) != 0)
			{
				return (i);
			}
			else
				i++;
		}
	}
	return (0);
}
