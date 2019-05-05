#include "lists.h"
/**
 * free_dlistint - free list
 * @head: list
 * Return: free list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t  *aux_nodo;

	if (!head)
		return;

	while (head)
	{
		aux_nodo = head->next;
		free(head);
		head = aux_nodo;
	}
}
