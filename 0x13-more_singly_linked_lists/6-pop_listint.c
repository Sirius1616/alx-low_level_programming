#include "lists.h"


/**
 * pop_listint - a function that deletes the first node
 * @head: the head node
 * Return: head->n
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr, *headref;

	ptr = *head;
	if (*head == NULL)
		return (0);

	*head = ptr->next;
	free(ptr);
	headref = *head;
	return (headref->n);

}
