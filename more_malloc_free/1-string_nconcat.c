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
	char *s;
	unsigned int i, m, d, t;

	i = 0;
	m = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[m] != '\0')
		m++;
	if (n >= m)
		n = m;
	s = malloc(sizeof(char) * i + n + 1);
	if (s == NULL)
		return (NULL);
	for (d = 0; d < i; d++)
		s[d] = s1[d];
	for (t = 0; t < n; d++, t++)
		s[d] = s2[t];
	s[d] = '\0';
	return (s);
}
