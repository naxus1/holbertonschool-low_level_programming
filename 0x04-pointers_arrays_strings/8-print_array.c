#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Entry point
 *@a: pointer
 *@n: size of array
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
