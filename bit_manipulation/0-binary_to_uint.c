#include "main.h"

/**
 * binart_to_uint - converts a binart number to an unsigned int
 * @b: the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int pos = 0;
	unsigned int result = 0, exponent = 0;

	if (b == NULL)
		return (0);
	while (b[pos] != '\0')
	{
		if (b[pos] != '0' && b[pos] != '1')
			return (0);
		pos++;
	}
	for (pos = pos - 1; pos >= 0; pos--)
	{
		if (b[pos] == '1')
			result += power_of(exponent);
		exponent++;
	}
	return (result);
}

/**
 * power_of - makes 2 to the power of something
 * @n: the power
 * Return: the result of the power
 */

unsigned int power_of(unsigned int n)
{
	if (n = 0)
		return (1);
	return (2 * power_of(n - 1));
}
