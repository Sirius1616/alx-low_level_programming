#include <stdio.h>

/**
 * flip_bits - a function that flips the bit a give no of bit required
 * @n: the first number
 * @m: the second number
 * Return: x (the bit required)
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned long int xor;

	xor = n ^ m;
	x = 0;

	while (xor > 0)
	{
		x += xor & 1;
		xor >>= 1;
	}
	return (x);
}
