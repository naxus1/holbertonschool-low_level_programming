#include "lists.h"

/**
 * listint_len - find the lenght.
 * @h: a pointer to a singly-linked.
 *
 * Return: number nodes of singly-linked.
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
