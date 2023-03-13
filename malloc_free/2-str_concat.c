#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: param 1
 * @s2: param 2
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int n, m, d, i;
	char *s;

	n = 0;
	m = 0;
	d = 0;
	i = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[m] != '\0')
		m++;
	s = malloc(n + m + 1);
	if (s == NULL)
		return (NULL);
	while (d < n)
	{
		s[d] = s1[d];
		d++;
	}
	while (i <= m)
	{
		s[d] = s2[i];
		i++;
		d++;
	}
	return (s);
}
