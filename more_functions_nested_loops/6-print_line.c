#include "main.h"

/**
 * print_line - draws a straight line
 * Return: void
 * @n: parameter
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('_');
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
