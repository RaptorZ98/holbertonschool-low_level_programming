#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: parameter
 * Return: void
 */

void puts2(char *str)
{
	int n;

	for (n = 0; n != '\0'; n + 2)
		_putchar(*(str + n));
	_putchar('\n');
}
