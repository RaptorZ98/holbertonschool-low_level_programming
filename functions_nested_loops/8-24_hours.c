#include "main.h"

/**
 * jack_bauer - prints every minute
 *Return: not
*/

void jack_bauer(void)
{
	int hh;
	int min;

	hh = 0;
	min = 0;
	while (hh != 24)
	{
		_putchar((hh / 10) + '0');
		_putchar((hh % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
		if (min < 59)
			min++;
		else
		{
			min = 0;
			hh++;
		}
	}
}
