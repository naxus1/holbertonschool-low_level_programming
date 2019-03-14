#include "function_pointers.h"
/**
 * int_index - Entry point
 * @array: array values
 * @size: size of array
 * @cmp: pointer a funtion
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
