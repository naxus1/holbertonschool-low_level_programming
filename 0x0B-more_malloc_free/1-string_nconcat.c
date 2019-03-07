#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Return concat 2 strings
 * @s1:String 1
 * @s2:string 2
 * @n: bits to copy in to pointer
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_array;
	unsigned int j, i, ite;

	for (i = 0; s1[i] != '\0'; i++)
	{}

	for (j = 0; s2[j] != '\0'; j++)
	{}

	if (n >= j)
		n = j + i;

	new_array = malloc(sizeof(char *) * n + 1);

	if (new_array == NULL)
		return (NULL);

	for (ite = 0; ite < i; ite++)
		new_array[ite] = s1[ite];

	for (ite = 0; ite < n; ite++, i++)
		new_array[i] = s2[ite];

	new_array[i] = '\0';

	return (new_array);
}
