#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	       return (NULL);
		
	temp->str = strdup (str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	
	temp->next = *head;
	*head = temp;
	return (*head);
}
