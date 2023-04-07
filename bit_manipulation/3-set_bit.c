#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer to change
 * @index: the index to change in n
 * Return: 1 if it worked, or -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;
	if (index >= 63)
		return (-1);
	*n = (*n | (num << index));
	return (0);
}
