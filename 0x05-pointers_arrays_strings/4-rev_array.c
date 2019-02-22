#include "holberton.h"
/**
 * reverse_array - Entry point
 *@a: Array pointer
 *@n: size array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int j, i, aux;

	aux = 0;

	for (i = 0, j = (n - 1); i < n / 2; i++, j--)
	{
		aux = a[j];
		a[j] = a[i];
		a[i] = aux;
	}


}
