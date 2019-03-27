#include "lists.h"
/**
 * reverse_listint - frees the linked_list
 * @head: Head to change
 * return: listint_t, reverse listint
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	ptr1 = *head;
	*head = (*head)->next;
	ptr2 = *head;
	ptr1->next = NULL;

	while((*head)->next != NULL)
	{
		*head = (*head)->next;
		ptr2->next = ptr1;
		ptr1 = ptr2;
		ptr2 = *head;
	}

	(*head)->next = ptr1;
	return(*head);
}
