#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: parameter 1
 * @c: parameter 2
 * Return: char
 */


char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return ((s + 4 * i));
		i++;
	}
	return ('\0');
}
