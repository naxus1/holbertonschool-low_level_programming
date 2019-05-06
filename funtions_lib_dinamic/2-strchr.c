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
	int i = 0;

	stringstr = s;

	while (*(stringstr + i) != '\0')
	{
		if (*(stringstr + i) == c)
		{
			return ((stringstr + i));
		}
		i++;
	}

	return (0);
}
