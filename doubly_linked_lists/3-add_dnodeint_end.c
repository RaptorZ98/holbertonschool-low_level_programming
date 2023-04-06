#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the head of the list
 * @n: the data to store in this new node
 * Return: the adress of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
		new->prev = aux;
	}
	else
		*head = new;

	return (new);
}
