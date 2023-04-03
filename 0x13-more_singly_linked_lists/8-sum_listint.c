#include "lists.h"

/**
 * sum_listint - a function that sums the list
 * @head: the head of the list
 * Return: count
 */


int sum_listint(listint_t *head)
{
	listint_t *ptr;

	int count = 0;

	ptr = head;

	if (ptr == NULL)
		return (0);

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		count += ptr->n;
	}
	return (count);
}
