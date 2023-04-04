#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list
 * @head: the adress of the start of the list
 * @str: the data that the new node will allocate
 * Return: the adress of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *strCopy = strdup(str);
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strCopy;
	while (strCopy[length] != '\0')
		length++;
	new->len = length;
	new->next = *head;
	return (new);
}
