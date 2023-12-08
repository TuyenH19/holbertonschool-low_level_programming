#include"hash_tables.h"
/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: hash table provide
 * @key: the target key
 *
 * Return: value associated with the element (NULL if key not found)
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (strcmp(node->key, key) != 0)
		node = node->next;

	return (node->value);
}
