#include "main.h"

/**
 * print_triangle - prints a triangle
 * Return: void
 * @size: parameter
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (n > 0)
	{
		for (a = n; a > 1; a--)
		{
			for (b = 1; b <= a; b++)
				_putchar(' ');
			for (c = n; c >= a; c--)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
