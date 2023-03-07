#include "main.h"

/**
 * is_prime_number - return 1 if prime 0 if not
 * @n: parameter 1
 * Return: int
 */

int is_prime_number(int n)
{
	if (prime_checker(n, n) == 1)
		return (1);
	else
		return (0);
}

/**
 * prime_checker - auxiliar functions
 * @n: parameter 1
 * @m: parameter 2
 * Return: int
 */

int prime_checker(int n, int m)
{
	if (n % m == 0)
		return (1);
	else if (m < n)
		prime_checker(n, (m + 1));
	else
		return (-1);
}
