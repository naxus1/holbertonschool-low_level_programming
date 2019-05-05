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

	if (*head == NULL)
	{
		new_nodo->prev = *head;
		new_nodo->next = *head;
		new_nodo->n = n;
	}

	else
	{
		new_nodo->next = *head;
		aux_nodo = new_nodo->next;
		aux_nodo->prev = new_nodo;
		new_nodo->n = n;
		new_nodo->prev = NULL;
	}

	*head = new_nodo;
	return (new_nodo);

}
