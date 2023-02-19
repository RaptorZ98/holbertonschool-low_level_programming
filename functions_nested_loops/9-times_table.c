#include "main.h"

/**
 * times_table - prints the 9 tables
 * Return: void
*/

void times_table(void)
{
	int n;
	int m;
	int r;

	n = 0;
	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			r = m * n;
			if (r < 10)
			{
				_putchar('0' + r);
				if (m < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				m++;
			}
			else
			{
				_putchar('0' + (r / 10));
				_putchar('0' + (r % 10));
				if (m < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				m++;
			}
		}
		_putchar('\n');
		n++;
	}
}
