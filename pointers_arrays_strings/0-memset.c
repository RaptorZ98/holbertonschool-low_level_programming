#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: char
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		*(s + d) = b;
	}
	return (s);
}
