#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int n;
	int m;

	n = 0;
	m = 0;
	while (*(s1 + n) != '\0')
		n++;
	while (*(s2 + m) != '\0')
		m++;
	if (n > m)
		return (15);
	else if (n < m)
		return (-15);
	else
		return (0);
}
