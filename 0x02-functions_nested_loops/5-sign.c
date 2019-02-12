#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{

	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}

	else if (n < 0)
	{
		sign = -1;
		_putchar('-');
	}

	return(sign);
}
