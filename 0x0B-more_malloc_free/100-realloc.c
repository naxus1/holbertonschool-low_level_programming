#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - Realloc a memory block
 * @ptr: Pointer to memory
 * @old_size: Size of previously
 * @new_size: Size of newly
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr,  *aux_ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	aux_ptr = ptr;
	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = aux_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
