#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: the string that the length is to be returned
 * Return: always return length when through
 */




int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
