#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: the return is void
*/

void print_alphabet_x10(void)
{
	char c;
	int n;
	
	n = 1;
	while (n <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		n++;
	}
}
