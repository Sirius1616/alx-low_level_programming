#include "main.h"

/**
 * _strspn - function that counts when a kind of xter is encountered
 * @s: the main character
 * @accept: the character we are scanning through
 * Return: count
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 1;
		for (j = 0; accept[j] != '\0'; i++)
		{
			if (s[i] != accept[j])
			{
				count = 0;
				break;
			}
		}
		if(count == 1)
			break;
	}
	return (i);
}
