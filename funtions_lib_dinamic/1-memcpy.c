#include "holberton.h"
/**
 * _memcpy - Entry point
 *@dest: Array where go to copy content
 *@src: Content to copy to dest
 *@n: numero de bytes o char to copy
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
