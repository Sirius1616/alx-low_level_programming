#include "lists.h"

/**
 * insert_nodeint_at_index - a fuction that inserts a node at a particular index 
 * @head: the head of the list
 * @idx: index position
 * @n: the value of the node
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *ptr;
	unsigned int count;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	ptr = *head;
	while (count < idx - 1 && ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	if (count == idx - 1)
	{
		new->next = ptr->next;
		ptr->next = new;
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
}
