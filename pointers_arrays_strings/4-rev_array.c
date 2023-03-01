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

	for (d = 0; d < (n / 2); d++)
	{
		b = *(a + d);
		*(a + d) = *(a + (n - 1);
		*(a + (n - 1)) = b;	
	}	
}
