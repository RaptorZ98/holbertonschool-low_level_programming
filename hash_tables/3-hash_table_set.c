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

	if (ht == NULL)
		return (0);
	indexKey = key_index((unsigned const char *) key, ht->size);
	if (ht->array[indexKey] == NULL)
	{
		newHash = malloc(sizeof(hash_node_t));
		if (newHash == NULL)
			return (0);
		newHash->next = NULL;
	}
	else if (strcmp(ht->array[indexKey]->key, key) == 0)
	{
		strcpy(ht-array[indexKey]->value, value);
		return (1);
	}
	else
	{
		newHash = malloc(sizeof(hash_node_t));
		if (newHash == NULL)
			return (0);
		newHash->next = ht->array[indexKey];
	}
	newHash->value = malloc(sizeof(value));
	if (newHash->value == NULL)
		free(newHash);
	newHash->key = malloc(sizeof(key));
	if (newHash->key == NULL)
	{
		free(newHash->value);
		free(newHash);
	}
	strcpy(newHash->value, value);
	strcpy(newHash->key, key);
	ht->array[indexKey] = newHash;
	return (1);
}
