#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: parameter 1
 * @n: parameter 2
 */

void reverse_array(int *a, int n)
{
	int b;
	int d;
	int p;

	p = 0;
	while (*(a + p) != '\0')
		p++;
	for (d = 0; d < n; d++)
	{
		b = *(a + d);
		*(a + d) = *(a + (p - 1));
		*(a + (p - 1)) = b;
		p = p - 1;
	}
}
