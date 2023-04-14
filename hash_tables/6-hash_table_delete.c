#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pos;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	for (pos = 0; pos < ht->size; pos++)
	{
		while (ht->array[pos] != NULL)
		{
			tmp = ht->array[pos]->next;
			free(ht->array[pos]->value);
			free(ht->array[pos]->key);
			free(ht->array[pos]);
			ht->array[pos] = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
