#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints the lists of the nodes
 * @h: The head of hte node
 * Return: 0 always
 */


size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%d] (nil)", 0);
		else
		{
			printf("[%u] \n%s", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
