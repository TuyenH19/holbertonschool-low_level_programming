#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: to define a new type of combination of more type
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;


#endif
