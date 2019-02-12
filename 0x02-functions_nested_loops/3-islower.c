#include "holberton.h"

/**
 * _islower - Entry point
 * @c: character to print
 *
 * _islower -  This funtion indicated if a character is lower
 *
 * Return:  0 to 1.
 */

int _islower(int c)
{
	int a;

	if (c >= 97 && c <= 122)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}

	return (a);
}
