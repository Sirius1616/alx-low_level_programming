#include "main.h"

/**
 * _strstr - function that finds a needle in a haystack
 * @haystack: Where to search
 * @needle: what to search
 * Return: 0 if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[i] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				haystack[i] = needle[j];
			}
			else
				return (0);
		}
	}
	return (0);
}
