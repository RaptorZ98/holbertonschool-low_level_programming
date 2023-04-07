#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: the integer to check
 * @index: the bit of the integer to be checked
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1;

	if (index >= 65)
		return (-1);
	if ((n & (num << index)) != 0)
	{
		return (1);
	}
	else
		return (0);
}
