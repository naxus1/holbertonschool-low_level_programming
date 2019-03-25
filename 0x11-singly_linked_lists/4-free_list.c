#include "lists.h"
/**
 * free_list - frees linked list
 * @head: Head
 * Return: free memory
 */
void free_list(list_t *head)
{
	list_t *free_me;

	if (head)
	{
		while (head != NULL)
		{
			free_me = head->next;
			free(head->str);
			free(head);
			head = free_me;
		}
	}
}
