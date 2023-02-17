#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Tells you if a random number is greater 5
 * description: random number is greater han 5 o less than 5
 * Return: The correct return of the program is 0
*/

int main(void)
{
	int n;
	int nc;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nc = n % 10;
	if (nc > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, nc);
	}
	else if (nc < 6 && nc != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, nc);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, nc);
	}
	return (0);
}
