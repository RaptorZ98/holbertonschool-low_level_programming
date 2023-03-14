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
	unsigned int d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);
	for (d = 0; d < nmemb * size; d++)
		n[d] = 0;
	return (n);
}
