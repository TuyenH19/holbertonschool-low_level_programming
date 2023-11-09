#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array of 0
 * @nmemb: number of elements
 * @size: number of bytes of each elements
 *
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *call = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	call = malloc(nmemb * size);
	if (!call)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
		call[index] = 0;

	return (call);
}
