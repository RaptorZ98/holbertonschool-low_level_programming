#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - exe funct
 * @array: param 1
 * @size: param 2
 * @action: param 3
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (action != NULL)
	{
		for (n = 0; n < size; n++)
			action((array[n]));
	}
}
