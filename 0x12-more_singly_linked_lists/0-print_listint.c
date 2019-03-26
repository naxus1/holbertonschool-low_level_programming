#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to a singly-linked
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
