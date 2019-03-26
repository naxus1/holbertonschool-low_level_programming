#include "lists.h"

/**
 * free_listint2 - frees the structs
 * @head: a singly-linked listint
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
}
