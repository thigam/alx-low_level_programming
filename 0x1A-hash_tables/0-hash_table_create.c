#include "hash_tables.h"

/**
 * hash_table_create- Creates a hash table
 * @size: The size of the hashtable
 *
 * Return: A pointer to the newly created hash table, or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
