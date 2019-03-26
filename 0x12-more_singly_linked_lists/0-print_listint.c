#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to a singly-linked
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *aux;

	aux = h;

	if (aux == NULL)
	{
		return (0);
	}

	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		i++;
		aux = aux->next;
	}

	return (i);
}
