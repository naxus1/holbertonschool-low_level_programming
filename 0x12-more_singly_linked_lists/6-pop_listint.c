#include "lists.h"
/**
 * pop_listint - remove node
 * @head: head linked list
 * Return: number storage in deleted linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int r_num;

	if(head == NULL)
		return (0);

	p = (*head)->next;
	r_num = (*head)->n;
	free(*head);

	*head = p;
	return (r_num);
}
