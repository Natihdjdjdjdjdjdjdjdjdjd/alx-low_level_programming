#include "hash_tables.h"

/**
 * hash_table_print - func that print a hash
 * @ht: the hash table value
 *
 * Return: NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *this_node;
	unsigned long int my_array_index;
	int is_first, is_first_hash;

	if (ht == NULL)
		return;
	printf("{");
	is_first_hash = 1;
	for (my_array_index = 0; my_array_index < ht->size; my_array_index++)
	{
		if ((ht->array)[my_array_index] == NULL)
			continue;
		if (!is_first_hash)
			printf(", ");
		this_node = (ht->array)[my_array_index];
		is_first = 1;
		while (this_node)
		{
			if (!is_first)
				printf(", ");
			printf("\'%s\': \'%s\'", this_node->key,
					this_node->value);
			is_first = 0;
			this_node = this_node->next;
		}
		this_node = NULL;
		is_first_hash = 0;
	}
	printf("}\n");
}
