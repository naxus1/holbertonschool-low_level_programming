#include "holberton.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int rep, ite;

	for (rep = 48; rep <= 57; rep++)
	{
		for (ite = 0; ite <= 14; ite++)
		{
			if (ite / 10 == 0)
			{
				_putchar(ite + '0');
			}
			else
			{
				_putchar(ite / 10 + '0');
				_putchar(ite % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
