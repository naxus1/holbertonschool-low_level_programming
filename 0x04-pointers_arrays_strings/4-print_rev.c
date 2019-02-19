#include "holberton.h"
/**
 * print_rev - Entry point
 * @s: Pointer to comparate
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{

	int i, crash, contador;

	crash = 1;
	contador = 0;

	while (crash)
	{
		if (*(s + contador) != '\0')
		{
			contador++;
		}
		else
			crash = 0;
	}


	for (i = contador; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
