#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog_t
 * @d: information of dog
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
