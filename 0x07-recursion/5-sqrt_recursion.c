#include "holberton.h"
/**
 * _sqrt_recursion -  square root of a number
 * @n: integer
 * Return: number and n to compare
 */
int _sqrt_recursion(int n)
{
	return (prime(1, n));
}
/**
 * prime - find square number
 * @x: integer
 * @y: integer
 * Return: return x compared to y
 */
int prime(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (prime(x += 1, y));
	}
}
