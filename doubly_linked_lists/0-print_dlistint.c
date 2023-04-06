#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint
 * @h: a pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		return (1);
	}
	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
