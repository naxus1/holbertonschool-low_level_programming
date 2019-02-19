#include "holberton.h"
/**
 * swap_int - Entry point
 *@a: direccion pointer
 *@b: direccion pointer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
