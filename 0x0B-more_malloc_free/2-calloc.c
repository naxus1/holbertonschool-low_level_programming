#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Return Pointer
 * @nmemb: type
 * @size: Number
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *myarray, i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	myarray = malloc(sizeof(int) * nmemb);

	if (myarray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		myarray[i] = 0;
	}

	return (myarray);
}
