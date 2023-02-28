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

	a = _strlen(str);
	for (b = (a - 1) / 2; b < a; b++)
	       _putchar(*(str + b));
	_putchar('\n');	
}
