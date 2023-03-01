#include "main.h"

/**
 * leet - encodes 1337
 * @m: parameter
 * Return: char
 */


char *leet(char *m)
{
	int n;
	int d;
	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char b[5] = {'4', '3', '0', '7', '1'};

	n = 0;
	while (*(m + n) != '\0')
	{
		for (d = 0; d < 5; d++)
			if (*(m + n) == *(a + d) || *(m + n) == (*(a + d) - 32))
				*(m + n) = *(b + d);
		n++;
	}
	return (m);
}
