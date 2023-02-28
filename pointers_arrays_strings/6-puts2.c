#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: parameter
 * Return: void
 */

void puts2(char *str)
{
	int n;
	char i;

	for (n = 0; *(str + n) != '\0'; n++)
	{
		_putchar((*(str + n)));
		n++;
	}
	_putchar('\n');
}
