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
	unsigned int i, j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (n < (j + 1))
	{
		ptr = malloc(sizeof(char) * (i + n + 1));
		if (ptr == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (j = 0; s2[j] != '\0' && i < n; j++)
			ptr[i] = s2[j];
		ptr[i] = '\0';
	}
	else
	{
		ptr = malloc(sizeof(char) * (i + j + 1));
			if (ptr == NULL)
				return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++)
			ptr[i] = s2[j];
		ptr[i] = '\0';
	}
	return (ptr);
}
