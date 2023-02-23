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

	if (size > 0)
	{
		for (a = size; a > 0; a--)
		{
			for (b = 1; b < a; b++)
				_putchar(' ');
			for (c = size; c >= a; c--)
				_putchar('#');
			_putchar('\n');
		}
	}
}
