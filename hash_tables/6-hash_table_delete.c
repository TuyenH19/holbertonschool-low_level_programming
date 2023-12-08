#include"hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table provided
 *
 * Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *node_temp;
	unsigned long int index = 0;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;

	while (index < ht->size)
	{
		for (node = ht->array[index]; node != NULL;
			 node = node_temp)
		{
			node_temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
