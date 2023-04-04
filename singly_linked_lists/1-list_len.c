#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list
 * @h: the adress of the node
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	return (1 + list_len(h->next));
}
