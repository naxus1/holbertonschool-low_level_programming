#include "holberton.h"
/**
 * leet - Entry point
 *@a: string to modified
 * Return: Always 0 (Success)
 */
char *leet(char *a)
{
	int i, j;

	char letter[] = "aAeEoOTtLl";
	char num_letter[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (a[i] == letter[j])
			{
				a[i] = num_letter[j];
			}
		}
	}

	return (a);
}
