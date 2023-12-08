#include "hash_tables.h"
/**
 * ash_table_print - print a hash table
 * @ht: provided hash table
 *
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index = 0;
	int test = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		for (node = (ht->array[index]); node != NULL; node = node->next)
		{
			if (test == 1)
				printf(",");
			printf("'%s': '%s'", (char *) node->key, (char *) node->value);
			test = 1;
		}
		index++;
	}
	printf("}\n");
}
