#include "hash_tables.h"
/**
 * hash  - Function hash
 * @str: str to hash
 *
 * Return: hash
  */
unsigned long int hash_djb2(const unsigned char *str)
{
        unsigned long hash = 5381;
        int c;

        while (c = *str++)
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

        return hash;
}
