#include "main.h"
#include <stdio.h>

/**
 * main - prtins number of arguments
 * @argv: parameter 1
 * @argc: parameter 2
 * Return: int
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
