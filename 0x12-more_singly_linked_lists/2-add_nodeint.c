#include "lists.h"

/**
 * add_nodeint - add nodo to listint_t
 * @head: Double pointer star linked list
 * @n: number to be added to list
 * Return: pointer a new head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodo;

	if (head == NULL)
		return (NULL);

	new_nodo = malloc(sizeof(listint_t));

	if (new_nodo == NULL)
		return (NULL);

	new_nodo->n = n;
	new_nodo->next = *head;

	*head = new_nodo;

	return (new_nodo);
}
