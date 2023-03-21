#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - does something
 * @name: param 1
 * @age: param 2
 * @owner: param 3
 * Return: point
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	if (name != NULL)
	{
		newd->name = copy(name);
		if (name == NULL)
		{
			free(newd->name);
			free(newd->owner);
			free(newd);
			return (NULL);
		}
		newd->name = name;
	}
	newd->age = age;
	if (owner != NULL)
	{
		newd->owner = copy(owner);
		if (owner == NULL)
		{
			free(newd->name);
			free(newd->owner);
			free(newd);
			return (NULL);
		}
	}
	return (newd);
}

/**
 * copy - --
 * @cp: --
 * Return: --
 */

char *copy(char *cp)
{
	int n, d;
	char *copy;

	if (cp == NULL)
		return (NULL);
	n = 0;
	while (cp[n] != '\0')
		n++;
	copy = malloc(sizeof(char) * (n + 1));
	if (copy != NULL)
		for (d = 0; d < (n + 1); d++)
			copy[d] = cp[d];
	return (copy);
}
