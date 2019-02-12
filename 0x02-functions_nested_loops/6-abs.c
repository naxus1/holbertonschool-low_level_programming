#include "holberton.h"
/**
 * main - Entry point
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
