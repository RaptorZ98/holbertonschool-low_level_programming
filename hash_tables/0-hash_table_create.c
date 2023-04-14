#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the table
 * Return: the adress of the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *arr;
	int pos;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
	{
		free(table);
		return (NULL);
	}
	else
	{
		for (pos = 0; pos < size; pos++)
			ht-array[pos] = NULL;
	}

	table->size = size;
	table->array = &arr;

	return (table);
}
