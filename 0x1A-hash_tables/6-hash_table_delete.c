#include "hash_tables.h"

/**
 * hash_table_delete - the func that delete a hASH TABLE
 *
 * @ht: THE VALUE OF HASH
 *
 * Return: NULL
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *this_node, *pre_node;
	unsigned long int array_index, has_nodes;

	for (array_index = 0; array_index < ht->size; array_index++)
	{
		has_nodes = 0;
		this_node = (ht->array)[array_index];
		while (this_node)
		{
			has_nodes = 1;
			pre_node = this_node;
			this_node = this_node->next;
			free(pre_node->key);
			free(pre_node->value);
			free(pre_node);
		}
		if (!has_nodes)
			free((ht->array)[array_index]);
	}
	free(ht->array);
	free(ht);
}
