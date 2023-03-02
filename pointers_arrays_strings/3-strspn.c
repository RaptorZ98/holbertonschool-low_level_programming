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
	i = 0;
	while (*(s + i) != '\0')
	{
		for (d = 0; *(accept + d) != '\0'; d++)
			if (*(s + i) == (*(accept + d)))
			{
				r++;
			}
			else if (*(s + i) == ' ' || (s[i] == '\t') || (s[i] == '\n')
			|| (s[i] == ',') || (s[i] == ';') || (s[i] == '.') || (s[i] == '!')
			|| (s[i] == '?') || (s[i] == '"') || (s[i] == '(') || (s[i] == ')')
			|| (s[i] == '{') || (s[i] == '}'))
				return (r);
		i++;
	}
	return (r);
}
