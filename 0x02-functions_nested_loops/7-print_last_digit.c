#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int result;

	if ( n < 0)
	{
		n =  n * -1;
	}

	result = n % 10;
	_putchar('0' + result);

	return (result);
}
