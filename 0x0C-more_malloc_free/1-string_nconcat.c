#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that return concatenated strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to be assigned from s2
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, x, y;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < (j + 1))
	{
		ptr = malloc(sizeof(char) * (i + n + 1));
		if (ptr == NULL)
			return (NULL);
		for (x = 0; s1[x] != '\0'; x++)
			ptr[x] = s1[x];
		for (y = 0; y < j && y < n; y++, x++)
			ptr[x] = s2[y];
		ptr[x] = '\0';
	}
	else
	{
		ptr = malloc(sizeof(char) * (i + j + 1));
			if (ptr == NULL)
				return (NULL);
		for (x = 0; s1[x] != '\0'; x++)
			ptr[x] = s1[x];
		for (y = 0; s2[y] != '\0'; y++, x++)
			ptr[x] = s2[y];
		ptr[x] = '\0';
	}
	return (ptr);
}
