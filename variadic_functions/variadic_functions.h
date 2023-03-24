#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int printc(va_list a);
int printi(va_list a);
int printff(va_list a);
int prints(va_list a);

/**
 * struct les - Struct les
 *
 * @op: --
 * @f: --
 */
typedef struct les
{
	char *op;
	int (*f)(va_list a);
} lists;
#endif
