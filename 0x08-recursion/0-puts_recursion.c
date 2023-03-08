#include "main.h"

/**
 * _puts_recursion - a function that recursively prints out a string
 * @str: the string to be printed out recursively
 *
 */

void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*str);
	_puts_recursion(str + 1);

}
