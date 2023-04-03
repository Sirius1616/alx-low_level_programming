#include "lists.h"

/**
 * add_nodeint - a function that adds node to a list
 * @head: the head of the node
 * @n: the value to be added
 * Return: *head
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
