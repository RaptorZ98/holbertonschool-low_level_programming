#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: param 1
 * @n: param 2
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		if (separator != NULL)
			printf("%s%s", s, separator);
		else
			printf("%s", s);
	}
	if (n != 0)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s\n", s);
	}
}
