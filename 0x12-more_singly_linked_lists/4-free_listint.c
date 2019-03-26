#include "lists.h"
/**
 * free_listint - frees the linked_list
 * @head: a singly-linked structure
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
