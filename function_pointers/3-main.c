#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: param 1
 * @argv: param 2
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;
	int n;
	int (*f)(int, int);

	if (argc != 4)
		exit(98);

	i = atoi(argv[1]);
	n = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && n == 0)
		exit(100);

	f = get_op_func(argv[2]);
	if (f == NULL)
		exit(99);
	printf("%d\n", f(i, n));
	return (0);
}
