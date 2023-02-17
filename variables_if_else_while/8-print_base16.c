#include <stdio.h>

/**
 * main - print char hexa
 * Description: prtins all the single character of hexadecimal
 * Return: the correct return is 0
*/

int main(void)
{
	int n;
	char c;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
