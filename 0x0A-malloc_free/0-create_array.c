#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: Size of pointer
 * @c: Char to input
 * Return: Pointer
 */

char *create_array(unsigned int size, char c)
{
	char *myarray;
	unsigned int iterator;

	if (size == 0)
	{
		return (NULL);
	}

	myarray = (char*) malloc(sizeof(c) * size);

	if(myarray == NULL)
	{
		return (NULL);
	}

	for (iterator = 0; iterator < size; iterator++)
	{
		myarray[iterator] = c;
	}

	return (myarray);
}
