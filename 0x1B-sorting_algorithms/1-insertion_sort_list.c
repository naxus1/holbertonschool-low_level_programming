#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Organizes an array using the ins sort method
 *
 * @list: Double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *c, *d;

	if (!list || !*list)
		return;

	c = (*list)->next;

	while (c != NULL)
	{
		d = c->next;
		while (c->prev != NULL && c->prev->n > c->n)
		{
			c->prev->next = c->next;

			if (c->next != NULL)
				c->next->prev = c->prev;
			c->next = c->prev;
			c->prev = c->next->prev;
			c->next->prev = c;

			if (c->prev == NULL)
				*list = c;

			if (c->prev != NULL)
				c->prev->next = c;
			print_list(*list);
		}
		c = d;
	}
}
