#include "holberton.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int iterator;

	for (iterator = 48; iterator <= 57; iterator++)
	{
		if (iterator != 50 && iterator != 52)
		{
			_putchar(iterator);
		}
	}
	_putchar('\n');
}
