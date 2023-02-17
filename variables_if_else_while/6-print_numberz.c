#include <stdio.h>

/**
 * main - prints all numbers base 10
 * Description: prints all numbers from base 10 only with putchar
 * Return: teh correct return is 0
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
