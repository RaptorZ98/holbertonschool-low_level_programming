#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: the head of the list
 * @index: the index of the node
 * Return: the node of the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos;
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);
	aux = head;

	for (pos = 0; pos <= index && aux->next != NULL; pos++;)
	{
		aux = aux->next;
	}
	if (pos != index)
		return (NULL);
	return (aux);
}
