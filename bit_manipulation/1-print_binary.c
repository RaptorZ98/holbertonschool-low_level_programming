#include "main.h"
#include <limits.h>

/**
 * print_binary - prints a number in binary
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	int check = 0, i;
	unsigned long int mask;

	mask = 4611686018427387904;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i <= 63; i++)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			check = 1;
		}
		else if (check != 0)
			_putchar('0');
		mask >>= 1;
	}
}
