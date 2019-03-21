#include "lists.h"
/**
 * list_len - prints all the elements of a list_t list
 * @h: pointer
 * Return: return the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *aux = h;
	size_t cont = 0;


	if (aux != NULL)
	{
		while (aux != NULL)
		{
			aux = aux->next;
			cont++;
		}
	}

	return (cont);
}
