#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * @s: parameter 1
 * @accept: parameter 2
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;
	int d;
	unsigned int r;

	r = 0;
	n = 0;
	while (*(s + n) != '\0')
	{
		for (d = 0; *(accept + d) != '\0'; d++)
			if (*(s + n) == (*(accept + d)))
			{
				r++;
			}
			else if (*(s + n) == ' ' || (c[i] == '\t') || (c[i] == '\n')
			|| (c[i] == ',') || (c[i] == ';') || (c[i] == '.') || (c[i] == '!')
			|| (c[i] == '?') || (c[i] == '"') || (c[i] == '(') || (c[i] == ')')
			|| (c[i] == '{') || (c[i] == '}'))
				return (r);
		n++;
	}
	return (r);
}
