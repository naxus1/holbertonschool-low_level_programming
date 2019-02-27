#include "holberton.h"
/**
 * factorial - Entry point
 *@n: number to return to factorial
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n  > 0)
	{

		if (n == 1)
		{
			return (n);
		}
		else
			return (n * factorial (n - 1));
	}

	else
	{
		return (-1);
	}

}
