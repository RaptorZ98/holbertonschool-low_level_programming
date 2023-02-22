#include "main.h"

/**
 * print_square - pritns square
 * Return: void
 * @size: parameter
 */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
