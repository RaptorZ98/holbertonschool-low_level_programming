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
	char *cname;
	char *cowner;

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	if (name != NULL)
	{
		newd->name = copy(name);
		if (name == NULL)
		{
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
			free(newd);
			return(NULL);
		}
	}
	return (newd);
}

char *copy(char *cp)
{
	int n, d;
	char *copy;

	i = 0;
	while (cp[i] != '\0')
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	if (copy != NULL)
		for (j = 0; j < (i + 1); j++)
			copy[j] = cp[j];
	return (copy);
}
