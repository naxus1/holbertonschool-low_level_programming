#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end list
 * @head: Double pointer
 * @n: the number to save in the node
 *
 * Return: new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo = *head, *aux = NULL;

	if (head == NULL)
		return (NULL);

	new_nodo = malloc(sizeof(dlistint_t));
	if (new_nodo == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_nodo;
		new_nodo->next = NULL;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new_nodo;
	}
	new_nodo->prev = aux;
	new_nodo->n = n;
	return (new_nodo);
}
