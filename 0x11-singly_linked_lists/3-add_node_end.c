#include "lists.h"

/**
 * add_node_end - adds a node to the end list
 * @head: Double pointer
 * @str: the string
 *
 * Return: List whith new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *nodo_ptr;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		nodo_ptr = *head;
		while (nodo_ptr->next != NULL)
		{
			nodo_ptr = nodo_ptr->next;
		}
		nodo_ptr->next = new;
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
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
