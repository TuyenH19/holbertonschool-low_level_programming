#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - to print struct dog
 * @d: pointer to struct dog
 *
 * Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");

	printf("Age: %2f\n", d->age);

	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
