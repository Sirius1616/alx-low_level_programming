#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints the lists of the nodes
 * @h: The head of hte node
 * Return: 0 always
 */


size_t print_list(const list_t *h)
{
	if (h->str == NULL)
		printf("[0] (nil)");
	while (h != NULL)
	{
		h = h->next;
		printf("%s", h->str);
	}
	return (0);
}
