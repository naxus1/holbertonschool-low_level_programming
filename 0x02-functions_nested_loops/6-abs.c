#include "holberton.h"
/**
 * _abs - Entry point
 * @n: the character to comparate
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{

	int result;

	if (n < 0)
	{
		result = n * -1;
	}

	else
		result = n;


	return (result);
}
