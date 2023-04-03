#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a linked list
 * @h: the head node of the list
 * Return: count
 */


size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		count++;
	}
	return (count);
}
