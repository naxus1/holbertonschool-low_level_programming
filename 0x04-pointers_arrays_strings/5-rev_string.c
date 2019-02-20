#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Entry point
 * @s: Pointer to comparate
 * Return: Albways 0 (Success)
 */

void rev_string(char *s)
{

	int i, j, crash, aux, contador;

	crash = 1;
	contador = 0;
	j = 0;

	while (crash)
	{
		if (*(s + contador) != '\0')
		{
			contador++;
		}
		else
			crash = 0;
	}

	j = contador;
	i = 0;
	printf("%d", contador);

	while (i != j)
	{
		aux = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = aux;
		i++;
		j--;
	}

	*s = contador;

}
