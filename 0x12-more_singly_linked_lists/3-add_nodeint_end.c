#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end
 * @head: the start of a singly-linked
 * @n: integer
 *
 * Return: pointer to the list head.
 */

listint_t *add_nodeint_end (listint_t ** head, const int n)
{
	listint_t *new_nodo, *aux_ptr;

	if (head == NULL)
		return (NULL);

	new_nodo = malloc(sizeof(listint_t));
	if (new_nodo == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_nodo;
		return (new_nodo);
	}

	else
	{
		aux_ptr = *head;

		while (aux_ptr->next != NULL)
		{
			aux_ptr = aux_ptr->next;
		}
		aux_ptr->next = new_nodo;
	}

	new_nodo->n = n;
	new_nodo->next = NULL;

	return (*head);
}
