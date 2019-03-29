#include "holberton.h"
/**
 * get_endianness - the endianness
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int x;
	char *char_ptr;

	x = 1;
	char_ptr = (char *) &x;

	return ((int)*char_ptr);
