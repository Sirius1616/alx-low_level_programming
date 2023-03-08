#include "main.h"

/**
 * _print_rev_recursion - a function that recursively prints out a string
 * @str: the string to be printed out recursively
 *
 */

void _print_rev_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(str + 1);
	_putchar(*str);
}
