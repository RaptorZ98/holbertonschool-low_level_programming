#include "main.h"
#include <stdio.h>

/**
 * main - prints program name 
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: void
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
