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
			_putchar('0' + r);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			m++;
		}
		putchar('\n')
		n++;
	}
}
