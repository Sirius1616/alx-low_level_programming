#include "lists.h"

/**
 * free_listint2 - a function that frees linked list
 * @head: the head of the list to be freed
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;


	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		*head = ptr;
	}

	*head = NULL;
}
