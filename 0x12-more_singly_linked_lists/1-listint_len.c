#include "lists.h"

/**
 * listint_len - find the lenght.
 * @h: a pointer to a singly-linked.
 *
 * Return: number nodes of singly-linked.
 */

size_t listint_len(const listint_t *h)
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
		i++;
		aux = aux->next;
	}
	return (i);
}
