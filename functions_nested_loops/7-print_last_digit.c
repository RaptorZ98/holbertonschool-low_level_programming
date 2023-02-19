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
		return (m);
	}
	else if (n < 0)
	{
		m = -n % 10;
		return (m);
	}
	else
	{
		return (0);
	}
}
