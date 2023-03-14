#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: param 1
 * @max: param 2
 * Return: integer
 */


int *array_range(int min, int max)
{
	int *s;
	int i;
	int t;

	if (min > max)
		return (NULL);
	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
		return (NULL);
	t = min;
	for (i = 0; t <= max; i++)
	{
		s[i] = t;
		t++;
	}
	return (s);
}
