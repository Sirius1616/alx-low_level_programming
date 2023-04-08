#include <stdio.h>

/**
 * clear_bit - a function that clears bit at a particular index
 * @n: the integer
 * @index: the index to delete
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;

	if (index > 32)
		return (-1);

	else
	{
		*n = *n & (~(one << index));
	}

	return (1);
}
