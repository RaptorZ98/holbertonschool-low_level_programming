#include "main.h"

/**
 * dlistint_len - return the number of elements in a linked list
 * @h: the head of the list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	return (1 + dlistint_len(h->next));
}
