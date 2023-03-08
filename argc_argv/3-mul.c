#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
