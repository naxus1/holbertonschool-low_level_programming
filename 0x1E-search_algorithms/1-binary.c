#include "search_algos.h"
void print_array(int *array, size_t left, size_t right);

/**
 * binary_search - This side tool will print the values on the within array
 *
 * @array: Pointer to array.
 * @size: Size of array.
 * @value: Value to searh.
 *
 * Return: Index.
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
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}

/**
 * print_array - Print array.
 * @array: Pointer to array.
 * @left: Pointer to first position to array.
 * @right: pointer to last position to array.
 */

void print_array(int *array, size_t left, size_t right)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = left;  i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
		else
			printf("\n");
	}
}
