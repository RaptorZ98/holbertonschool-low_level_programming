#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Return: dest char
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int r;
	int t;

	for (m = 0; *(dest + m) != '\0'; m++)
	{
	}
	r = m;
	for (t = 0; t < n; t++)
	{
		*(dest + r) = *(src + t);
		r++;
	}
	return (dest);
}
