#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that add a node to the end of list
 * @head: the head of an already created list
 * @str: the string we are adding to the head
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* variable declaration */
	list_t *new, *test;
	unsigned int i;

	/* Creating a memory space for the new node to be added*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/* Assigning the length to the string*/
	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->str = strdup(str);
	new->next = NULL;


	/* Checking to see if the previous string is empty else add new node*/
	test = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (test->next != NULL)
			test = test->next;
		test->next = new;
	}
	return (*head);

}
