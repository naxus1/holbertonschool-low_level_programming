#include "holberton.h"
/**
 * _strcmp - comparate two strings
 *@s1: Pointer one to comparate
 *@s2: Pointer two to comparate
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int sizes1, sizes2, crash, i, result;

	i = 0;
	crash = 0;
	result = 0;

	for (sizes1 = 0; s1[sizes1] != '\0'; sizes1++)
	{}
	for (sizes2 = 0; s2[sizes2] != '\0'; sizes2++)
	{}
	if (sizes1 == sizes2)
	{
		while (s1[i] != '\0' && crash == 0)
		{
			if (s1[i] < s2[i])
			{
				result = -15;
				crash = 1;
			}
			else if (s1[i] > s2[i])
			{
				result = 15;
				crash = 1;
			}
			else if (i == sizes1)
			{
				result = 0;
				crash = 1;
			}
			i++;
		}
	}
	else
		result = sizes1 < sizes2 ? -15 : 15;

	return (result);
}
