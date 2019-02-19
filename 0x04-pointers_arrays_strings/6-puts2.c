#include "holberton.h"
#include <stdio.h>

void puts2(char *str)
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


	for (i = 0; i < contador; i+=2)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
