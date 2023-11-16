#include "dog.h"
#include <stdlib.h>
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
	int i, j, len_name, len_owner;

	for (len_name = 0; name[len_name] != '\0'; len_name++)
		continue;
	name_copy = malloc(sizeof(char) * (len_name + 1));
	if (!name_copy)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';

	for (len_owner = 0; owner[len_owner] != '\0'; len_owner++)
		continue;
	owner_copy = malloc(sizeof(char) * (len_owner + 1));
	for (j = 0; owner[j] != '\0'; j++)
		owner_copy[j] = owner[j];
	owner_copy[j] = '\0';

	my_dog = malloc(sizeof(dog_t));
	if (!my_dog)
		return (NULL);

	my_dog->name = name_copy;
	if (!(my_dog->name))
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->age = age;
	my_dog->owner = owner_copy;
	if (!(my_dog->owner))
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	return (my_dog);
}
