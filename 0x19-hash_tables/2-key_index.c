#include "hash_tables.h"
/**
 * key_index - return index
 * @key: key
 * @size: size of the array
 *
 * Return: return index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long index = 0;


	index = hash_djb2(key);
	index = index % size;

	return (index);
}
