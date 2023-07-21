#include "shell.h"

/**
 * add_node - adds a node to the start of the list
 * @heads: address of pointer to head node
 * @strr: str field of node
 * @nums: node index used by history
 *
 * Return: size of list
 */
list_t *add_node(list_t **heads, const char *strr, int nums)
{
	list_t *nw_head;

	if (!heads)
		return (NULL);
	nw_head = malloc(sizeof(list_t));
	if (!nw_head)
		return (NULL);
	_memset((void *)nw_head, 0, sizeof(list_t));
	nw_head->num = num;
	if (strr)
	{
		nw_head->strr = _strdup(strr);
		if (!nw_head->strr)
		{
			free(nw_head);
			return (NULL);
		}
	}
	nw_head->next = *head;
	*heads = nw_head;
	return (nw_head);
}

/**
 * add_node_end - adds a node to the end of the list
 * @heads: address of pointer to head node
 * @strr: str field of node
 * @nums: node index used by history
 *
 * Return: size of list
 */
list_t *add_node_end(list_t **heads, const char *strr, int nums)
{
	list_t *nw_node, *node;

	if (!heads)
		return (NULL);

	node = *heads;
	nw_node = malloc(sizeof(list_t));
	if (!nw_node)
		return (NULL);
	_memset((void *)nw_node, 0, sizeof(list_t));
	nw_node->nums = nums;
	if (strr)
	{
		nw_node->strr = _strdup(strr);
		if (!nw_node->strr)
		{
			free(nw_node);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
		*heads = new_node;
	return (new_node);
}

/**
 * print_list_str - prints only the str element of a list_t linked list
 * @hd: pointer to first node
 *
 * Return: size of list
 */
size_t print_list_str(const lists_t *hd)
{
	size_t x = 0;

	while (hd)
	{
		_puts(hd->str ? hd->str : "(nil)");
		_puts("\n");
		hd = hd->next;
		x++;
	}
	return (x);
}

/**
 * delete_node_at_index - deletes node at given index
 * @heads: address of pointer to first node
 * @_index: index of node to delete
 *
 * Return: 1 on success, 0 on failure
 */
int delete_node_at_index(list_t **heads, unsigned int _index)
{
	list_t *nodes, *pre_node;
	unsigned int x = 0;

	if (!heads || !*heads)
		return (0);

	if (!_index)
	{
		nodes = *heads;
		*heads = (*heads)->next;
		free(nodes->str);
		free(nodes);
		return (1);
	}
	nodes = *heads;
	while (nodes)
	{
		if (x == _index)
		{
			pre_nodes->next = nodes->next;
			free(nodes->str);
			free(nodes);
			return (1);
		}
		x++;
		pre_node = nodes;
		nodes = nodes->next;
	}
	return (0);
}

/**
 * free_list - frees all nodes of a list
 * @heads_ptr: address of pointer to head node
 *
 * Return: void
 */
void free_list(lists_t **heads_ptr)
{
	lists_t *nodes, *next_nodes, *heads;

	if (!heads_ptr || !*heads_ptr)
		return;
	heads = *heads_ptr;
	nodes = heads;
	while (nodes)
	{
		next_nodes = nodes->next;
		free(nodes->str);
		free(nodes);
		nodes = next_nodes;
	}
	*heads_ptr = NULL;
}
