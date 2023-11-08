#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - to allocate memory using malloc
 * @b: size of memory
 *
 * Return: Nothing.
*/

void *malloc_checked(unsigned int b)
{
	void *object;

	object = malloc(b);
	if (!object)
		exit(98);
	return (object);
}
