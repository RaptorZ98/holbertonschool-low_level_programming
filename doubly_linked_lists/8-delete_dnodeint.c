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
	dlistint_t *auxPrev;
	dlistint_t *auxNext;

	if (head == NULL || *head == NULL)
		return (-1);
	aux = get_node_index1(*head, index);
	if (aux == NULL)
		return (-1);
	if (aux->next != NULL)
	{
		auxNext = aux->next;
		auxNext->prev = aux->prev;
	}
	if (aux->prev != NULL)
	{
		auxPrev = aux->prev;
		auxPrev->next = aux->next;
	}
	return (1);
}

/**
 * get_node_index1 - returns the nth node of a linked list
 * @head: the head of the list
 * @index: the index of the node
 * Return: the node of the index
 */

dlistint_t *get_node_index1(dlistint_t *head, unsigned int index)
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
