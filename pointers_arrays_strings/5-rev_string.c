#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: parameter
 * Reutrn: void
 */

void rev_string(char *s)
{
	int n;
	int m;
	int k;
	
	i = 0;
	while (s[i] =! '\0')
		i++;
	for (m = 0; m <= n / 2; m++)
	{
		k = s[m];
		s[m] = s[(i - m - 1)];
		s[(i - m)];
	}
}
