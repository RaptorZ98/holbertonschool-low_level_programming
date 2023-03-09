#include "main.h"

/**
 * _isupper - chechs for uppercase character
 * Return: 1 if uppercase 0 if not
 * @c: parameter
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
