#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Checked that alloc no fails
 * @b: size for alloc
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *s1;

	if (b <= 0)
		return (0);

	s1 = malloc(b);

	if (s1 == NULL)
	{
		exit(98);
	}

	return (s1);
}
