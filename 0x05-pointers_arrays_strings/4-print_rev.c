#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: The string to be printed in reverse
 *
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}
	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
