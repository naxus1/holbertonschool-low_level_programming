#include "holberton.h"

/**
 * wildcmp - comparate
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */
int wildcmp(char *a, char *b)
{
	if (*a == '\0')
	{
		/* Find if last character of s2 is a * or not */
		if (*b != '\0' && *b == '*')
			return (wildcmp(a, b + 1));
		return (*b == '\0');
	}
	if (*a == *b)
		return (wildcmp(a + 1, b + 1));

	if (*b == '*')
		return (wildcmp(a + 1, b) || wildcmp(a, b + 1));

	return (0);
}
