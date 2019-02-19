#include "holberton.h"
/**
 * _puts - Retorn the value of a string
 *@str: string to return
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int crash;

	crash = 0;

	while (crash == 0)
	{
		if (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		else
			crash = 1;
	}

	_putchar('\n');
}
