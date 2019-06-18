#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Organizes an array using the sel sort method
 * @array: Array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, cont;
	int index, temp;

	if (array)
	{
		for (i = 0; i < size - 1; i++)
		{
			/* Find the smallest integer */
			index = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[index])
					index = j;
			}
			if (index != (int)i)
			{
				/* Swap */
				temp = array[index];
				array[index] = array[i];
				array[i] = temp;
				/* Print */
				for (cont = 0; cont < size; cont++)
				{
					printf("%d", array[cont]);
					if (cont < size - 1)
						printf(", ");
				}
				printf("\n");
			}
		}
	}
}
