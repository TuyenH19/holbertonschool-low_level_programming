#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create hash file
 * @size: size of the array
 * Return: pointer to newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int index;
	hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ht->array[index] = NULL;

	return (ht);
}
