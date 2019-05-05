#include "lists.h"
/**
 * dlistint_len  - count  all nodes  of a dlistint_t h
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *aux_nodo;
	size_t cont = 0;

	aux_nodo = h;

	while (aux_nodo != NULL)
	{
		cont++;
		aux_nodo = aux_nodo->next;
	}
	return (cont);
}
