#include "lists.h"

/**
 * get_nodeint_at_index - get the number of position indicated
 * @head: head linked_list
 * @index: index to get
 * Return: returns data node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;

	if (head == NULL)
		return (NULL);

	p = head;

	while (i < index && p != NULL)
	{
		p = p->next;
		i++;
	}

	if (i == index)
	{
		return (p);
	}
	else
		return (NULL);
}
