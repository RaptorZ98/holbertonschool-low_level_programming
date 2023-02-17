#include <stdio.h>

/**
 * main - prints all numbers of base 10
 * Description: prints all the numbers of base 10 0-9
 * Return: the correct return i 0
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
