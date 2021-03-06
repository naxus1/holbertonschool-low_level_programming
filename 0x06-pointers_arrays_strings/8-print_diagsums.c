#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 *@a: Array to comparate
 *@size: size to array
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sum, i;

	sum = 0;

	for (i = 0; i <= size * size; i += size + 1)
	{
		sum += a[i];
	}

	printf("%d, ", sum);

	sum = 0;
	for (i = size - 1; i + size <= size * size; i += size - 1)
	{
		sum += a[i];
	}
	printf("%d\n", sum);
}
