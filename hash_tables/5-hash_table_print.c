#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	int pos = 0, len = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	while (pos < ht->size)
	{
		node = ht-array[pos];
		while (node != NULL)
		{
			if (len != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			len = 1;
		}
		pos++;
	}
	printf("}\n");
}
