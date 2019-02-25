#include "holberton.h"
/**
 * _strchr - Entry point
 *@s: String to comparate
 *@c: Character to search
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	char *stringstr;

	stringstr = s;

	while (*stringstr != '\0')
	{
		if (*stringstr == c)
		{
			return (stringstr);
		}
		stringstr++;
	}

	return ('\0');
}
