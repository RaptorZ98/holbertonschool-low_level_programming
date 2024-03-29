#include "search_algos.h"

/**
 * linear_search - searches for a value in array using linear search algorthm
 * @array: the array to search for the value
 * @value: the value to search for
 * @size: the size of the array
 * Return: the first index where value is located, if not located -1
*/
int linear_search(int *array, size_t size, int value)
{
	int len = 0, result = -1;

	if (array == NULL)
		return (-1);
	while (len < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", len, array[len]);
		if (array[len] == value)
		{
			result = len;
			break;
		}
		len++;
	}
	return (result);
}
