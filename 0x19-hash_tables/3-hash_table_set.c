#include "hash_tables.h"

/**
 * hash_table_set - creates a hash table
 * @ht: size of the array
 * @key:
 * @value:
 * Return: pointer to the hash_table_t
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;
	hash_node_t *aux;

	const unsigned char *new_key = (const unsigned char *) key;

	if (!ht || !strlen(key) || !ht->size)
		return (0);

	index = key_index(new_key, ht->size);
	aux = ht->array[index];

	if (aux != NULL)
	{
		while (aux != NULL)
		{
			if (strcmp(aux->key, key) == 0)
			{
				aux->value = strdup(value);
				return (1);
			}
			aux = aux->next;
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
