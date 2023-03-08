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
	if (argc == 3)
	{
		printf("%d\n", (argv[1] + '0') * (argv[2] + '0'));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
