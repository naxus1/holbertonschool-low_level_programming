#include "lists.h"
/**
 * free_listint - frees the linked_list
 * @head: a singly-linked structure
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	p = head;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
