#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	c = 0;
	for (c >= '0'; c <= '9'; c++)
		if (c != '4' || c != '2')
			_putchar(c);	
}
