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
	if (new_dog == NULL)
		return (NULL);
	if (name != NULL)
		new_dog->name = name;
	new_dog->age = age;
	if (owner != NULL)
		new_dog-> = owner;
	return (newd);
}
