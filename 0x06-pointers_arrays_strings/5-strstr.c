#include "holberton.h"
/**
 * _strstr - Entry point
 *@haystack: string to search
 *@needle: string to comparate
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, sizeStr, crash;

	j = 0;
	crash = 0;

	for(sizeStr = 0; needle[sizeStr] != '\0'; sizeStr++)
	{}

	for (i = 0; (haystack[i] != '\0' && crash == 0); i++)
	{
		if(sizeStr == 0)
		{
			return (haystack);
		}
		if ((haystack[i] == needle[j]) && (needle[j] != '\0'))
		{
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
