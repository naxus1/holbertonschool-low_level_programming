#include "lists.h"
/**
 * free_listint2 - frees a linked list sets head to NULL
 * @head: head of linked list
  * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	while (head != NULL && *head != NULL)
	{
		p = *head;
		*head= (*head)->next;
		free(p);
	}
}
