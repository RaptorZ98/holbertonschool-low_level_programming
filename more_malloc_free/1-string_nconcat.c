#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: param 1
 * @s2: param 2
 * @n: param 3
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	int t, k;
	unsigned int i;

	i = 0;
	while (s1[t] != '\0')
		t++;
	m = malloc((t) * n);
	if (m == NULL)
		return (NULL);
	for (k = 0; k < t; k++)
		m[k] = s1[k];
	while (i < n && s2 != '\0')
	{
		m[k] = s2[i];
		i++;
		k++;
	}
	m[k] = '\0';
	return (m);
}
