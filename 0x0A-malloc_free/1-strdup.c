#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Entry point
 * @str:String to process
 * Return: Pointer 0 (Success)
 */

char *_strdup(char *str)
{
	int size, i;
	char *pointer_ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{}
	size++;

	pointer_ptr = (char *) malloc(sizeof(char) * size);

	if (pointer_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		pointer_ptr[i] = str[i];
	}

	return (pointer_ptr);
}
