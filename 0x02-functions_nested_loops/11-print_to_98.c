#include "holberton.h"
/**
 * print_to_98 - Entry point
 *
 * Return: Always 0 (Success)
 */
void quotes_spaces(void);
void print_result(int i);

void print_to_98(int n)
{
	int iterator, mod, neg_num;

	if (n < 99)
	{
		for (iterator = n; iterator <= 98; iterator++)
		{
			if (iterator / 10 == 0)
			{
				if (iterator < 0)
				{
					_putchar('-');
					neg_num = iterator * -1;
					_putchar(neg_num + '0');
					quotes_spaces();
				}

				else
				{
					_putchar(iterator + '0');
					quotes_spaces();
				}
			}
			else
			{

				if (iterator < 0)
				{
					_putchar('-');
					neg_num = iterator * -1;
					print_result(iterator);
				}

				else
				{
					print_result(iterator);
				}

				if (iterator < 98)
				{
					quotes_spaces();
				}
			}
		}
	}

	else
	{

			for (iterator = n; iterator >= 98; iterator--)
			{

				if (iterator <= 99)
				{
					print_result(iterator);
					if (iterator != 98)
					{
						quotes_spaces();
					}
				}
				else
				{
					mod = iterator / 10;
					print_result(iterator);
					_putchar(iterator % 10 + '0');
					quotes_spaces();
				}
			}
	}

	_putchar('\n');
}
/**
 * quotes_spaces - Entry point
 *
 * Return: Always 0 (Success)
 */
void quotes_spaces(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 * print_result - Entry point
 * @i: character
 * Return: Always 0 (Success)
 */

void print_result(int i)
{
	_putchar(i / 10 + '0');
	_putchar(i % 10 + '0');
}
