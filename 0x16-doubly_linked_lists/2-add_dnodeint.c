#include "lists.h"
/**
 * add_dnodeint - add node in the front the list
 * @head: Double pointer
 * @n: integer to save in the node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo = NULL;
	dlistint_t *aux_nodo = NULL;

	new_nodo = malloc(sizeof(new_nodo));
	if (new_node == NULL)
		return (NULL);

	new_nodo->n = n;
	new_nodo->next = *head;
	new_nodo->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new_nodo;
	return (*head);
}
