#include <stdio.h>
#include "holberton.h"
/**
 * *_strcpy - Entry point
 *@dest: array
 *@src: string array
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i, crash, contador;

	crash = 1;
	contador = 0;

	while (crash)
	{
		if (*(src + contador) != '\0')
		{
			contador++;
		}
		else
			crash = 0;
	}


	for (i = 0; i <= contador; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
