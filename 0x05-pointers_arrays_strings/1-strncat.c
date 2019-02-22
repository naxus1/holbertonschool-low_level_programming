#include "holberton.h"
/**
 * _strncat - Entry point
 *@dest:Pointer comparate
 *@src: pointer two comparate.
 *@n: size
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int iter_des, j;

	for (iter_des = 0; dest[iter_des]; iter_des++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[iter_des] = src[j];
		iter_des++;
	}

	return (dest);
}
