#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int b;

	for (n = 0; *(dest + n) != '\0'; n++)
	{
	}
	for (b = 0; *(src + b) != '\0'; b++)
	{
		*(dest + n) = *(src + b);
		n++;
	}
	n++;
	*(dest + n) = *(src + b)
	return (dest); 
}
