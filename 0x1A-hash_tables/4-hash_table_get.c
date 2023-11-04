#include "hash_tables.h"

/**
 * hash_table_get - func that ritive value
 *
 * @ht: the hashtable
 * @key: the key we are looking
 *
 * Return: Null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *this_node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	if ((ht->array)[index] == NULL)
		return (NULL);
	this_node = (ht->array)[index];
	while (this_node)
	{
		if (strcmp(this_node->key, key) == 0)
			return (this_node->value);
		this_node = this_node->next;
	}
	return (NULL);
}
