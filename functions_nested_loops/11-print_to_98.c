#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints all natural numbers from n to 98
 * Description: prints
 * Return: void
 * @n: parameter
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n != 98)
		{
			printf("%i, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n != 98)
		{
			printf("%i, ", n);
			n++;
		}
	}
	printf("%i\n", 98);
}
