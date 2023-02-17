#include <stdio.h>

/**
 * main - prints alhabet in reverse
 * Description: prints all the alphabet in reverse putchar
 * Return: the correct return is 0
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
