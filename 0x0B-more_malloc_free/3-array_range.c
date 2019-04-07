#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - array of integers
 * @min: number low
 * @max: number hight
 * Return: a pointer.
 */
int *array_range(int min, int max)
{
	int i, lenght;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	lenght = (max - min + 1);

	arr = malloc(sizeof(int) * lenght);

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < lenght; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
