#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: - start of the list
 * @str: - the data for the node to add
 * Return: the adress of the node just created
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *tail;
	list_t *new;
	char *strCopy = strdup(str);

	if (head == NULL || strCopy == NULL)
		return (NULL);

	while (strCopy[length] != '\0')
		length++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	tail = *head;
	if (tail->next != NULL)
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}
	else
		*head = new;
	new->str = strCopy;
	new->len = length;
	new->next = NULL;
	return (new);
}
