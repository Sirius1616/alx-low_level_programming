#include "main.h"
#include "stdlib.h"

/**
 * array_range - a function that create an array
 * @min: minimum memory space
 * @max: maximum memory space
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	len = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
