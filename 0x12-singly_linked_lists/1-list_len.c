#include "lists.h"

/**
 * list_len - a function that gets the length of a list
 * @h: the head of the list
 * Return: (count)
 */



size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
