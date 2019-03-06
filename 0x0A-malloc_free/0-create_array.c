#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: Size of pointer
 * @c: Char to input
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *myarray = malloc(sizeof(c) * size);
	unsigned int iterator;

	if (size == 0)
	{
		return (0);
	}

	for (iterator = 0; iterator < size; iterator++)
	{
		myarray[iterator] = c;
	}

	return (myarray);
}
