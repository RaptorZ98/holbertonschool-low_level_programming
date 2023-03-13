#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates an array
 * @str: param
 * Return: char
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int m;

	i = 0;
	m = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != 0)
		i++;
	s = malloc(i + 1);
	if (s == NULL)
		return (NULL);
	while (m < i)
	{
		s[m] = str[m];
		m++;
	}
	return (s);
}
