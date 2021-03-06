#include "holberton.h"
/**
 * set_bit - value of a bit to 1 at given index
 * @n: pointer to a number
 * @index: bit.
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0)
	{
		return (-1);
	}

	else if (!n)
	{
		return (-1);
	}

	else if (index > (sizeof(*n) * 8) - 1)
	{
		return (-1);
	}

	else
	{
		*n = *n | 1 << index;
	}

	return (1);
}
