#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of a character
 * @s: string to check
 * @c: the character
 * Return: returns Null if character is not found
 */


char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	if (s[i] == c)
		return (s);

	return ('\0');
}
