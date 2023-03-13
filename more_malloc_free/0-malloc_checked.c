#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * malloc_checked - allocates memory
 * @b: param 1
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
