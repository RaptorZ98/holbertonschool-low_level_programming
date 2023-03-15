#include <stdio.h>
#define __FILENAME__ ((strrchr(__FILE__, '/') + 1 : __FILE__))

/**
 * main - does something
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILENAME__);
	return (0);
}
