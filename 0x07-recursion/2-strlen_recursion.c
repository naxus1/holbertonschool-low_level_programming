#include "holberton.h"
/**
 * _strlen_recursion - Entry point
 *@s: string to comparate
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
		a = _strlen_recursion((s + 1));
		a++;
	}
	return (a);
}
