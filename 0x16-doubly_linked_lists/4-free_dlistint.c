#include "lists.h"
/**
 * free_dlistint - free list
 * @head: list
 * Return: free list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t  *aux_nodo;

	while (head->next != NULL)
	{
		aux_nodo = head;
		head = head->next;
		free(aux_nodo);
	}
	free(head);
}
