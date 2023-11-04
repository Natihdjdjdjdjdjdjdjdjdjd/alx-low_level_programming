#include "hash_tables.h"

/**
 * hash_table_create - the func that creates a hash table
 *
 * @size: the size of the array
 *
 * Return: return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table;
	unsigned long int index;

	my_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (my_table == NULL)
		return (NULL);
	my_table->size = size;
	my_table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (my_table->array == NULL)
	{
		free(my_table);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		(my_table->array)[index] = NULL;
	return (my_table);
}
