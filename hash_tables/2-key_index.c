#include "hash_tables.h"
/**
 * key_index - index of the key
 * @key: the key
 * @size: size of the array of the hash
 *
 * Return: index where key/value pair should be stored in hash
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
