#include "main.h"

/**
 * _isalpha - checks if lowercase
 * Return: 1 if it is lowercase 0 if not
 * @c: parameter
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
