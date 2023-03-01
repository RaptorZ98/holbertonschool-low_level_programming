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
	int d;

	i = 0;
	d = 0;
	while (i == 0)
	{
		if (s[d] != '\0' && s[d] != c)
			d++;
		else if (s[d] == '\0')
			i = 1;
		else if (s[d] == c)
			i = 2;
	}
	if (i == 2)
		return (&(s[d]));
	else
		return (\0);
}
