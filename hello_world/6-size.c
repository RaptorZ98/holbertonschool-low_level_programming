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
	long long int lonlintType;
	char charType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lonlintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(intType));
	return (0);
}
