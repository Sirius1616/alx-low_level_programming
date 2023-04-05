#include "lists.h"

/**
 * delete_nodeint_at_index - a function that delete the node at an index
 * @head: the head of the node
 * @index: the index where we are deleting
 * Return: (-1) if fail or (1) if success
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;

	current = *head;
	prev = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 1)
		{
			prev = current;
			current = current->next;
			index--;
		}
		prev->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);


}
