#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;
	int d;

	m = 0;
	while (*(src + m) != '\0')
		m++;
	if (m >= n)
	{
		for (d = 0; d < n; d++)
			*(dest + d) = *(src + d);
	}
	else
	{
		for (d = 0; d <= m - 1; d++)
			*(dest + d) = *(src + d);
		for (; d < n; d++)
			*(dest + d) = '\0';
	}
	return (dest);
}
