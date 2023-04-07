#include "main.h"

/**
 * flip_bits - retrun bits changed to make another number
 * @n: first number to compare
 * @m: seconf number to compare
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 1;
	int result = 0, lup;

	num <<= 62;
	for (lup = 0; lup <= 62; lup++)
	{
		if (((n & num) != 0) && ((m & num) != 0))
		{
		}
		else
			result++;
		num >>= 1;
	}
	return (result);
}
