#include "lists.h"

/**
 * free_listint2 - a function that frees linked list
 * @head: the head of the list to be freed
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *next;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}

	*head = NULL;
}
