#include "lists.h"

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
