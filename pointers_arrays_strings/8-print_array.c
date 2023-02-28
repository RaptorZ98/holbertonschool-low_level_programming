#include "main.h"
#include <stdio.h>

/**
 * print_array - prints ints
 * @n: parameter 2
 * @a: parameter 1
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == n - 1)
		{
			printf("%d", *(a + b));
		}
		else
			printf("%d, ", *(a + b));
	}
	_putchar('\n');
}
