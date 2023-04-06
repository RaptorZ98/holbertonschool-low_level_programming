#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the data for the new node
 * Return: the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux;
	dlistint_t *new;
	dlistint_t *temp;

	if (h == NULL)
		return (NULL);
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	len = dlistint_len(*h);
	if (len + 1 > idx)
		return (NULL);
	else if (len + 1 == idx)
		return (add_dnodeint_end(h, n));

	aux = get_dnodeint_at_index(*h, idx);
	temp = aux->prev;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = aux;
	temp->next = new;
	aux->prev = new;
	return (new);
}
