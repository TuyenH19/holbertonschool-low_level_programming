#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a function to give an array
 * @array: array provide
 * @size: size of array
 * @action: pointer to function needed
 *
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
