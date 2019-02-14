#include "holberton.h"
/**
 * print_line - Entry point
 * @n: character iterator
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int num;


	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}

	else
	{
		_putchar('\n');
	}
}
