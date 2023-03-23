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
	int i;

	va_start(ap, n);
	x = va_arg(ap, unsigned int);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, unsigned int);
		if (separator != NULL)
			printf("%d%s", x, separator);
		else
			printf("%d", x);
	}
	printf("\n");
}
