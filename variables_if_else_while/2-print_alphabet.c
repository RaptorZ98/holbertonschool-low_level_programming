#include <stdio.h>

/**
 * main - prints the alphabet
 * Description: prints the alphabet only using printchar
 * Return: the correct return is 0
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
