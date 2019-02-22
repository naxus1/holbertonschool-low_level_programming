#include "holberton.h"
/**
 * _strcmp - comparate two strings
 *@s1: Pointer one to comparate
 *@s2: Pointer two to comparate
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i, sizes1, cont;

	cont = 0;

	for (sizes1 = 0; s1[sizes1] != '\0'; sizes1++)
	{}

	for (i = 0; i < sizes1; i++)
	{
		if(s1[i] != s2[i])
		{
			cont = s1[i] - s2[i];
			i = sizes1;
		}
	}

	return (cont);
}
