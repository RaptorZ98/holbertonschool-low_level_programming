#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * Return: value of the last digit
 *@n: parameter
*/

int print_last_digit(int n)
{
	int m;

	if (n > 0)
	{
		m = n % 10;
		_putchar('0' + m);
		return (m);
}
	else if (n < 0)
	{
		m = n % -10;
		_putchar('0' + m);
		return (m);
	}
	else
	{
		_putchar('0' + 0);
		return (0);
	}
}
