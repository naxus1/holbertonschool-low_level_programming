#include "holberton.h"
/**
 * print_triangle - Entry point
 * @size: size of variable to comparate
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if (b >= size - a)
				{
					_putchar(35);
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
