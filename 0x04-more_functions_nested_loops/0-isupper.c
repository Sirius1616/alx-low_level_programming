#include "main.h"

/**
 * _isupper - checks if it's upper case or lower case
 * @c: What is checked for upper or lower case
 * The programme is meant to check if the alphabet is a lower or upper case
 * Return: 0 Always when the programme ends
 */

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
