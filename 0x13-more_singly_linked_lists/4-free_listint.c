#include "lists.h"

/**
 * free_listint - a function that frees linked list
 * @head: the head of the list to be freed
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;


	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
