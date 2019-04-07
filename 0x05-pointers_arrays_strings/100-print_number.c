#include "holberton.h"

/**
 * print_number - integer using putchar
 * @n: integer
 *
 * return: void
 */
void print_number(int n)
{
	int i = 0, num = 0, aux = 0, size = 0;

	num = n % 10;

	if (num < 0)
	{
		_putchar('-');
		num *= (-1);
	}

	n = (n / 10);
	if (n < 0)
		n = n * (-1);
	size  = 0;

	i = 1;

	while (aux > 0)
	{
		size += 1;
		i *= 10;
		aux /= 10;
	}
	i /= 10;
	while (i >= 1)
	{
		_putchar(n / i + '0');
		n = n % i;
		i /= 10;
	}
	_putchar(num + '0');
}
