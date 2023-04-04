#include "lists.h"

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
