#include "lists.h"


/**
 * pop_listint - a function that deletes the first node
 * @head: the head node
 * Return: head->n
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	ptr = *head;
	if (*head == NULL)
		return (0);
	data = (*head)->n;
	*head = ptr->next;
	free(ptr);
	return (data);

}
