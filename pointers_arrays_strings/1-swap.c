#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: parameter 1
 * @b: parameter 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;
	int m;

	n = *a;
	m = *b;
	*a = m;
	*b = n;
}
