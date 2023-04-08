#include <stdio.h>

/**
 * binary_to_uint - a function that converts binary to integer 
 * @b: the character we are converting
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit_value = 1;

	if (b == NULL)
	{
		return 0;
	}

	while (b[bit_value] != '\0')
	{
  		bit_value = bit_value << 1;
	}

	bit_value = bit_value >> 1;

	while (bit_value > 0)
	{
	if (*b == '1')
	{
		result += bit_value;
	}

	else if (*b != '0')
	{
		return 0;
	}

	b++;
	bit_value = bit_value >> 1;
	}
	return (result);
}
