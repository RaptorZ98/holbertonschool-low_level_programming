#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: param 1
 * @c: param 2
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int n;

	n = 0;
	if (size == 0)
		return (NULL);
	s = malloc(size);
	if (s == NULL)
		return (NULL);
	while (n < size)
	{
		s[n] = c;
		n++;
	}
	return (s);
}
