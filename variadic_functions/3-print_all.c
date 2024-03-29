#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printc - print
 * @l: param 1
 * Return: int
 */

int printc(va_list l)
{
	printf("%c", va_arg(l, int));
	return (0);
}

/**
 * printi - print
 * @l: param 1
 * Return: int
 */

int printi(va_list l)
{
	printf("%d", va_arg(l, int));
	return (0);
}

/**
 * printff - prints
 * @l: param 1
 * Return: int
 */

int printff(va_list l)
{
	printf("%f", va_arg(l, double));
	return (0);
}

/**
 * prints - prints
 * @l: param 1
 * Return: int
 */

int prints(va_list l)
{
	char *t;

	t = va_arg(l, char *);
	if (t == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", t);
	return (0);
}

/**
 * print_all - prints
 * @format: param 1
 * Return: int
 */

void print_all(const char * const format, ...)
{
	int n, m;
	char *st1 = "";
	char *st2 = ", ";
	va_list ap;
	lists ls[] = {
		{"c", printc},
		{"i", printi},
		{"s", prints},
		{"f", printff},
		{NULL, NULL}
	};

	va_start(ap, format);
	n = 0;
	while (format != NULL && format[n])
	{
		m = 0;
		while (ls[m].f != NULL)
		{
			if (format[n] == *(ls[m].op))
			{
				printf("%s", st1);
				ls[m].f(ap);
				st1 = st2;
			}
			m++;
		}
		n++;
	}
	printf("\n");
	va_end(ap);
}
