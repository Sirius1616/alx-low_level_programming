#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees list
 * @head: the head of the list to be freed
 */

void free_list(list_t *head)
{
	if (head != NULL)
		free(head);
}
