#include <stdio.h>

/**
 * main - prints the size of several types
 * Descriptions: prints the size of the most common variable types
 * Return: the correct return is 0
 */

int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long int longlonintType;
	char charType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlonintType));
	printf("Size of float: %zu byte(s)\n", sizeof(intType));
	return (0);
}
