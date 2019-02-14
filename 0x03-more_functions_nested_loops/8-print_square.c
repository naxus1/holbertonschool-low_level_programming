#include "holberton.h"
/**
 * print_square - Entry point
 *@size: tam of square
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int w, tam;

	if (size > 0)
	{
		for (tam = 0; tam < size; tam++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
