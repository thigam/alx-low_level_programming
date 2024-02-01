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

	for (i = 0; i < size; i++)
	{
		table[i] = malloc(sizeof(hash_table_t));
	}

	return (table);
}
