#include "lists.h"
/**
 * reverse_listint - frees the linked_list
 * @head: Head to change
 * Return: listint_t, reverse listint
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	if(*head == NULL)
		return (0);

	ptr1 = *head;
	*head = (*head)->next;
	ptr2 = *head;
	ptr1->next = NULL;

	if (*head == NULL)
	{
		*head = ptr1;
		return (*head);
	}
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
		ptr2->next = ptr1;
		ptr1 = ptr2;
		ptr2 = *head;
	}

	(*head)->next = ptr1;
	return (*head);
}
