#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate
 * @b: param 1
 * Return: n
 */

void *malloc_checked(unsigned int b)
{
	char *n;

	if (b <= 0)
		exit(98);
	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
