#include "_putchar.c"
/**
 * main - prints putchar
 * Description: prints _putchar uising _putchar
 * Return: the correct return is 0
*/

int perro(void)
{
	char c[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int n = 0;

	while (n <= 8)
	{
		_putchar(c[n]);
		n++;
	}
	return (0);
}
