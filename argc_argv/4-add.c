#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: int
 */

int main(int argc, char **argv)
{
	int i;
	int m;
	int r;
	int t;

	r = 0;
	if (argc < 1)
		printf("0\n");
	for(m = 1; m < argc; m++)
		for (i = 0; argv[m][i] != '\0'; i++)
		{
			if (argv[m][i] >= '0' && argv[m][i] <= '9')
			{
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	for (t = 1; t < argc; t++)
	{
		r += atoi(argv[t]);
	}
	printf("%d\n", r);
	return (0);
}
