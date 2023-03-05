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
	int x;
	int t;

	i = 1;
	c = 0;
	while (s(t) != '\0')
		t++;
	while (t == 1)
	{
		if (s[c] == '-')
			i = i * -1;
		else if (s[c] >= 48 && s[c] <= 57)
		{
			d = (s[c] - '0');
			c++;
			x = 1;
			while (s[c] >= 48 && s[c] <= 57 && s[c] != '\0')
			{
				d = d + ((s[x] - '0') * 10 * x);
				x++;
				c++;
			}
			return ((d * i));
		}
		else if (s[c] == '\0')
			t = 0;
		c++;
	}
	return (0);
}
