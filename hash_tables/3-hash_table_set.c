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
	hash_node_t *newHash;

	if (ht == NULL || key == NULL)
		return (0);
	if (strcmp("", key) == 0)
		return (0);

	indexKey = key_index((unsigned const char *) key, ht->size);
	if (ht->array[indexKey] == NULL)
	{
		newHash = malloc(sizeof(hash_node_t));
		if (newHash == NULL)
			return (0);
		ht->array[indexKey] = newHash;
	}
	else if (strcmp(ht->array[indexKey]->key, strdup(key)))
	{
		ht->array[indexKey]->value = strdup(value);
		return (1);
	}
	else
	{
		newHash = malloc(sizeof(hash_node_t));
		if (newHash == NULL)
			return (0);
		newHash->next = ht->array[indexKey];
		ht->array[indexKey] = newHash;
	}
	newHash->value = strdup(value);
	newHash->key = strdup(value);
	return (1);
}
