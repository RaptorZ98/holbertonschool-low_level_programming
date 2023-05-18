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
	size_t len = 0;
	int result = -1;

	if (array == NULL)
		return (-1);
	while (len < size)
	{
		printf("Value checked array[%zu] = [%d]\n", len, array[len]);
		if (array[len] == value)
		{
			result = len;
			len++;
			break;
		}
		len++;
	}
	printf("Found %d at index: %zu\n", result, len - 1);
	return (result);
}
