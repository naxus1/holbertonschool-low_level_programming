#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Entry point
 * @s: Pointer to comparate
 * Return: Albways 0 (Success)
 */

void rev_string(char *s)
{

	int i, j, crash, contador;

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

	char a[contador]={0};

	for (i = contador; i >= 0; i--)
	{
		a[j] = s[i];
		j++;
	}


}
