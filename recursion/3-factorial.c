#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: parameter 1
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else (n > 0)
		return ((n * factorial(n + 1)));
}
