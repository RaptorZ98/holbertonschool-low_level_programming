#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list
 * @h: the adress of the node
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	int pos;
	size_t result = 0;

	for (pos = 0; h[0] != NULL; pos++)
	{
		result++
	}
	return (result);
}
