#include "main.h"

/**
 * _strcpy - return the pointer of dest
 * @dest: parameter 1
 * @src: parameter 2
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; *(src + n) != '\0'; n++)
		*(dest + n) = *(src + n);
	*(dest + n) = *(src + n);
	return (dest);
}
