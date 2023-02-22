#include "main.h"
#include <stdio.h>

/**
 * main - prints 1 to 100
 * Return: void
 */

int main(void)
{
	int n;
	int fuz;
	int buz;

	for (n = 1; n <= 100; n++)
	{
		fuz = n % 3;
		buz = n % 5;
		if (fuz == 0 && buz == 0)
		{
			printf("Fizz Buzz ");
		}
		else if (fuz == 0)
		{
			printf("Fizz ");
		}
		else if (buz == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	return (0);
}
