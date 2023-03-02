#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: parameter 1
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int n;
	int m;

	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[n][m]);
		_putchar('\n');
	}
}
