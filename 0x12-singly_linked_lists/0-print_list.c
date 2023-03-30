#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints the lists of the nodes
 * @h: The head of hte node
 * Return: 0 always
 */


size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
