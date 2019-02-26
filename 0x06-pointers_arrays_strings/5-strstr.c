#include "holberton.h"
/**
 * _strstr - Entry point
 *@haystack: string to search
 *@needle: string to comparate
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, cont, crash;

	cont = 0;
	j = 0;
	crash = 0;

	for (i = 0; (haystack[i] != '\0' && crash == 0); i++)
	{
		if ((haystack[i] == needle[j]) && (needle[j] != '\0'))
		{
			cont++;
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + (i - j + 1));
			crash = 1;
		}

	}

	return (0);
}
