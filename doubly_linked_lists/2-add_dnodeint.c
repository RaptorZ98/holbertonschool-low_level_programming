#include "lists.h"

/**
 * add_dnodeint - adds a node at the start of a list
 * @head: points to the head of the list
 * @n: the data that the node will have
 * Return: the adress of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	if (*head != NULL)
	{
		new->next = *head;
		*head->prev = new;
	}
	*head = new;
	return (new);
}
