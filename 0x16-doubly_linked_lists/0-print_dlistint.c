#include "lists.h"
/**
 * print_dlistint - review if linked is a list cycles
 * @h: list to print
 * Return: number od nodes of h
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux_nodo;
	size_t  cont = 0;

	aux_nodo = h;

	while (aux_nodo != NULL)
	{
		printf("%d\n", aux_nodo->n);
		aux_nodo = aux_nodo->next;
		cont++;
	}
	return (cont);
}
