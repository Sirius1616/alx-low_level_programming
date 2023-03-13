#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that create an array with malloc
 * @size: the size of the array
 * @c: To be filled with
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (0);
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (0);
}
