#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: param 1
 * @size: param 2
 * Return: voididid
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	int d;

	if (nmemb == NULL || size == NULL)
		return (NULL);
	n = malloc(nmbemb * size);
	if (n == NULL)
		return (NULL);
	for (d = 0; d < nmemb; d++)
		n[d] = '\0';
	return (n);
}
