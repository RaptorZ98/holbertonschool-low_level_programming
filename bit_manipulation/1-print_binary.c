#include "main.h"

/**
 * print_binary - prints a number in binary
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	int check = 0, mask, i;

	mask = 2147483648;
	if (n == 0)
		_putchar('0');
	for (i = 0; i <= 32; i++)
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
