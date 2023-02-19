#include "main.h"

/**
 * _islower - checks if lowercase
 *
 * Return: return 1 if lowercase 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);	
	return (0);
}
