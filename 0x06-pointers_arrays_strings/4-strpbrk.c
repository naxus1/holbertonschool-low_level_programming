#include "holberton.h"
/**
 * _strpbrk - Entry point
 *@s: String to comparate
 *@accept: String to review
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, crash;

	crash = 0;

	for (i = 0; s[i] != '\0' && crash == 0; i++)
	{
		for (j = 0; accept[j] != '\0' && crash == 0; j++)
		{
			if (s[i] == accept[j])
			{
				crash = 1;
			}
		}
	}

	if (crash == 0)
	{
		return (0);
	}

	else
		return ((s + i) - 1);
}
