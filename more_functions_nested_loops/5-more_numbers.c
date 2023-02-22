#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;
	int rem;
	int top

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			rem = b % 10;
			_putchar(rem + '0');
			if (b > 9)
			{
				top = b / 10;
				_putchar(top);
			}
		}
		_putchar('\n');
	}
}
