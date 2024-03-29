#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates an amount of memory to an int
 * @b: an integer
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
