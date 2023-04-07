#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the int to change
 * @index: the index of the bit to change
 * Return: 1 if ti works, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index >= 63)
		return (-1);
	if ((*n & (num << index)) != 0)
		*n = (*n ^ (num << index));
	return (1);
}
