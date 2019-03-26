#include "lists.h"
/**
 * pop_listint - remove node
 * @head: head linked list
 * Return: number storage in deleted linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int r_num = 0;

	if (*head == NULL)
		return (0);

	p = *head;
	*head = (*head)->next;
	r_num = p->n;
	free(p);

	return (r_num);
}
