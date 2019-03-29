#include "holberton.h"
/**
 * binary_to_uint - transform to binary
 * @b: string to change
 * Return:unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	unsigned int change;

	change = 0;
	sum = 0;

	if (b == NULL)
		return (0);
	while (b[change] != '\0')
	{
		if (b[change] != '0' && b[change] != '1')
		{
			return (0);
		}

		sum <<= 1;

		if (b[change] == '1')
		{
			sum ^= 1;
		}

		change++;
	}

	return (sum);
}
