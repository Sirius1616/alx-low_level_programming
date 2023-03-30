#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - a function that adds a node to a list
 * @head: the head of the first node
 * @str: The string to be added
 * Return: *head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}

/**
 * _strlen - function to calculate the length of a const char string
 * @s: string to work with
 * Return: length of string.
 */


int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
