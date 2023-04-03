#include "lists.h"

/**
 * listint_len - a function that returns the length of a linked list
 * @h: the head of the function
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
		count++;

	return (count);
}
