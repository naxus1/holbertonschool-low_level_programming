#include "function_pointers.h"
/**
 * array_iterator - Entry point
 * @array: Elements to array
 * @size: Size of array
 * @action: pointer to functions
 * Return: Always 0 (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
