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

	if (head == NULL)
		return (NULL);
	if (strCopy == NULL)
		return (NULL);
	while (strCopu[length] != NULL)
		length++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	tail = get_the_node(*head);
	tail->next = new;
	new->str = strCopy;
	new->len = length;
	new->next = NULL;
	return (new);
}

/**
 * get_the_node - gets the last node
 * @head: the first node of the list
 * Return: the adress of the last node
 */

list_t *get_the_node(list_t *head)
{
	if (head->next == NULL)
		return (head);
	return (get_the_node(head->next));
}
