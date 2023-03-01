#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * Return: str
 * @n: parameter
 */

char *string_toupper(char *n)
{
	int p;

	p = 0;
	while (*(n + p) != '\0')
	{
		if (*(n + p) >= 'a' && *(n + p) <+ 'z')
			*(n + p) -= 32;
		p++;
	}
}
