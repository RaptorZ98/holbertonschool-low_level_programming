#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: param 1
 * @n: param 2
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, x;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, unsigned int);
		if (separator != NULL && i == n - 1)
			printf("%u\n", x);
		else if (separator != NULL)
			printf("%d%s", x, separator);
		else if (separator == NULL)
			printf("%d", x);
	}
}
