#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		*(dest + m) = *(src + m);
	return (dest);
}
