#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: parameter 1
 * @size: parameter 2
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int n;
	int p;
	int d;

	d = 0;
	p = 0;
	for (n = 0; n < size; n++)
	{
		p = p + a[n + (n * size)];
		d = d + a[(size - 1 -i) + (i * size)];
	}
	printf("%d, %d\n", d1, d2);
}
