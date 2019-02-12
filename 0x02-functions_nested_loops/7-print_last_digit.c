#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @n: character of comparation
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result < 0)
	{
		result = -result;
	}
	_putchar('0' + result);

	return (result);
}
