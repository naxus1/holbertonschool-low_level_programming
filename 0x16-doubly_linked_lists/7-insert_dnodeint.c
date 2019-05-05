#include "lists.h"
int lenght_list(dlistint_t *aux);
/**
 * insert_dnodeint_at_index - add node in the index
 * @h: Double pointer
 * @idx: position to add node
 * @n: number to storage in node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux_nodo, *new_nodo, *ptr_aux;
	unsigned int cont = 1;

	aux_nodo = *h;

	new_nodo = malloc(sizeof(dlistint_t));
	if (new_nodo == NULL)
	{free(new_nodo);
		return (0);
	}
	if (h == NULL)
	{free(new_nodo);
		return (NULL);
	}
	if (idx == 0)
	{new_nodo->next = aux_nodo;
		new_nodo->prev = NULL;
		aux_nodo->prev = new_nodo;
		new_nodo->n = n;
		return (new_nodo);
	}
	while (aux_nodo != NULL)
	{
		if (cont == idx)
		{
			ptr_aux = aux_nodo->next;
			aux_nodo->next = new_nodo;
			new_nodo->prev = aux_nodo;
			new_nodo->next = ptr_aux;
			new_nodo->n = n;
			ptr_aux->prev = new_nodo;
			return (new_nodo);
		}
		cont++;
		aux_nodo = aux_nodo->next;
	}
	free(new_nodo);
	return (NULL);
}
