#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: param 1
 * @f: param 2
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
