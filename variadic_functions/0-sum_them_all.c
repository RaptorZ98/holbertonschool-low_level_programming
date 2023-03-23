#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: param 1
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, a;

	if (n == 0)
		return (0);
	i = 0;
	a = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		a += va_arg(ap, unsigned int);
	return (a);
}
