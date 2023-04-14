#include "hash_tables.h"

/**
 * hash_table_set - adds an element ti the hash table
 * @ht: the hash table to add the key
 * @key: the key, cannot be an empty string
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indexKey;
	hash_node_t *tmp, *newHash;
	char *copyValue;

	strcpy(copyValue, value);
	if (ht == NULL || key == NULL)
		return (0);
	if (strcmp("", key) == 0)
		return (0);

	indexKey = key_index(key, ht->size);

	if (strcmp("", ht[indexKey]->key) == 0)
	{
		ht[indexKey]->value = copyValue;
		ht[indexKey]->key = key;
	}
	else
	{
		*tmp = ht->array;
		newHash = malloc(sizeof(hash_node_t));
		if (newHash == NULL)
			return (0);
		newHash->next = tmp;
		tmp = newHash;
		newHash->value = copyValue;
		newHash->key = key;
	}
	return (0);
}
