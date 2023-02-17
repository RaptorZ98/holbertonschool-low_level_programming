#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - the program prints a random number
 *Description - The program creates a random number prints it
 *Return: the correct return is 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
