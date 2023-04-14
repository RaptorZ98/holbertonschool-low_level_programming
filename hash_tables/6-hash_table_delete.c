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
		free_hash_list(ht->array[pos]);
	}
	free(ht->array);
	free(ht);
}


/**
 * free_hash_list - frees a list in a hash
 * @node: the node that starts the list
 */

void free_hash_list(hash_node_t *node)
{
	if (node != NULL)
	{
		free_hash_list(node->next);
		free(node->value);
		free(node->key);
		free(node);
	}
}
