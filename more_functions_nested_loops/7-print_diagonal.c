#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * Return: void
 * @n: parameter
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (b = 1; b <= n; b++)
		{
			for (a = 1; a <= b; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
