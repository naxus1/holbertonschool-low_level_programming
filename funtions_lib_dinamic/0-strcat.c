#include "holberton.h"
/**
 * _strcat - Entry point
 *@dest: pointer
 *@src: pointer to copy
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}