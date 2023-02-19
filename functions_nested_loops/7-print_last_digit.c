#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * Return: value of the last digit
 *@n: parameter
*/

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = -m;
		_putchar('0' + m);
		return (m);
	}
	else
	{
		_putchar('0' + m);
		return (m);
	}
}
