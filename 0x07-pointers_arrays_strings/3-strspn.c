#include "main.h"

/**
 * _strspn - function that counts when a kind of xter is encountered
 * @s: the main character
 * @accept: the character we are scanning through
 * Return: count
 */


unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; i++)
		{
			if (s[i] != accept[j])
			{
				count++;
			}
			else
				break;
		}

	}
	return (count);
}
