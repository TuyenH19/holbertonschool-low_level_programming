#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* new_dog - create a new dog
* @name: name of new dog
* @age: age of new dog
* @owner: owner of new dog
*
* Return: new-dog information
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *name_copy = NULL, *owner_copy = NULL;

	if (!name || !owner)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	owner_copy = malloc(strlen(owner) + 1);
	if (!name_copy || !owner_copy)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	my_dog = malloc(sizeof(dog_t));
	if (!my_dog)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	my_dog->name = name_copy;
	my_dog->age = age;
	my_dog->owner = owner_copy;

	if (!my_dog->name || !my_dog->owner)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	return (my_dog);
}
