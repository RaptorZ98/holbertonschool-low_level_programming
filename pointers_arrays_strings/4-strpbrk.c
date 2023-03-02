#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	a = 0;
	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
			if (s[a] == accept[b])
				return (&s[a]);
		a++;
	}
	return ('\0');
}
