#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: int
 */

int main(int argc, char **argv)
{
	int n;
	int m;

	n = argv[1] + '0';
	m = argv[2] + '0';
	if (argc == 3)
	{
		printf("%d\n", n * m);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
