#include "search_algos.h"

/**
 * linear_search - Finds value in an array.
 * @array: Pointer to the first element
 * @size: Size of array
 * @value: the value to search for
 * Return: first index.
 */


int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
