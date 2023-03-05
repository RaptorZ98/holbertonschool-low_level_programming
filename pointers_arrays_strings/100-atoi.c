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
	int t;

	i = 1;
	c = 0;
	d = 0;
	while (t == 1)
	{
		if (s[c] == '\0')
			t = 0;
		else if (s[c] == '-')
			i = i * -1;
		else if (s[c] >= '1' && s[c] <= '9')
		{
			while (s[c] >= '1' && s[c] <= '9')
			{
				d = d * 10;
				d = d + (s[c] - 48);
				c++;
			}
		}
		c++;
	}
	return ((d * i));
}
