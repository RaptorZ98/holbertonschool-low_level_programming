#include "lists.h"

/**
 * free_list - frees a list
 * @head: the head of the list
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next == NULL)
		{
			free(head->str);
			free(head);
		}
		free_list(head->next);
	}
}
