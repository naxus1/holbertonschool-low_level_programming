#include "lists.h"
/**
 * sum_dlistint - sum a dlinked list
 * @head: list
 *
 * Return: sum od elements list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux_nodo;
	int sum = 0;
	aux_nodo = head;

	if(aux_nodo == NULL)
		return (0);
	while(aux_nodo != NULL)
	{
		sum += aux_nodo->n;
		aux_nodo = aux_nodo->next;
	}
	return (sum);
}
