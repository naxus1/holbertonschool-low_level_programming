#include "lists.h"
/**
 * add_dnodeint - add node in the front the list
 * @head: Double pointer
 * @n: integer to save in the node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo;

	new_nodo = malloc(sizeof(new_nodo));
	if (new_nodo == NULL)
		return (NULL);

	new_nodo->n = n;
	new_nodo->next = *head;
	new_nodo->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_nodo;

	*head = new_nodo;
	return (*head);
}
