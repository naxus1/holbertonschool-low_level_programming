#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: first number
 * @av: second number
 * Return: the pointer. or null is errors
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int total = 0;
	char *pointer;

	if (ac == 0 || av == NULL)/* A */
		return (NULL);
	for (i = 0; i < ac; i++)/* B */
		for (j = 0; av[i][j]; j++)
			total++;
	pointer = (char *) malloc(sizeof(char) * (total + ac + 1));/* C */
	if (pointer == NULL)/* D */
	{
		free(pointer);
		return (NULL);
	}
	for (i = 0; i < ac; i++)/* E */
	{
		for (j = 0; av[i][j]; j++, k++)/* F */
			pointer[k] = av[i][j];
		pointer[k] = '\n';/* G */
		k++;
	}
	pointer[k] = '\0';/* H */
	return (pointer);
}
