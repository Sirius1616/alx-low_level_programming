#include "lists.h"

/**
 * free_listint2 - a function that frees linked list
 * @head: the head of the list to be freed
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;

	}

	*head = NULL;
}
