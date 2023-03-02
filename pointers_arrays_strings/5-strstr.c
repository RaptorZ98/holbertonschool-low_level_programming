#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: parameter 1
 * @needle: parameter 2
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int n;
	int m;
	int t;

	n = 0;
	if (needle[0] == '\0')
		return (&haystack[0]);
	while (haystack[n] != '\0')
	{
		t = n;
		if (haystack[t] == needle[0])
		{
			for (m = 0; needle[m] == haystack[t] && needle[m] != '\0'; m++)
			{
				t++;
			}
			if (needle[m] == '\0')
				return (&haystack[n]);
		}
		n++;
	}
	return ('\0');
}
