#include "holberton.h"
/**
 * print_binary - print the binary.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int j;

	j = n;
	while (j > 0)
	{
		j >>= 1;
		i++;
	}
	if (i != 0)
		i--;
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		i--;
	}
}
