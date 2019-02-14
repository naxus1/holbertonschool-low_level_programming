#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: number that comparation
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int ite, esp;

	if (n > 0)
	{
		for (ite = 0; ite < n; ite++)
		{
			for (esp = 0; esp <= ite; esp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar(' ');
		_putchar('\n');
	}
}
