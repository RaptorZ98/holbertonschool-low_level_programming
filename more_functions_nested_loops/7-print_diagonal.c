#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * Return: void
 * @n: parameter
 */

void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
			_putchar(' ');	
	}
}
