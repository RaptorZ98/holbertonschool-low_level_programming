#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key you are looking for
 * Return: vaule associated with the element or NULL if fails
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	node = ht->array[index];

	if (node == NULL)
		return (NULL);

	while (node->next != NULL && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}
	if (node->next == NULL)
		return (NULL);
	else
		return (node->value);
}
