#include "lists.h"
/**
 * print_list - Pring to list
 * @h: header to print
 * Return: number of elements of list.
 */

size_t print_list(const list_t *h)
{
	const list_t *aux;
	size_t cont;

	aux = h;
	cont = 0;

	if (aux != NULL)
	{
		while (aux != NULL)
		{
			if (aux->str == NULL)
			{
				printf("[%d] (nil)\n", aux->len);
				cont++;
			}
			else
			{
				printf("[%d] %s\n", aux->len, aux->str);
				cont++;
			}
			aux = aux->next;
		}
	}
	return (cont);
}
