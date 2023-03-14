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
	unsigned int i, g;

	i = 0;
	k = 0;
	t = 0;
	g = 0;
	while (s1[t] != '\0')
		t++;
	while (s2[g] != '\0')
		g++;
	if (g > n)
		m = malloc(t * n);
	else
		m = malloc((t - 1) * g);
	if (m == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (k = 0; k < t; k++)
			m[k] = s1[k];
	}
	if (s2 != NULL)
	{
		while (i < n && s2[i] != '\0')
		{
			m[k] = s2[i];
			i++;
			k++;
		}
	}
	m[k] = '\0';
	return (m);
}
