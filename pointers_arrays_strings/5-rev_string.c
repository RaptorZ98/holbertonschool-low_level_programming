#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: parameter
 * Reutrn: void
 */

void rev_string(char *s)
{
	int a;
	int b;
	int c;
	int d;

	b = 0;
	for (a = 0; *(s + a) != '\0'; a++)
	{
	}
	char z[a];
	d = a;
	for (a  a - 1; a >= 0; a--)
	{
		*(z + b) = *(s + a); 
	i	b++;
	}
	for (c = 0; c < d; c++)
	{
		*(s + c) = *(z + c);
	}	
}
