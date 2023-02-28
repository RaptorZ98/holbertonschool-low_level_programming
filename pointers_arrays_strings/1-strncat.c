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

	t = 0;
	for (m = 0; *(dest + m) != '\0'; m++)
	{
	}
	for (r = m; r < n; r++);
	{
		*(dest + r) = *(src + t);
		t++;
	}
	return (dest);
}
