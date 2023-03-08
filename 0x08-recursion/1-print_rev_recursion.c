#include "main.h"

/**
 * _print_rev_recursion - a function that recursively prints out a string
 * @str: the string to be printed out recursively
 *
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
