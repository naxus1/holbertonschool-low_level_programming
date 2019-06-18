#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - Organizes an array of size size, using the bubble method
 *
 * @array: int array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)

{
	size_t i = 0, j = 0;
	int temp;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
