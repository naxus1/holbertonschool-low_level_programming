#include "holberton.h"
/**
 * puts_half - Entry point
 *@str: pointer to process.
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i, crash, contador;

	crash = 1;
	contador = 0;

	while (crash)
	{
		if (*(str + contador) != '\0')
		{
			contador++;
		}
		else
			crash = 0;
	}

	if (contador % 2 == 0)
	{
		for (i = contador / 2; i < contador; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = (contador - 1) / 2; i < contador; i++)
		{
			_putchar(*(str + i));
		}
	}

	_putchar('\n');
}
