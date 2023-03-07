#include "main.h"

/**
 * _sqrt_recursion - return natural sqare root of a number
 * @n: parameter 1
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (_nsqare(n, 2));
}

/**
 * _nsqare - auxiliar function
 * @n: parameter 1
 * @m: parameter 2
 * Return: int
 */

int _nsqare(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m < n / 2)
		return (_nsqare(n, (m + 1)));
	else
		return (-1);
}
