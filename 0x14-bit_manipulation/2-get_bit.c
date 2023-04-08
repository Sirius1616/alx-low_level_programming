#include <stdio.h>

/**
 * get_bit - a function that return bit at an index
 * @n: the integer
 * @index: the index position
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 32)
		return (-1);

	else
		bit = (n >> index) & 1;

	return (bit);
}
