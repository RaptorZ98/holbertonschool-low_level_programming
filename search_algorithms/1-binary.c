#include "search_algos.h"

/**
 * binary_search - searches an array for a value with binary search
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search
 * Return: the index where value is located, if not -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int)size - 1, res = 0;
	int len = (int)size;
	int *aux = array;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		print_array(aux, len);
		res = (left + right) / 2;
		len /= 2;
		//if (len % 2 != 0 && len != 1)
		//	len--;
		if (array[res] < value)
		{
			left = res + 1;
			aux = &array[res + 1];
		}
		else if (array[res] > value)
		{
			right = res - 1;
			aux = &array[res - len + 1];
			len--;
		}
		else
		{
			return (res);
		}
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, int size)
{
	int i;

	i = 0;
	printf("Searching in array: ");
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
