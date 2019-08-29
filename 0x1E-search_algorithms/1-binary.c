#include "search_algos.h"

void print_array(int *array, size_t left, size_t right)

/**
 * printvalues - This side tool will print the values on the within array
 *
 * @array: array is a pointer to the first element of array
 * @l: left side of array
 * @r: right side of an array
 *
 * Return: None, just print
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;
		print_array(array, left, right);

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			r = middle - 1;
		else
			return (middle);
	}
	return (-1);
}

void print_array(int *array, size_t left, size_t right)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = left;  i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}
}
