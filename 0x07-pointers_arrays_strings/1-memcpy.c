#include "main.h"

/**
 * _memcpy - function that copies n byte of memory to source
 * @dest: destination
 * @src: source
 * @n: bytes to copy
 * Return: destination
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
