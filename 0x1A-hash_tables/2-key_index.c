#include "hash_tables.h"

/**
 * key_index -the func tha give index key
 *
 * @key: the key value
 * @size: the size of the array of the hash table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_results;

	key_results = hash_djb2(key);
	if (size != 0)
		return (key_results % size);
	return (0);
}
