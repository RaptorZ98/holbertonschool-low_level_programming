#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data in a linked list
 * @head: the head of the list
 * Return: the sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	if (head->next == NULL)
		return (head->n);
	return (head->n + sum_dlistint(head->next));
}
