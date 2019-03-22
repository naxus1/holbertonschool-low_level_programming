#include "lists.h"
/**
 * add_node - returns the number of elements in a linked list_t list
 * @head: structure pointer for list
 * @str: string to copy
 * Return: return the number of elements in list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->str = strdup(str);
		node->len = _strlen(str);
		node->next = *head;
		*head = node;
	}
	return (node);
}

/**
 * _strlen - length of a string
 * @string: string.
 * Return: integer.
 */

int _strlen(const char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{}

	return (i);
}

