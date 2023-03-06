#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: parameter 1
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return ((1 + _strlen_recursion(&(s[1])));
	return (1);
}
