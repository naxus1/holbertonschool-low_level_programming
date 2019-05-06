#include "holberton.h"

/**
 * _isalpha - Entry point
 * @c: Character to comparate
 *
 * Return: Always 1 to 0 (Success)
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c <= 120) || (c >= 65 && c <= 90))
	{
		result = 1;
	}

	else
		result = 0;

	return (result);
}
