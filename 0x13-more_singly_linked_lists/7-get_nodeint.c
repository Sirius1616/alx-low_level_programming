#include "lists.h"

/**
 * get_nodeint_at_index - a function that gets the node at an index
 * @head: the head of the list
 * @index: the required index
 * Return: the node or NULL if failed
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	unsigned int count = 0;

	ptr = head;

	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);

		ptr = ptr->next;
		count++;
	}

	return (NULL);
}
