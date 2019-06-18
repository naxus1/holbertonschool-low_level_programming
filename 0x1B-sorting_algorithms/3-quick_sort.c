#include "sort.h"

void _sort(int *array, int low, int high, size_t size);
int partition(int *array, int left, int right, size_t size);

/**
 *quick_sort - implement quicksort
 *@array: array
 *@size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_sort(array, 0, size - 1, size);
}

/**
 * _sort - _sort function partitioned array
 * @array: array to sort
 * @size: size of array
 * @low: first position array
 * @hight: last position array
 */
void _sort(int *array, int low, int hight, size_t size)
{
	int value_partition = 0;

	if (low < hight)
	{
		value_partition  = partition(array, low, hight, size);

		_sort(array, low, value_partition - 1, size);
		_sort(array, value_partition + 1, high, size);
	}
}

/**
 * partition - finds swap smaller items
 * @array: array to sort
 * @size: size of array
 * @left: first position array
 * @right: last position array
 * Return: int
 */
int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];
	int i = left - 1;
	int j;
	int temp;

	for (j = left; j <= right - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			if (i != j)
				print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[right];
	array[right] = temp;
	if (i + 1 != right)
		print_array(array, size);
	return (i + 1);
}
