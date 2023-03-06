#include "main.h"

/**
 * _pow_recurison - value of x raised to the power of y
 * @x: parameter 1
 * @y: parameter 2
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * x + _pow_recursion(x, (y - 1));
	else
		return 0;
}
