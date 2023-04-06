#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index given from a list
 * @head: the head of the list
 * @index: the index of the node to delete
 * Return: return 1 succes 0 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;

	if (head == NULL || *head == NULL)
		return (-1);
	aux = get_node_index(*head, index);
	if (aux == NULL)
		return (-1);
	if (aux->next != NULL)
		(aux->next)->prev = aux->prev;
	if (aux->prev != NULL)
		(aux->prev)->next = aux->next;
	free(aux);
	return (1);
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
