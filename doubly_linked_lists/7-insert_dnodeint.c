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
	unsigned int len;

	if (h == NULL)
		return (NULL);
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	len = list_length(*h);
	if (len + 1 > idx)
		return (NULL);
	else if (len + 1 == idx)
		return (add_dnodeint_end(h, n));

	aux = get_node_index(*h, idx);
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

/**
 * list_length - calculates the length of a list
 * @h: the head of the list
 * Return: the size of the list
 */

size_t list_length(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	return (1 + list_length(h->next));
}

/**
 * get_node_index - returns the nth node of a linked list
 * @head: the head of the list
 * @index: the index of the node
 * Return: the node of the index
 */

dlistint_t *get_node_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);
	aux = head;
	while (pos < index && aux->next != NULL)
	{
		aux = aux->next;
		pos++;
	}
	if (pos != index)
		return (NULL);
	return (aux);
}
