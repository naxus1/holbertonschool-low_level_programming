#include "hash_tables.h"

/**
 * hash_table_get - creates a hash table
 * @ht: size of the array
 * @key: char
 * Return: pointer to the hash_table_t
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux_node;
	char *dict;
	const unsigned char *new_key = (const unsigned char *) key;

	if (!ht || !strlen(key) || key == NULL)
		return (0);

	index = key_index(new_key, ht->size);
	aux_node = ht->array[index];

	while (aux_node != NULL)
	{
		if (strcmp(key, aux_node->key) == 0)
		{
			dict = aux_node->value;
			return (dict);
		}
		aux_node = aux_node->next;

	}
	return (NULL);

}
