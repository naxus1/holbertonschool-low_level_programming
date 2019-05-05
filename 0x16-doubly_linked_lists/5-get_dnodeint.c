#include "lists.h"
/**
 * get_dnodeint_at_index - gets dnode
 * @head: head
 * @index: index where to fetch elem
 *
 * Return: elem at pos
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont = 0;

	while (cont < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		cont++;
	}

	return (head);
}

