#include "main.h"
#include <stdlib.h>

/**
 * my_memset - a heler function for _calloc
 * @p: the space to be filled
 * @x: the character to fill
 * @n: the bytes to be filled
 * Return: p
 */

void *my_memset(char *p, char x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = x;
	}
	return (p);
}

/**
 * _calloc - a function that behaves like calloc
 * @nmemb: number of elements
 * @size: the size
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	my_memset(ptr, 0, nmemb * size);

	return (ptr);
}
