#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: parameter
 * Return: void
 */

void puts_half(char *str)
{
	int a;
	int b;

	for (a = 0; *(str + a) != '\0'; a++)
	{
	}
	for (b = (a - 1) / 2; b < a; b++)
	       _putchar(*(str + b));
	_putchar('\n');	
}
