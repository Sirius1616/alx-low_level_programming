#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int var;
	char *end_ness;

	var = 1;
	end_ness = (char *) &var;

	return ((int)*end_ness);
}
