#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node
 * @head: the start
 * @idx: position where colocate new nodo
 * @n: number to storage
 *
 * Return: listint_t, new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr_next, *new, *aux_h, *new_head;
	unsigned int i = 1;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}

	aux_h = *head;
	while (i < idx && aux_h != NULL)
	{
		aux_h = aux_h->next;
		i++;
	}
	if (i == idx)
	{
		new_head = aux_h;
		aux_h = aux_h->next;
		ptr_next = aux_h;
		new->n = n;
		new->next = ptr_next;
		new_head->next = new;
		return (new);
	}
	else
		free(new);
		return (NULL);
}
