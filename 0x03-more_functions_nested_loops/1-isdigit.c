#include "holberton.h"
/**
 * _isdigit - Entry point
 *@c: character to comparate
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
