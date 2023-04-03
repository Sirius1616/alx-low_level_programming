#include "lists.h"

/**
 * sum_listint - a function that sums the list
 * @head: the head of the list
 * Return: count
 */


int sum_listint(listint_t *head)
{
	listint_t *ptr = head;

	int count = 0;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		count += ptr->n;
		ptr = ptr->next;
	}
	return (count);
}
