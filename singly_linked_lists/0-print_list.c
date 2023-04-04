#include "lists.h"

/**
 * print_list - prints the content of all the nodes
 * @h: the pointer to the next node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	if (h->next != NULL)
	{
		if (h->str == NULL)
			h->str = "(nil)";
		printf("[%d] %s\n", h->len, h->str);
		return (1 + print_list(h->next));
	}
	printf("[%d] %s\n", h->len, h->str);
	return (1);
}
