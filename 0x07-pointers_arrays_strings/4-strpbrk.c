#include "main.h"

/**
 * _strpbrk - a function that returns a part of string in another string
 * @s: the main string
 * @accept: the sub_string
 * Return: always s
 */

char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
