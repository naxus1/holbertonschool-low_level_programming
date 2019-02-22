#include "holberton.h"
/**
 * rot13 - Entry point
 *@s: String to transform
 * Return: Always 0 (Success)
 */
char *rot13(char *s)
{
	int i, j;

	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alph2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alph[j]; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = alph2[j];
				break;
			}
		}
	}
	return (s);
}
