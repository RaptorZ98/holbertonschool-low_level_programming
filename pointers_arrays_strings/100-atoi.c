#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: parameter
 * Return: return the int
 */

int _atoi(char *s)
{
	int i;
	int d;
	int c;

	i = 1;
	c = 0;
	while (s[c])
	{
		if (s[c] == '-')
			i = c * -1;
		else if (s[c] >= 48 && s[c] <= 57)
		{
			d = s[c] - '0';
			d = i * d;
			return (d);
		}
		c++;
	}
	return (0);
}
