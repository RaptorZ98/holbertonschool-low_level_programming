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
			for (a = 1; a <= n; a++)
			{
				_putchar(' ');
				if (a == n)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	if (n <= 0)
		_putchar('\n');
}
