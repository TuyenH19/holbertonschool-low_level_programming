#include"hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table target
 * @key: unempty key string
 * @value: value associate with the key
 *
 * Return: 1 if succeeded and 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *valuedup;
	unsigned long int index_key, index;
	hash_node_t *newnode;

	if (ht == NULL || key == NULL || *key == '\n' || value == NULL)
		return (0);

	valuedup = strdup(value);
	if (valuedup == NULL)
		return (0);

	index_key = key_index((const unsigned char *)key, ht->size);
	for (index = index_key; ht->array[index]; index++)
	{
		if (strcmp(ht->array[index]->value, valuedup) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = valuedup;
			return (1);
		}
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(valuedup);
		return (0);
	}
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = valuedup;
	newnode->next = ht->array[index_key];
	ht->array[index_key] = newnode;

	return (1);
}
