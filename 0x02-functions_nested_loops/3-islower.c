#include "main.h"

/**
 * _islower - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
