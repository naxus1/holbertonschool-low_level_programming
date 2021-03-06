#include "lists.h"
/**
 * sum_listint - adds values of n
 * @head: star of single_link
 *
 * Return: int, the sum of values in n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
