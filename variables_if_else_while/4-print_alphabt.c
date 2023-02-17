#include <stdio.h>

/**
 * main - prtin alphabet without some letters
 * Description: prints alphabet without q and e
 * Return: the correct return is 0
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
